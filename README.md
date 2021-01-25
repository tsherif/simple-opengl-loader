Simple OpenGL Loader
====================

An extensible, cross-platform, single-header C/C++ OpenGL loader library.

Usage
-----
For Windows Win32 or Linux X11 applications, the simplest usage involves defining `SOGL_MAJOR_VERSION`, `SOGL_MINOR_VERSION`and either `SOGL_IMPLEMENTATION_WIN32` or `SOGL_IMPLEMENTATION_X11` before including the `simple-opengl-loader.h` header file, and then calling `sogl_loadOpenGL()` after setting up an OpenGL context.

```C
    #define SOGL_MAJOR_VERSION 4
    #define SOGL_MINOR_VERSION 5
    #define SOGL_IMPLEMENTATION_WIN32 /* or SOGL_IMPLEMENTATION_X11 */
    #include "simple-opengl-loader.h"

    int main() {

        /* Set up OpenGL context */
        
        sogl_loadOpenGL();

        /* Use OpenGL functions */
    }
```

It is recommended that `simple-opengl-loader.h` be the first include to prevent other OpenGL headers from setting up their own definitions. 

Platform support is included for Windows Win32 and Linux X11 applications by defining the `SOGL_IMPLEMENTATION_WIN32` or `SOGL_IMPLEMENTATION_X11` constants, respectively. The `SOGL_IMPLEMENTATION_X11` implementation requires the application be linked against `libdl`. See below to implement support for other platforms.

OpenGL extensions can be loaded by defining a constant of the format `SOGL_<extension name>` before including the `simple-opengl-loader.h` header.

```C
    #define SOGL_MAJOR_VERSION 4
    #define SOGL_MINOR_VERSION 5
    #define SOGL_OVR_multiview
    #define SOGL_KHR_parallel_shader_compile
    #define SOGL_IMPLEMENTATION_WIN32
    #include "simple-opengl-loader.h"
```

Note that the loader makes no guarantees about OpenGL version or extension support. `sogl_loadOpenGL()` returns a boolean value indicating whether it was able to load all requested functions, and the function `sogl_getFailures` returns a null-terminated array of the names of the functions that failed to load (up to a maximum defined by `SOGL_MAX_REPORTED_FAILURES`). 

```C
    if (!sogl_loadOpenGL()) {
        const char **failures = sogl_getFailures();
        int i = 1;
        while (*failures) {
            fprintf(stderr, "Failed to load function %s\n", *failures);
            failures++;
        }
    }
```

Platform Support
----------------

Platform-specific logic is encapsulated in two functions `sogl_loadOpenGLFunction()` which takes the name of an OpenGL function as a null-terminated ASCII string and returns a pointer to the appropriate function, and `sogl_cleanup()`, which should perform any cleanup necessary after loading is complete, e.g. freeing library handles.

```C
void *sogl_loadOpenGLFunction(const char *name);
void sogl_cleanup();
```

Implementations for these functions are provided out-of-the-box for Windows Win32 and Linux X11 applications (see above). Support for other platforms simply requires implementing these two functions for the target platform and defining the constant `SOGL_IMPLEMENTATION` instead of either of the platform-specific implementation constants.

```C
    #define SOGL_MAJOR_VERSION 4
    #define SOGL_MINOR_VERSION 5
    #define SOGL_IMPLEMENTATION
    #include "simple-opengl-loader.h"

    void *sogl_loadOpenGLFunction(const char *name) {
        /* Custom function loader implementation */
    }
    
    void sogl_cleanup() {
        /* Custom cleanup implementation */ 
    }
```