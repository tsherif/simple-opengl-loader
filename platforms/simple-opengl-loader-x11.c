/*********************************************************************************
* The MIT License (MIT)
*
* Copyright (c) 2020 Tarek Sherif
*
* Permission is hereby granted, free of charge, to any person obtaining a copy of
* this software and associated documentation files (the "Software"), to deal in
* the Software without restriction, including without limitation the rights to
* use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
* the Software, and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
* FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
* COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
* IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
* CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**********************************************************************************/

#include <dlfcn.h>

static void* sogl_libHandle = NULL;

void *sogl_loadOpenGLFunction(const char *name) {  
    if (!sogl_libHandle) {
        /*
            Loading "libGL.so.1" seems more reliable. On my machine, switching to an nvidia GPU 
            leaves "libGL.so" pointing to the mesa driver.
            Grabbed this from similar logic in GLFW.
            https://github.com/glfw/glfw/blob/0b2660f39fc7111a3ef2723b03f5111afbe75bb9/src/glx_context.c#L258-L277 
        */
        sogl_libHandle = dlopen("libGL.so.1", RTLD_LAZY | RTLD_LOCAL);
        if (!sogl_libHandle) {
            sogl_libHandle = dlopen("libGL.so", RTLD_LAZY | RTLD_LOCAL);   
        }
    }

    void *fn = dlsym(sogl_libHandle, name);

    return fn;
}

void sogl_cleanup() {
    if (sogl_libHandle) {
        dlclose(sogl_libHandle);
        sogl_libHandle = NULL;
    }
}
