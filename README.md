Simple OpenGL Loader
====================

An extensible, cross-platform, (almost) single-file C/C++ OpenGL loader library.

Usage
-----
If OpenGL functions will be loaded and used in a single file, the simplest usage involves defining the `SOGL_MAJOR_VERSION`, `SOGL_MINOR_VERSION`and `SOGL_IMPLEMENTATION` constants before including the `simple-opengl-loader.h` header file, and then calling `sogl_loadOpenGL()` after an OpenGL context has been set up by the application.

```C
    #define SOGL_MAJOR_VERSION 4
    #define SOGL_MINOR_VERSION 5
    #define SOGL_IMPLEMENTATION
    #include "simple-opengl-loader.h"

    int main() {

        /* Set up OpenGL context */
        
        sogl_loadOpenGL();

        /* Use OpenGL functions */
    }
```

It is recommended that `simple-opengl-loader.h` be the first include to prevent other OpenGL headers from setting up their own definitions. 

The application should be compiled with the appropriate platform-specific implementation in the `platforms` directory (named `simple-opengl-loader-<platform>.c`). See below to implement support for other platforms. Note that the these dependencies are self-contained and dynamically link to any system libraries they need. They do **not** require the application to explicitly be linked to system OpenGL libararies (`Opengl32` on Windows, `libGL` on Linux).

If OpenGL functions will be used in more then one file, the `SOGL_MAJOR_VERSION` and `SOGL_MINOR_VERSION` should match everywhere the header is included (and `SOGL_IMPLEMENTATION` should be defined exactly once). A simple way to make this more convenient is to wrap the `simple-opengl-loader.h` include and version defines in a separate header file and include the latter throughout the application.

```C
    // File sogl-config.h
    #define SOGL_MAJOR_VERSION 4
    #define SOGL_MINOR_VERSION 5
    #include "simple-opengl-loader.h"
```

```C
    // Application files where OpenGL is used.
    // In the file where OpenGL is loaded: #define SOGL_IMPLEMENTATION
    #include "sogl-config.h"
```

OpenGL extensions can be loaded by defining a constant of the format `SOGL_<extension name>` before including the `simple-opengl-loader.h` header.

```C
    #define SOGL_MAJOR_VERSION 4
    #define SOGL_MINOR_VERSION 5
    #define SOGL_OVR_multiview
    #define SOGL_KHR_parallel_shader_compile
    #define SOGL_IMPLEMENTATION
    #include "simple-opengl-loader.h"
```

Note that the loader makes no guarantees about OpenGL version or extension support. `sogl_loadOpenGL()` returns a boolean value indicating whether any functions failed to load, and the function `sogl_getFailures` returns a null-terminated array of the names of the functions that failed to load (up to a maximum defined by `SOGL_MAX_REPORTED_FAILURES`). 

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

Implementations are provided in the `platforms` directory and can be compiled directly into applications that wish to use them. Support for other platforms simply involves implementing these functions for the target platform.
