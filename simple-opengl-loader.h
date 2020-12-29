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

#ifndef SIMPLE_OPENGL_LOADER
#define SIMPLE_OPENGL_LOADER 1
#define __gl_glcorearb_h_ 1
#define __gl_h_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SOGL_MAJOR_VERSION
#define SOGL_MAJOR_VERSION 1
#endif

#ifndef SOGL_MINOR_VERSION
#define SOGL_MINOR_VERSION 0
#endif

#define SOGL_TEST_VERSION(major, minor) major < SOGL_MAJOR_VERSION || major == SOGL_MAJOR_VERSION && minor <= SOGL_MINOR_VERSION

/* SINGLE API FUNCTION TO BE USED BY APPLICATION */
extern void sogl_loadOpenGL();

/* MUST BE DEFINED PER PLATFORM */
extern void* sogl_loadOpenGLFunction(const char* name);
extern void sogl_cleanup();

/*
** Copyright 2013-2020 The Khronos Group Inc.
** SPDX-License-Identifier: MIT
**
** This header is generated from the Khronos OpenGL / OpenGL ES XML
** API Registry. The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   https://github.com/KhronosGroup/OpenGL-Registry
*/

#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#endif

#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef APIENTRYP
#define APIENTRYP APIENTRY *
#endif
#ifndef GLAPI
#define GLAPI extern
#endif

/* glcorearb.h is for use with OpenGL core profile implementations.
** It should should be placed in the same directory as gl.h and
** included as <GL/glcorearb.h>.
**
** glcorearb.h includes only APIs in the latest OpenGL core profile
** implementation together with APIs in newer ARB extensions which 
** can be supported by the core profile. It does not, and never will
** include functionality removed from the core profile, such as
** fixed-function vertex and fragment processing.
**
** Do not #include both <GL/glcorearb.h> and either of <GL/gl.h> or
** <GL/glext.h> in the same source file.
*/

/* Generated C header for:
 * API: gl
 * Profile: core
 * Versions considered: .*
 * Versions emitted: .*
 * Default extensions included: glcore
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#ifndef __khrplatform_h_
#define __khrplatform_h_

/*
** Copyright (c) 2008-2018 The Khronos Group Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and/or associated documentation files (the
** "Materials"), to deal in the Materials without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Materials, and to
** permit persons to whom the Materials are furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Materials.
**
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/

/* Khronos platform-specific types and definitions.
 *
 * The master copy of khrplatform.h is maintained in the Khronos EGL
 * Registry repository at https://github.com/KhronosGroup/EGL-Registry
 * The last semantic modification to khrplatform.h was at commit ID:
 *      67a3e0864c2d75ea5287b9f3d2eb74a745936692
 *
 * Adopters may modify this file to suit their platform. Adopters are
 * encouraged to submit platform specific modifications to the Khronos
 * group so that they can be included in future versions of this file.
 * Please submit changes by filing pull requests or issues on
 * the EGL Registry repository linked above.
 *
 *
 * See the Implementer's Guidelines for information about where this file
 * should be located on your system and for more details of its use:
 *    http://www.khronos.org/registry/implementers_guide.pdf
 *
 * This file should be included as
 *        #include <KHR/khrplatform.h>
 * by Khronos client API header files that use its types and defines.
 *
 * The types in khrplatform.h should only be used to define API-specific types.
 *
 * Types defined in khrplatform.h:
 *    khronos_int8_t              signed   8  bit
 *    khronos_uint8_t             unsigned 8  bit
 *    khronos_int16_t             signed   16 bit
 *    khronos_uint16_t            unsigned 16 bit
 *    khronos_int32_t             signed   32 bit
 *    khronos_uint32_t            unsigned 32 bit
 *    khronos_int64_t             signed   64 bit
 *    khronos_uint64_t            unsigned 64 bit
 *    khronos_intptr_t            signed   same number of bits as a pointer
 *    khronos_uintptr_t           unsigned same number of bits as a pointer
 *    khronos_ssize_t             signed   size
 *    khronos_usize_t             unsigned size
 *    khronos_float_t             signed   32 bit floating point
 *    khronos_time_ns_t           unsigned 64 bit time in nanoseconds
 *    khronos_utime_nanoseconds_t unsigned time interval or absolute time in
 *                                         nanoseconds
 *    khronos_stime_nanoseconds_t signed time interval in nanoseconds
 *    khronos_boolean_enum_t      enumerated boolean type. This should
 *      only be used as a base type when a client API's boolean type is
 *      an enum. Client APIs which use an integer or other type for
 *      booleans cannot use this as the base type for their boolean.
 *
 * Tokens defined in khrplatform.h:
 *
 *    KHRONOS_FALSE, KHRONOS_TRUE Enumerated boolean false/true values.
 *
 *    KHRONOS_SUPPORT_INT64 is 1 if 64 bit integers are supported; otherwise 0.
 *    KHRONOS_SUPPORT_FLOAT is 1 if floats are supported; otherwise 0.
 *
 * Calling convention macros defined in this file:
 *    KHRONOS_APICALL
 *    KHRONOS_APIENTRY
 *    KHRONOS_APIATTRIBUTES
 *
 * These may be used in function prototypes as:
 *
 *      KHRONOS_APICALL void KHRONOS_APIENTRY funcname(
 *                                  int arg1,
 *                                  int arg2) KHRONOS_APIATTRIBUTES;
 */

#if defined(__SCITECH_SNAP__) && !defined(KHRONOS_STATIC)
#   define KHRONOS_STATIC 1
#endif

/*-------------------------------------------------------------------------
 * Definition of KHRONOS_APICALL
 *-------------------------------------------------------------------------
 * This precedes the return type of the function in the function prototype.
 */
#if defined(KHRONOS_STATIC)
    /* If the preprocessor constant KHRONOS_STATIC is defined, make the
     * header compatible with static linking. */
#   define KHRONOS_APICALL
#elif defined(_WIN32)
#   define KHRONOS_APICALL __declspec(dllimport)
#elif defined (__SYMBIAN32__)
#   define KHRONOS_APICALL IMPORT_C
#elif defined(__ANDROID__)
#   define KHRONOS_APICALL __attribute__((visibility("default")))
#else
#   define KHRONOS_APICALL
#endif

/*-------------------------------------------------------------------------
 * Definition of KHRONOS_APIENTRY
 *-------------------------------------------------------------------------
 * This follows the return type of the function  and precedes the function
 * name in the function prototype.
 */
#if defined(_WIN32) && !defined(_WIN32_WCE) && !defined(__SCITECH_SNAP__)
    /* Win32 but not WinCE */
#   define KHRONOS_APIENTRY __stdcall
#else
#   define KHRONOS_APIENTRY
#endif

/*-------------------------------------------------------------------------
 * Definition of KHRONOS_APIATTRIBUTES
 *-------------------------------------------------------------------------
 * This follows the closing parenthesis of the function prototype arguments.
 */
#if defined (__ARMCC_2__)
#define KHRONOS_APIATTRIBUTES __softfp
#else
#define KHRONOS_APIATTRIBUTES
#endif

/*-------------------------------------------------------------------------
 * basic type definitions
 *-----------------------------------------------------------------------*/
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || defined(__GNUC__) || defined(__SCO__) || defined(__USLC__)


/*
 * Using <stdint.h>
 */
#include <stdint.h>
typedef int32_t                 khronos_int32_t;
typedef uint32_t                khronos_uint32_t;
typedef int64_t                 khronos_int64_t;
typedef uint64_t                khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#elif defined(__VMS ) || defined(__sgi)

/*
 * Using <inttypes.h>
 */
#include <inttypes.h>
typedef int32_t                 khronos_int32_t;
typedef uint32_t                khronos_uint32_t;
typedef int64_t                 khronos_int64_t;
typedef uint64_t                khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#elif defined(_WIN32) && !defined(__SCITECH_SNAP__)

/*
 * Win32
 */
typedef __int32                 khronos_int32_t;
typedef unsigned __int32        khronos_uint32_t;
typedef __int64                 khronos_int64_t;
typedef unsigned __int64        khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#elif defined(__sun__) || defined(__digital__)

/*
 * Sun or Digital
 */
typedef int                     khronos_int32_t;
typedef unsigned int            khronos_uint32_t;
#if defined(__arch64__) || defined(_LP64)
typedef long int                khronos_int64_t;
typedef unsigned long int       khronos_uint64_t;
#else
typedef long long int           khronos_int64_t;
typedef unsigned long long int  khronos_uint64_t;
#endif /* __arch64__ */
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#elif 0

/*
 * Hypothetical platform with no float or int64 support
 */
typedef int                     khronos_int32_t;
typedef unsigned int            khronos_uint32_t;
#define KHRONOS_SUPPORT_INT64   0
#define KHRONOS_SUPPORT_FLOAT   0

#else

/*
 * Generic fallback
 */
#include <stdint.h>
typedef int32_t                 khronos_int32_t;
typedef uint32_t                khronos_uint32_t;
typedef int64_t                 khronos_int64_t;
typedef uint64_t                khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#endif


/*
 * Types that are (so far) the same on all platforms
 */
typedef signed   char          khronos_int8_t;
typedef unsigned char          khronos_uint8_t;
typedef signed   short int     khronos_int16_t;
typedef unsigned short int     khronos_uint16_t;

/*
 * Types that differ between LLP64 and LP64 architectures - in LLP64,
 * pointers are 64 bits, but 'long' is still 32 bits. Win64 appears
 * to be the only LLP64 architecture in current use.
 */
#ifdef _WIN64
typedef signed   long long int khronos_intptr_t;
typedef unsigned long long int khronos_uintptr_t;
typedef signed   long long int khronos_ssize_t;
typedef unsigned long long int khronos_usize_t;
#else
typedef signed   long  int     khronos_intptr_t;
typedef unsigned long  int     khronos_uintptr_t;
typedef signed   long  int     khronos_ssize_t;
typedef unsigned long  int     khronos_usize_t;
#endif

#if KHRONOS_SUPPORT_FLOAT
/*
 * Float type
 */
typedef          float         khronos_float_t;
#endif

#if KHRONOS_SUPPORT_INT64
/* Time types
 *
 * These types can be used to represent a time interval in nanoseconds or
 * an absolute Unadjusted System Time.  Unadjusted System Time is the number
 * of nanoseconds since some arbitrary system event (e.g. since the last
 * time the system booted).  The Unadjusted System Time is an unsigned
 * 64 bit value that wraps back to 0 every 584 years.  Time intervals
 * may be either signed or unsigned.
 */
typedef khronos_uint64_t       khronos_utime_nanoseconds_t;
typedef khronos_int64_t        khronos_stime_nanoseconds_t;
#endif

/*
 * Dummy value used to pad enum types to 32 bits.
 */
#ifndef KHRONOS_MAX_ENUM
#define KHRONOS_MAX_ENUM 0x7FFFFFFF
#endif

/*
 * Enumerated boolean type
 *
 * Values other than zero should be considered to be true.  Therefore
 * comparisons should not be made against KHRONOS_TRUE.
 */
typedef enum {
    KHRONOS_FALSE = 0,
    KHRONOS_TRUE  = 1,
    KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = KHRONOS_MAX_ENUM
} khronos_boolean_enum_t;

#endif /* __khrplatform_h_ */


#if SOGL_TEST_VERSION(1, 0)
typedef void GLvoid;
typedef unsigned int GLenum;
typedef khronos_float_t GLfloat;
typedef int GLint;
typedef int GLsizei;
typedef unsigned int GLbitfield;
typedef double GLdouble;
typedef unsigned int GLuint;
typedef unsigned char GLboolean;
typedef khronos_uint8_t GLubyte;
#define GL_DEPTH_BUFFER_BIT               0x00000100
#define GL_STENCIL_BUFFER_BIT             0x00000400
#define GL_COLOR_BUFFER_BIT               0x00004000
#define GL_FALSE                          0
#define GL_TRUE                           1
#define GL_POINTS                         0x0000
#define GL_LINES                          0x0001
#define GL_LINE_LOOP                      0x0002
#define GL_LINE_STRIP                     0x0003
#define GL_TRIANGLES                      0x0004
#define GL_TRIANGLE_STRIP                 0x0005
#define GL_TRIANGLE_FAN                   0x0006
#define GL_QUADS                          0x0007
#define GL_NEVER                          0x0200
#define GL_LESS                           0x0201
#define GL_EQUAL                          0x0202
#define GL_LEQUAL                         0x0203
#define GL_GREATER                        0x0204
#define GL_NOTEQUAL                       0x0205
#define GL_GEQUAL                         0x0206
#define GL_ALWAYS                         0x0207
#define GL_ZERO                           0
#define GL_ONE                            1
#define GL_SRC_COLOR                      0x0300
#define GL_ONE_MINUS_SRC_COLOR            0x0301
#define GL_SRC_ALPHA                      0x0302
#define GL_ONE_MINUS_SRC_ALPHA            0x0303
#define GL_DST_ALPHA                      0x0304
#define GL_ONE_MINUS_DST_ALPHA            0x0305
#define GL_DST_COLOR                      0x0306
#define GL_ONE_MINUS_DST_COLOR            0x0307
#define GL_SRC_ALPHA_SATURATE             0x0308
#define GL_NONE                           0
#define GL_FRONT_LEFT                     0x0400
#define GL_FRONT_RIGHT                    0x0401
#define GL_BACK_LEFT                      0x0402
#define GL_BACK_RIGHT                     0x0403
#define GL_FRONT                          0x0404
#define GL_BACK                           0x0405
#define GL_LEFT                           0x0406
#define GL_RIGHT                          0x0407
#define GL_FRONT_AND_BACK                 0x0408
#define GL_NO_ERROR                       0
#define GL_INVALID_ENUM                   0x0500
#define GL_INVALID_VALUE                  0x0501
#define GL_INVALID_OPERATION              0x0502
#define GL_OUT_OF_MEMORY                  0x0505
#define GL_CW                             0x0900
#define GL_CCW                            0x0901
#define GL_POINT_SIZE                     0x0B11
#define GL_POINT_SIZE_RANGE               0x0B12
#define GL_POINT_SIZE_GRANULARITY         0x0B13
#define GL_LINE_SMOOTH                    0x0B20
#define GL_LINE_WIDTH                     0x0B21
#define GL_LINE_WIDTH_RANGE               0x0B22
#define GL_LINE_WIDTH_GRANULARITY         0x0B23
#define GL_POLYGON_MODE                   0x0B40
#define GL_POLYGON_SMOOTH                 0x0B41
#define GL_CULL_FACE                      0x0B44
#define GL_CULL_FACE_MODE                 0x0B45
#define GL_FRONT_FACE                     0x0B46
#define GL_DEPTH_RANGE                    0x0B70
#define GL_DEPTH_TEST                     0x0B71
#define GL_DEPTH_WRITEMASK                0x0B72
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#define GL_DEPTH_FUNC                     0x0B74
#define GL_STENCIL_TEST                   0x0B90
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#define GL_STENCIL_FUNC                   0x0B92
#define GL_STENCIL_VALUE_MASK             0x0B93
#define GL_STENCIL_FAIL                   0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#define GL_STENCIL_REF                    0x0B97
#define GL_STENCIL_WRITEMASK              0x0B98
#define GL_VIEWPORT                       0x0BA2
#define GL_DITHER                         0x0BD0
#define GL_BLEND_DST                      0x0BE0
#define GL_BLEND_SRC                      0x0BE1
#define GL_BLEND                          0x0BE2
#define GL_LOGIC_OP_MODE                  0x0BF0
#define GL_DRAW_BUFFER                    0x0C01
#define GL_READ_BUFFER                    0x0C02
#define GL_SCISSOR_BOX                    0x0C10
#define GL_SCISSOR_TEST                   0x0C11
#define GL_COLOR_CLEAR_VALUE              0x0C22
#define GL_COLOR_WRITEMASK                0x0C23
#define GL_DOUBLEBUFFER                   0x0C32
#define GL_STEREO                         0x0C33
#define GL_LINE_SMOOTH_HINT               0x0C52
#define GL_POLYGON_SMOOTH_HINT            0x0C53
#define GL_UNPACK_SWAP_BYTES              0x0CF0
#define GL_UNPACK_LSB_FIRST               0x0CF1
#define GL_UNPACK_ROW_LENGTH              0x0CF2
#define GL_UNPACK_SKIP_ROWS               0x0CF3
#define GL_UNPACK_SKIP_PIXELS             0x0CF4
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_SWAP_BYTES                0x0D00
#define GL_PACK_LSB_FIRST                 0x0D01
#define GL_PACK_ROW_LENGTH                0x0D02
#define GL_PACK_SKIP_ROWS                 0x0D03
#define GL_PACK_SKIP_PIXELS               0x0D04
#define GL_PACK_ALIGNMENT                 0x0D05
#define GL_MAX_TEXTURE_SIZE               0x0D33
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#define GL_SUBPIXEL_BITS                  0x0D50
#define GL_TEXTURE_1D                     0x0DE0
#define GL_TEXTURE_2D                     0x0DE1
#define GL_TEXTURE_WIDTH                  0x1000
#define GL_TEXTURE_HEIGHT                 0x1001
#define GL_TEXTURE_BORDER_COLOR           0x1004
#define GL_DONT_CARE                      0x1100
#define GL_FASTEST                        0x1101
#define GL_NICEST                         0x1102
#define GL_BYTE                           0x1400
#define GL_UNSIGNED_BYTE                  0x1401
#define GL_SHORT                          0x1402
#define GL_UNSIGNED_SHORT                 0x1403
#define GL_INT                            0x1404
#define GL_UNSIGNED_INT                   0x1405
#define GL_FLOAT                          0x1406
#define GL_STACK_OVERFLOW                 0x0503
#define GL_STACK_UNDERFLOW                0x0504
#define GL_CLEAR                          0x1500
#define GL_AND                            0x1501
#define GL_AND_REVERSE                    0x1502
#define GL_COPY                           0x1503
#define GL_AND_INVERTED                   0x1504
#define GL_NOOP                           0x1505
#define GL_XOR                            0x1506
#define GL_OR                             0x1507
#define GL_NOR                            0x1508
#define GL_EQUIV                          0x1509
#define GL_INVERT                         0x150A
#define GL_OR_REVERSE                     0x150B
#define GL_COPY_INVERTED                  0x150C
#define GL_OR_INVERTED                    0x150D
#define GL_NAND                           0x150E
#define GL_SET                            0x150F
#define GL_TEXTURE                        0x1702
#define GL_COLOR                          0x1800
#define GL_DEPTH                          0x1801
#define GL_STENCIL                        0x1802
#define GL_STENCIL_INDEX                  0x1901
#define GL_DEPTH_COMPONENT                0x1902
#define GL_RED                            0x1903
#define GL_GREEN                          0x1904
#define GL_BLUE                           0x1905
#define GL_ALPHA                          0x1906
#define GL_RGB                            0x1907
#define GL_RGBA                           0x1908
#define GL_POINT                          0x1B00
#define GL_LINE                           0x1B01
#define GL_FILL                           0x1B02
#define GL_KEEP                           0x1E00
#define GL_REPLACE                        0x1E01
#define GL_INCR                           0x1E02
#define GL_DECR                           0x1E03
#define GL_VENDOR                         0x1F00
#define GL_RENDERER                       0x1F01
#define GL_VERSION                        0x1F02
#define GL_EXTENSIONS                     0x1F03
#define GL_NEAREST                        0x2600
#define GL_LINEAR                         0x2601
#define GL_NEAREST_MIPMAP_NEAREST         0x2700
#define GL_LINEAR_MIPMAP_NEAREST          0x2701
#define GL_NEAREST_MIPMAP_LINEAR          0x2702
#define GL_LINEAR_MIPMAP_LINEAR           0x2703
#define GL_TEXTURE_MAG_FILTER             0x2800
#define GL_TEXTURE_MIN_FILTER             0x2801
#define GL_TEXTURE_WRAP_S                 0x2802
#define GL_TEXTURE_WRAP_T                 0x2803
#define GL_REPEAT                         0x2901
typedef void (APIENTRYP PFNGLCULLFACEPROC) (GLenum mode);
typedef void (APIENTRYP PFNGLFRONTFACEPROC) (GLenum mode);
typedef void (APIENTRYP PFNGLHINTPROC) (GLenum target, GLenum mode);
typedef void (APIENTRYP PFNGLLINEWIDTHPROC) (GLfloat width);
typedef void (APIENTRYP PFNGLPOINTSIZEPROC) (GLfloat size);
typedef void (APIENTRYP PFNGLPOLYGONMODEPROC) (GLenum face, GLenum mode);
typedef void (APIENTRYP PFNGLSCISSORPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXPARAMETERFPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLTEXPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRYP PFNGLTEXPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLTEXPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLTEXIMAGE1DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXIMAGE2DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLDRAWBUFFERPROC) (GLenum buf);
typedef void (APIENTRYP PFNGLCLEARPROC) (GLbitfield mask);
typedef void (APIENTRYP PFNGLCLEARCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (APIENTRYP PFNGLCLEARSTENCILPROC) (GLint s);
typedef void (APIENTRYP PFNGLCLEARDEPTHPROC) (GLdouble depth);
typedef void (APIENTRYP PFNGLSTENCILMASKPROC) (GLuint mask);
typedef void (APIENTRYP PFNGLCOLORMASKPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (APIENTRYP PFNGLDEPTHMASKPROC) (GLboolean flag);
typedef void (APIENTRYP PFNGLDISABLEPROC) (GLenum cap);
typedef void (APIENTRYP PFNGLENABLEPROC) (GLenum cap);
typedef void (APIENTRYP PFNGLFINISHPROC) (void);
typedef void (APIENTRYP PFNGLFLUSHPROC) (void);
typedef void (APIENTRYP PFNGLBLENDFUNCPROC) (GLenum sfactor, GLenum dfactor);
typedef void (APIENTRYP PFNGLLOGICOPPROC) (GLenum opcode);
typedef void (APIENTRYP PFNGLSTENCILFUNCPROC) (GLenum func, GLint ref, GLuint mask);
typedef void (APIENTRYP PFNGLSTENCILOPPROC) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (APIENTRYP PFNGLDEPTHFUNCPROC) (GLenum func);
typedef void (APIENTRYP PFNGLPIXELSTOREFPROC) (GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLPIXELSTOREIPROC) (GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLREADBUFFERPROC) (GLenum src);
typedef void (APIENTRYP PFNGLREADPIXELSPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
typedef void (APIENTRYP PFNGLGETBOOLEANVPROC) (GLenum pname, GLboolean *data);
typedef void (APIENTRYP PFNGLGETDOUBLEVPROC) (GLenum pname, GLdouble *data);
typedef GLenum (APIENTRYP PFNGLGETERRORPROC) (void);
typedef void (APIENTRYP PFNGLGETFLOATVPROC) (GLenum pname, GLfloat *data);
typedef void (APIENTRYP PFNGLGETINTEGERVPROC) (GLenum pname, GLint *data);
typedef const GLubyte *(APIENTRYP PFNGLGETSTRINGPROC) (GLenum name);
typedef void (APIENTRYP PFNGLGETTEXIMAGEPROC) (GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETTEXLEVELPARAMETERFVPROC) (GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETTEXLEVELPARAMETERIVPROC) (GLenum target, GLint level, GLenum pname, GLint *params);
typedef GLboolean (APIENTRYP PFNGLISENABLEDPROC) (GLenum cap);
typedef void (APIENTRYP PFNGLDEPTHRANGEPROC) (GLdouble n, GLdouble f);
typedef void (APIENTRYP PFNGLVIEWPORTPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLCULLFACEPROC glCullFace;
extern PFNGLFRONTFACEPROC glFrontFace;
extern PFNGLHINTPROC glHint;
extern PFNGLLINEWIDTHPROC glLineWidth;
extern PFNGLPOINTSIZEPROC glPointSize;
extern PFNGLPOLYGONMODEPROC glPolygonMode;
extern PFNGLSCISSORPROC glScissor;
extern PFNGLTEXPARAMETERFPROC glTexParameterf;
extern PFNGLTEXPARAMETERFVPROC glTexParameterfv;
extern PFNGLTEXPARAMETERIPROC glTexParameteri;
extern PFNGLTEXPARAMETERIVPROC glTexParameteriv;
extern PFNGLTEXIMAGE1DPROC glTexImage1D;
extern PFNGLTEXIMAGE2DPROC glTexImage2D;
extern PFNGLDRAWBUFFERPROC glDrawBuffer;
extern PFNGLCLEARPROC glClear;
extern PFNGLCLEARCOLORPROC glClearColor;
extern PFNGLCLEARSTENCILPROC glClearStencil;
extern PFNGLCLEARDEPTHPROC glClearDepth;
extern PFNGLSTENCILMASKPROC glStencilMask;
extern PFNGLCOLORMASKPROC glColorMask;
extern PFNGLDEPTHMASKPROC glDepthMask;
extern PFNGLDISABLEPROC glDisable;
extern PFNGLENABLEPROC glEnable;
extern PFNGLFINISHPROC glFinish;
extern PFNGLFLUSHPROC glFlush;
extern PFNGLBLENDFUNCPROC glBlendFunc;
extern PFNGLLOGICOPPROC glLogicOp;
extern PFNGLSTENCILFUNCPROC glStencilFunc;
extern PFNGLSTENCILOPPROC glStencilOp;
extern PFNGLDEPTHFUNCPROC glDepthFunc;
extern PFNGLPIXELSTOREFPROC glPixelStoref;
extern PFNGLPIXELSTOREIPROC glPixelStorei;
extern PFNGLREADBUFFERPROC glReadBuffer;
extern PFNGLREADPIXELSPROC glReadPixels;
extern PFNGLGETBOOLEANVPROC glGetBooleanv;
extern PFNGLGETDOUBLEVPROC glGetDoublev;
extern PFNGLGETERRORPROC glGetError;
extern PFNGLGETFLOATVPROC glGetFloatv;
extern PFNGLGETINTEGERVPROC glGetIntegerv;
extern PFNGLGETSTRINGPROC glGetString;
extern PFNGLGETTEXIMAGEPROC glGetTexImage;
extern PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv;
extern PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv;
extern PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv;
extern PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv;
extern PFNGLISENABLEDPROC glIsEnabled;
extern PFNGLDEPTHRANGEPROC glDepthRange;
extern PFNGLVIEWPORTPROC glViewport;
#endif /* GL_VERSION_1_0 */

#if SOGL_TEST_VERSION(1, 1)
typedef khronos_float_t GLclampf;
typedef double GLclampd;
#define GL_COLOR_LOGIC_OP                 0x0BF2
#define GL_POLYGON_OFFSET_UNITS           0x2A00
#define GL_POLYGON_OFFSET_POINT           0x2A01
#define GL_POLYGON_OFFSET_LINE            0x2A02
#define GL_POLYGON_OFFSET_FILL            0x8037
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#define GL_TEXTURE_BINDING_1D             0x8068
#define GL_TEXTURE_BINDING_2D             0x8069
#define GL_TEXTURE_INTERNAL_FORMAT        0x1003
#define GL_TEXTURE_RED_SIZE               0x805C
#define GL_TEXTURE_GREEN_SIZE             0x805D
#define GL_TEXTURE_BLUE_SIZE              0x805E
#define GL_TEXTURE_ALPHA_SIZE             0x805F
#define GL_DOUBLE                         0x140A
#define GL_PROXY_TEXTURE_1D               0x8063
#define GL_PROXY_TEXTURE_2D               0x8064
#define GL_R3_G3_B2                       0x2A10
#define GL_RGB4                           0x804F
#define GL_RGB5                           0x8050
#define GL_RGB8                           0x8051
#define GL_RGB10                          0x8052
#define GL_RGB12                          0x8053
#define GL_RGB16                          0x8054
#define GL_RGBA2                          0x8055
#define GL_RGBA4                          0x8056
#define GL_RGB5_A1                        0x8057
#define GL_RGBA8                          0x8058
#define GL_RGB10_A2                       0x8059
#define GL_RGBA12                         0x805A
#define GL_RGBA16                         0x805B
#define GL_VERTEX_ARRAY                   0x8074
typedef void (APIENTRYP PFNGLDRAWARRAYSPROC) (GLenum mode, GLint first, GLsizei count);
typedef void (APIENTRYP PFNGLDRAWELEMENTSPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices);
typedef void (APIENTRYP PFNGLGETPOINTERVPROC) (GLenum pname, void **params);
typedef void (APIENTRYP PFNGLPOLYGONOFFSETPROC) (GLfloat factor, GLfloat units);
typedef void (APIENTRYP PFNGLCOPYTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (APIENTRYP PFNGLCOPYTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLBINDTEXTUREPROC) (GLenum target, GLuint texture);
typedef void (APIENTRYP PFNGLDELETETEXTURESPROC) (GLsizei n, const GLuint *textures);
typedef void (APIENTRYP PFNGLGENTEXTURESPROC) (GLsizei n, GLuint *textures);
typedef GLboolean (APIENTRYP PFNGLISTEXTUREPROC) (GLuint texture);
extern PFNGLDRAWARRAYSPROC glDrawArrays;
extern PFNGLDRAWELEMENTSPROC glDrawElements;
extern PFNGLGETPOINTERVPROC glGetPointerv;
extern PFNGLPOLYGONOFFSETPROC glPolygonOffset;
extern PFNGLCOPYTEXIMAGE1DPROC glCopyTexImage1D;
extern PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D;
extern PFNGLCOPYTEXSUBIMAGE1DPROC glCopyTexSubImage1D;
extern PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D;
extern PFNGLTEXSUBIMAGE1DPROC glTexSubImage1D;
extern PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D;
extern PFNGLBINDTEXTUREPROC glBindTexture;
extern PFNGLDELETETEXTURESPROC glDeleteTextures;
extern PFNGLGENTEXTURESPROC glGenTextures;
extern PFNGLISTEXTUREPROC glIsTexture;
#endif /* GL_VERSION_1_1 */

#if SOGL_TEST_VERSION(1, 2)
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
typedef void (APIENTRYP PFNGLTEXIMAGE3DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
extern PFNGLTEXIMAGE3DPROC glTexImage3D;
extern PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;
extern PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;
#endif /* GL_VERSION_1_2 */

#if SOGL_TEST_VERSION(1, 3)
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_CLAMP_TO_BORDER                0x812D
typedef void (APIENTRYP PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void (APIENTRYP PFNGLSAMPLECOVERAGEPROC) (GLfloat value, GLboolean invert);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint level, void *img);
extern PFNGLACTIVETEXTUREPROC glActiveTexture;
extern PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
extern PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
extern PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
extern PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
extern PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
#endif /* GL_VERSION_1_3 */

#if SOGL_TEST_VERSION(1, 4)
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_DEPTH_COMPONENT24              0x81A6
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_MIRRORED_REPEAT                0x8370
#define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
#define GL_TEXTURE_LOD_BIAS               0x8501
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508
#define GL_TEXTURE_DEPTH_SIZE             0x884A
#define GL_TEXTURE_COMPARE_MODE           0x884C
#define GL_TEXTURE_COMPARE_FUNC           0x884D
#define GL_BLEND_COLOR                    0x8005
#define GL_BLEND_EQUATION                 0x8009
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_FUNC_ADD                       0x8006
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
typedef void (APIENTRYP PFNGLPOINTPARAMETERFPROC) (GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLPOINTPARAMETERFVPROC) (GLenum pname, const GLfloat *params);
typedef void (APIENTRYP PFNGLPOINTPARAMETERIPROC) (GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLPOINTPARAMETERIVPROC) (GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLBLENDCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (APIENTRYP PFNGLBLENDEQUATIONPROC) (GLenum mode);
extern PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
extern PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;
extern PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;
extern PFNGLPOINTPARAMETERFPROC glPointParameterf;
extern PFNGLPOINTPARAMETERFVPROC glPointParameterfv;
extern PFNGLPOINTPARAMETERIPROC glPointParameteri;
extern PFNGLPOINTPARAMETERIVPROC glPointParameteriv;
extern PFNGLBLENDCOLORPROC glBlendColor;
extern PFNGLBLENDEQUATIONPROC glBlendEquation;
#endif /* GL_VERSION_1_4 */

#if SOGL_TEST_VERSION(1, 5)
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765
#define GL_QUERY_COUNTER_BITS             0x8864
#define GL_CURRENT_QUERY                  0x8865
#define GL_QUERY_RESULT                   0x8866
#define GL_QUERY_RESULT_AVAILABLE         0x8867
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY                      0x88B8
#define GL_WRITE_ONLY                     0x88B9
#define GL_READ_WRITE                     0x88BA
#define GL_BUFFER_ACCESS                  0x88BB
#define GL_BUFFER_MAPPED                  0x88BC
#define GL_BUFFER_MAP_POINTER             0x88BD
#define GL_STREAM_DRAW                    0x88E0
#define GL_STREAM_READ                    0x88E1
#define GL_STREAM_COPY                    0x88E2
#define GL_STATIC_DRAW                    0x88E4
#define GL_STATIC_READ                    0x88E5
#define GL_STATIC_COPY                    0x88E6
#define GL_DYNAMIC_DRAW                   0x88E8
#define GL_DYNAMIC_READ                   0x88E9
#define GL_DYNAMIC_COPY                   0x88EA
#define GL_SAMPLES_PASSED                 0x8914
#define GL_SRC1_ALPHA                     0x8589
typedef void (APIENTRYP PFNGLGENQUERIESPROC) (GLsizei n, GLuint *ids);
typedef void (APIENTRYP PFNGLDELETEQUERIESPROC) (GLsizei n, const GLuint *ids);
typedef GLboolean (APIENTRYP PFNGLISQUERYPROC) (GLuint id);
typedef void (APIENTRYP PFNGLBEGINQUERYPROC) (GLenum target, GLuint id);
typedef void (APIENTRYP PFNGLENDQUERYPROC) (GLenum target);
typedef void (APIENTRYP PFNGLGETQUERYIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTIVPROC) (GLuint id, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUIVPROC) (GLuint id, GLenum pname, GLuint *params);
typedef void (APIENTRYP PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
typedef void (APIENTRYP PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint *buffers);
typedef void (APIENTRYP PFNGLGENBUFFERSPROC) (GLsizei n, GLuint *buffers);
typedef GLboolean (APIENTRYP PFNGLISBUFFERPROC) (GLuint buffer);
typedef void (APIENTRYP PFNGLBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (APIENTRYP PFNGLBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (APIENTRYP PFNGLGETBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
typedef void *(APIENTRYP PFNGLMAPBUFFERPROC) (GLenum target, GLenum access);
typedef GLboolean (APIENTRYP PFNGLUNMAPBUFFERPROC) (GLenum target);
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETBUFFERPOINTERVPROC) (GLenum target, GLenum pname, void **params);
extern PFNGLGENQUERIESPROC glGenQueries;
extern PFNGLDELETEQUERIESPROC glDeleteQueries;
extern PFNGLISQUERYPROC glIsQuery;
extern PFNGLBEGINQUERYPROC glBeginQuery;
extern PFNGLENDQUERYPROC glEndQuery;
extern PFNGLGETQUERYIVPROC glGetQueryiv;
extern PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;
extern PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
extern PFNGLBINDBUFFERPROC glBindBuffer;
extern PFNGLDELETEBUFFERSPROC glDeleteBuffers;
extern PFNGLGENBUFFERSPROC glGenBuffers;
extern PFNGLISBUFFERPROC glIsBuffer;
extern PFNGLBUFFERDATAPROC glBufferData;
extern PFNGLBUFFERSUBDATAPROC glBufferSubData;
extern PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;
extern PFNGLMAPBUFFERPROC glMapBuffer;
extern PFNGLUNMAPBUFFERPROC glUnmapBuffer;
extern PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
extern PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;
#endif /* GL_VERSION_1_5 */

#if SOGL_TEST_VERSION(2, 0)
typedef char GLchar;
typedef khronos_int16_t GLshort;
typedef khronos_int8_t GLbyte;
typedef khronos_uint16_t GLushort;
#define GL_BLEND_EQUATION_RGB             0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
#define GL_CURRENT_VERTEX_ATTRIB          0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_MAX_DRAW_BUFFERS               0x8824
#define GL_DRAW_BUFFER0                   0x8825
#define GL_DRAW_BUFFER1                   0x8826
#define GL_DRAW_BUFFER2                   0x8827
#define GL_DRAW_BUFFER3                   0x8828
#define GL_DRAW_BUFFER4                   0x8829
#define GL_DRAW_BUFFER5                   0x882A
#define GL_DRAW_BUFFER6                   0x882B
#define GL_DRAW_BUFFER7                   0x882C
#define GL_DRAW_BUFFER8                   0x882D
#define GL_DRAW_BUFFER9                   0x882E
#define GL_DRAW_BUFFER10                  0x882F
#define GL_DRAW_BUFFER11                  0x8830
#define GL_DRAW_BUFFER12                  0x8831
#define GL_DRAW_BUFFER13                  0x8832
#define GL_DRAW_BUFFER14                  0x8833
#define GL_DRAW_BUFFER15                  0x8834
#define GL_BLEND_EQUATION_ALPHA           0x883D
#define GL_MAX_VERTEX_ATTRIBS             0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_FRAGMENT_SHADER                0x8B30
#define GL_VERTEX_SHADER                  0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
#define GL_MAX_VARYING_FLOATS             0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE                    0x8B4F
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_1D                     0x8B5D
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_3D                     0x8B5F
#define GL_SAMPLER_CUBE                   0x8B60
#define GL_SAMPLER_1D_SHADOW              0x8B61
#define GL_SAMPLER_2D_SHADOW              0x8B62
#define GL_DELETE_STATUS                  0x8B80
#define GL_COMPILE_STATUS                 0x8B81
#define GL_LINK_STATUS                    0x8B82
#define GL_VALIDATE_STATUS                0x8B83
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_ATTACHED_SHADERS               0x8B85
#define GL_ACTIVE_UNIFORMS                0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_ACTIVE_ATTRIBUTES              0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION       0x8B8C
#define GL_CURRENT_PROGRAM                0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
#define GL_LOWER_LEFT                     0x8CA1
#define GL_UPPER_LEFT                     0x8CA2
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRYP PFNGLDRAWBUFFERSPROC) (GLsizei n, const GLenum *bufs);
typedef void (APIENTRYP PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (APIENTRYP PFNGLSTENCILFUNCSEPARATEPROC) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (APIENTRYP PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
typedef void (APIENTRYP PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (APIENTRYP PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const GLchar *name);
typedef void (APIENTRYP PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef GLuint (APIENTRYP PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROC) (GLenum type);
typedef void (APIENTRYP PFNGLDELETEPROGRAMPROC) (GLuint program);
typedef void (APIENTRYP PFNGLDELETESHADERPROC) (GLuint shader);
typedef void (APIENTRYP PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (APIENTRYP PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (APIENTRYP PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (APIENTRYP PFNGLGETACTIVEATTRIBPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (APIENTRYP PFNGLGETATTACHEDSHADERSPROC) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (APIENTRYP PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (APIENTRYP PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (APIENTRYP PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (APIENTRYP PFNGLGETSHADERSOURCEPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef GLint (APIENTRYP PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (APIENTRYP PFNGLGETUNIFORMFVPROC) (GLuint program, GLint location, GLfloat *params);
typedef void (APIENTRYP PFNGLGETUNIFORMIVPROC) (GLuint program, GLint location, GLint *params);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBDVPROC) (GLuint index, GLenum pname, GLdouble *params);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBFVPROC) (GLuint index, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index, GLenum pname, void **pointer);
typedef GLboolean (APIENTRYP PFNGLISPROGRAMPROC) (GLuint program);
typedef GLboolean (APIENTRYP PFNGLISSHADERPROC) (GLuint shader);
typedef void (APIENTRYP PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void (APIENTRYP PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (APIENTRYP PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void (APIENTRYP PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void (APIENTRYP PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRYP PFNGLUNIFORM3FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRYP PFNGLUNIFORM4FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRYP PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void (APIENTRYP PFNGLUNIFORM2IPROC) (GLint location, GLint v0, GLint v1);
typedef void (APIENTRYP PFNGLUNIFORM3IPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRYP PFNGLUNIFORM4IPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRYP PFNGLUNIFORM1FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORM1IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLUNIFORM2IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLUNIFORM3IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLUNIFORM4IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPROC) (GLuint program);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DPROC) (GLuint index, GLdouble x);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FPROC) (GLuint index, GLfloat x);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1FVPROC) (GLuint index, const GLfloat *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SPROC) (GLuint index, GLshort x);
typedef void (APIENTRYP PFNGLVERTEXATTRIB1SVPROC) (GLuint index, const GLshort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2FVPROC) (GLuint index, const GLfloat *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SPROC) (GLuint index, GLshort x, GLshort y);
typedef void (APIENTRYP PFNGLVERTEXATTRIB2SVPROC) (GLuint index, const GLshort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3FVPROC) (GLuint index, const GLfloat *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (APIENTRYP PFNGLVERTEXATTRIB3SVPROC) (GLuint index, const GLshort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NBVPROC) (GLuint index, const GLbyte *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NIVPROC) (GLuint index, const GLint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NSVPROC) (GLuint index, const GLshort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBVPROC) (GLuint index, const GLubyte *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUIVPROC) (GLuint index, const GLuint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUSVPROC) (GLuint index, const GLushort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4BVPROC) (GLuint index, const GLbyte *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4FVPROC) (GLuint index, const GLfloat *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4IVPROC) (GLuint index, const GLint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4SVPROC) (GLuint index, const GLshort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UBVPROC) (GLuint index, const GLubyte *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4UIVPROC) (GLuint index, const GLuint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIB4USVPROC) (GLuint index, const GLushort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
extern PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;
extern PFNGLDRAWBUFFERSPROC glDrawBuffers;
extern PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;
extern PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;
extern PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;
extern PFNGLATTACHSHADERPROC glAttachShader;
extern PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
extern PFNGLCOMPILESHADERPROC glCompileShader;
extern PFNGLCREATEPROGRAMPROC glCreateProgram;
extern PFNGLCREATESHADERPROC glCreateShader;
extern PFNGLDELETEPROGRAMPROC glDeleteProgram;
extern PFNGLDELETESHADERPROC glDeleteShader;
extern PFNGLDETACHSHADERPROC glDetachShader;
extern PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
extern PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
extern PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;
extern PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;
extern PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;
extern PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
extern PFNGLGETPROGRAMIVPROC glGetProgramiv;
extern PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
extern PFNGLGETSHADERIVPROC glGetShaderiv;
extern PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
extern PFNGLGETSHADERSOURCEPROC glGetShaderSource;
extern PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
extern PFNGLGETUNIFORMFVPROC glGetUniformfv;
extern PFNGLGETUNIFORMIVPROC glGetUniformiv;
extern PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;
extern PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;
extern PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;
extern PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;
extern PFNGLISPROGRAMPROC glIsProgram;
extern PFNGLISSHADERPROC glIsShader;
extern PFNGLLINKPROGRAMPROC glLinkProgram;
extern PFNGLSHADERSOURCEPROC glShaderSource;
extern PFNGLUSEPROGRAMPROC glUseProgram;
extern PFNGLUNIFORM1FPROC glUniform1f;
extern PFNGLUNIFORM2FPROC glUniform2f;
extern PFNGLUNIFORM3FPROC glUniform3f;
extern PFNGLUNIFORM4FPROC glUniform4f;
extern PFNGLUNIFORM1IPROC glUniform1i;
extern PFNGLUNIFORM2IPROC glUniform2i;
extern PFNGLUNIFORM3IPROC glUniform3i;
extern PFNGLUNIFORM4IPROC glUniform4i;
extern PFNGLUNIFORM1FVPROC glUniform1fv;
extern PFNGLUNIFORM2FVPROC glUniform2fv;
extern PFNGLUNIFORM3FVPROC glUniform3fv;
extern PFNGLUNIFORM4FVPROC glUniform4fv;
extern PFNGLUNIFORM1IVPROC glUniform1iv;
extern PFNGLUNIFORM2IVPROC glUniform2iv;
extern PFNGLUNIFORM3IVPROC glUniform3iv;
extern PFNGLUNIFORM4IVPROC glUniform4iv;
extern PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;
extern PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;
extern PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
extern PFNGLVALIDATEPROGRAMPROC glValidateProgram;
extern PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d;
extern PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv;
extern PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;
extern PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;
extern PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s;
extern PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv;
extern PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d;
extern PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv;
extern PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;
extern PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;
extern PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s;
extern PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv;
extern PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d;
extern PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv;
extern PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;
extern PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;
extern PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s;
extern PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv;
extern PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;
extern PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;
extern PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;
extern PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;
extern PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;
extern PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;
extern PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;
extern PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv;
extern PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d;
extern PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv;
extern PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
extern PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;
extern PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv;
extern PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s;
extern PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv;
extern PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;
extern PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;
extern PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv;
extern PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
#endif /* GL_VERSION_2_0 */

#if SOGL_TEST_VERSION(2, 1)
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;
extern PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;
extern PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;
extern PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;
extern PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
extern PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;
#endif /* GL_VERSION_2_1 */

#if SOGL_TEST_VERSION(3, 0)
typedef khronos_uint16_t GLhalf;
#define GL_COMPARE_REF_TO_TEXTURE         0x884E
#define GL_CLIP_DISTANCE0                 0x3000
#define GL_CLIP_DISTANCE1                 0x3001
#define GL_CLIP_DISTANCE2                 0x3002
#define GL_CLIP_DISTANCE3                 0x3003
#define GL_CLIP_DISTANCE4                 0x3004
#define GL_CLIP_DISTANCE5                 0x3005
#define GL_CLIP_DISTANCE6                 0x3006
#define GL_CLIP_DISTANCE7                 0x3007
#define GL_MAX_CLIP_DISTANCES             0x0D32
#define GL_MAJOR_VERSION                  0x821B
#define GL_MINOR_VERSION                  0x821C
#define GL_NUM_EXTENSIONS                 0x821D
#define GL_CONTEXT_FLAGS                  0x821E
#define GL_COMPRESSED_RED                 0x8225
#define GL_COMPRESSED_RG                  0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_RGBA32F                        0x8814
#define GL_RGB32F                         0x8815
#define GL_RGBA16F                        0x881A
#define GL_RGB16F                         0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
#define GL_CLAMP_READ_COLOR               0x891C
#define GL_FIXED_ONLY                     0x891D
#define GL_MAX_VARYING_COMPONENTS         0x8B4B
#define GL_TEXTURE_1D_ARRAY               0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
#define GL_R11F_G11F_B10F                 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
#define GL_RGB9_E5                        0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
#define GL_TEXTURE_SHARED_SIZE            0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED           0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD             0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS            0x8C8C
#define GL_SEPARATE_ATTRIBS               0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI                       0x8D70
#define GL_RGB32UI                        0x8D71
#define GL_RGBA16UI                       0x8D76
#define GL_RGB16UI                        0x8D77
#define GL_RGBA8UI                        0x8D7C
#define GL_RGB8UI                         0x8D7D
#define GL_RGBA32I                        0x8D82
#define GL_RGB32I                         0x8D83
#define GL_RGBA16I                        0x8D88
#define GL_RGB16I                         0x8D89
#define GL_RGBA8I                         0x8D8E
#define GL_RGB8I                          0x8D8F
#define GL_RED_INTEGER                    0x8D94
#define GL_GREEN_INTEGER                  0x8D95
#define GL_BLUE_INTEGER                   0x8D96
#define GL_RGB_INTEGER                    0x8D98
#define GL_RGBA_INTEGER                   0x8D99
#define GL_BGR_INTEGER                    0x8D9A
#define GL_BGRA_INTEGER                   0x8D9B
#define GL_SAMPLER_1D_ARRAY               0x8DC0
#define GL_SAMPLER_2D_ARRAY               0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
#define GL_SAMPLER_CUBE_SHADOW            0x8DC5
#define GL_UNSIGNED_INT_VEC2              0x8DC6
#define GL_UNSIGNED_INT_VEC3              0x8DC7
#define GL_UNSIGNED_INT_VEC4              0x8DC8
#define GL_INT_SAMPLER_1D                 0x8DC9
#define GL_INT_SAMPLER_2D                 0x8DCA
#define GL_INT_SAMPLER_3D                 0x8DCB
#define GL_INT_SAMPLER_CUBE               0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
#define GL_QUERY_WAIT                     0x8E13
#define GL_QUERY_NO_WAIT                  0x8E14
#define GL_QUERY_BY_REGION_WAIT           0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
#define GL_BUFFER_ACCESS_FLAGS            0x911F
#define GL_BUFFER_MAP_LENGTH              0x9120
#define GL_BUFFER_MAP_OFFSET              0x9121
#define GL_DEPTH_COMPONENT32F             0x8CAC
#define GL_DEPTH32F_STENCIL8              0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT            0x8218
#define GL_FRAMEBUFFER_UNDEFINED          0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8
#define GL_DEPTH_STENCIL                  0x84F9
#define GL_UNSIGNED_INT_24_8              0x84FA
#define GL_DEPTH24_STENCIL8               0x88F0
#define GL_TEXTURE_STENCIL_SIZE           0x88F1
#define GL_TEXTURE_RED_TYPE               0x8C10
#define GL_TEXTURE_GREEN_TYPE             0x8C11
#define GL_TEXTURE_BLUE_TYPE              0x8C12
#define GL_TEXTURE_ALPHA_TYPE             0x8C13
#define GL_TEXTURE_DEPTH_TYPE             0x8C16
#define GL_UNSIGNED_NORMALIZED            0x8C17
#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING       0x8CA6
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_READ_FRAMEBUFFER               0x8CA8
#define GL_DRAW_FRAMEBUFFER               0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
#define GL_RENDERBUFFER_SAMPLES           0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE           0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_COLOR_ATTACHMENT1              0x8CE1
#define GL_COLOR_ATTACHMENT2              0x8CE2
#define GL_COLOR_ATTACHMENT3              0x8CE3
#define GL_COLOR_ATTACHMENT4              0x8CE4
#define GL_COLOR_ATTACHMENT5              0x8CE5
#define GL_COLOR_ATTACHMENT6              0x8CE6
#define GL_COLOR_ATTACHMENT7              0x8CE7
#define GL_COLOR_ATTACHMENT8              0x8CE8
#define GL_COLOR_ATTACHMENT9              0x8CE9
#define GL_COLOR_ATTACHMENT10             0x8CEA
#define GL_COLOR_ATTACHMENT11             0x8CEB
#define GL_COLOR_ATTACHMENT12             0x8CEC
#define GL_COLOR_ATTACHMENT13             0x8CED
#define GL_COLOR_ATTACHMENT14             0x8CEE
#define GL_COLOR_ATTACHMENT15             0x8CEF
#define GL_COLOR_ATTACHMENT16             0x8CF0
#define GL_COLOR_ATTACHMENT17             0x8CF1
#define GL_COLOR_ATTACHMENT18             0x8CF2
#define GL_COLOR_ATTACHMENT19             0x8CF3
#define GL_COLOR_ATTACHMENT20             0x8CF4
#define GL_COLOR_ATTACHMENT21             0x8CF5
#define GL_COLOR_ATTACHMENT22             0x8CF6
#define GL_COLOR_ATTACHMENT23             0x8CF7
#define GL_COLOR_ATTACHMENT24             0x8CF8
#define GL_COLOR_ATTACHMENT25             0x8CF9
#define GL_COLOR_ATTACHMENT26             0x8CFA
#define GL_COLOR_ATTACHMENT27             0x8CFB
#define GL_COLOR_ATTACHMENT28             0x8CFC
#define GL_COLOR_ATTACHMENT29             0x8CFD
#define GL_COLOR_ATTACHMENT30             0x8CFE
#define GL_COLOR_ATTACHMENT31             0x8CFF
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41
#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_STENCIL_INDEX1                 0x8D46
#define GL_STENCIL_INDEX4                 0x8D47
#define GL_STENCIL_INDEX8                 0x8D48
#define GL_STENCIL_INDEX16                0x8D49
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES                    0x8D57
#define GL_FRAMEBUFFER_SRGB               0x8DB9
#define GL_HALF_FLOAT                     0x140B
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT         0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT         0x0020
#define GL_COMPRESSED_RED_RGTC1           0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
#define GL_COMPRESSED_RG_RGTC2            0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE
#define GL_RG                             0x8227
#define GL_RG_INTEGER                     0x8228
#define GL_R8                             0x8229
#define GL_R16                            0x822A
#define GL_RG8                            0x822B
#define GL_RG16                           0x822C
#define GL_R16F                           0x822D
#define GL_R32F                           0x822E
#define GL_RG16F                          0x822F
#define GL_RG32F                          0x8230
#define GL_R8I                            0x8231
#define GL_R8UI                           0x8232
#define GL_R16I                           0x8233
#define GL_R16UI                          0x8234
#define GL_R32I                           0x8235
#define GL_R32UI                          0x8236
#define GL_RG8I                           0x8237
#define GL_RG8UI                          0x8238
#define GL_RG16I                          0x8239
#define GL_RG16UI                         0x823A
#define GL_RG32I                          0x823B
#define GL_RG32UI                         0x823C
#define GL_VERTEX_ARRAY_BINDING           0x85B5
typedef void (APIENTRYP PFNGLCOLORMASKIPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (APIENTRYP PFNGLGETBOOLEANI_VPROC) (GLenum target, GLuint index, GLboolean *data);
typedef void (APIENTRYP PFNGLGETINTEGERI_VPROC) (GLenum target, GLuint index, GLint *data);
typedef void (APIENTRYP PFNGLENABLEIPROC) (GLenum target, GLuint index);
typedef void (APIENTRYP PFNGLDISABLEIPROC) (GLenum target, GLuint index);
typedef GLboolean (APIENTRYP PFNGLISENABLEDIPROC) (GLenum target, GLuint index);
typedef void (APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKPROC) (GLenum primitiveMode);
typedef void (APIENTRYP PFNGLENDTRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRYP PFNGLBINDBUFFERRANGEPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLBINDBUFFERBASEPROC) (GLenum target, GLuint index, GLuint buffer);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSPROC) (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void (APIENTRYP PFNGLCLAMPCOLORPROC) (GLenum target, GLenum clamp);
typedef void (APIENTRYP PFNGLBEGINCONDITIONALRENDERPROC) (GLuint id, GLenum mode);
typedef void (APIENTRYP PFNGLENDCONDITIONALRENDERPROC) (void);
typedef void (APIENTRYP PFNGLVERTEXATTRIBIPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIIVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIUIVPROC) (GLuint index, GLenum pname, GLuint *params);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IPROC) (GLuint index, GLint x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IPROC) (GLuint index, GLint x, GLint y);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IPROC) (GLuint index, GLint x, GLint y, GLint z);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIPROC) (GLuint index, GLuint x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIPROC) (GLuint index, GLuint x, GLuint y);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IVPROC) (GLuint index, const GLint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IVPROC) (GLuint index, const GLint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IVPROC) (GLuint index, const GLint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IVPROC) (GLuint index, const GLint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIVPROC) (GLuint index, const GLuint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIVPROC) (GLuint index, const GLuint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIVPROC) (GLuint index, const GLuint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIVPROC) (GLuint index, const GLuint *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4BVPROC) (GLuint index, const GLbyte *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4SVPROC) (GLuint index, const GLshort *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UBVPROC) (GLuint index, const GLubyte *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBI4USVPROC) (GLuint index, const GLushort *v);
typedef void (APIENTRYP PFNGLGETUNIFORMUIVPROC) (GLuint program, GLint location, GLuint *params);
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONPROC) (GLuint program, GLuint color, const GLchar *name);
typedef GLint (APIENTRYP PFNGLGETFRAGDATALOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (APIENTRYP PFNGLUNIFORM1UIPROC) (GLint location, GLuint v0);
typedef void (APIENTRYP PFNGLUNIFORM2UIPROC) (GLint location, GLuint v0, GLuint v1);
typedef void (APIENTRYP PFNGLUNIFORM3UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (APIENTRYP PFNGLUNIFORM4UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (APIENTRYP PFNGLUNIFORM1UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLUNIFORM2UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLUNIFORM3UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLUNIFORM4UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (APIENTRYP PFNGLCLEARBUFFERIVPROC) (GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (APIENTRYP PFNGLCLEARBUFFERUIVPROC) (GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (APIENTRYP PFNGLCLEARBUFFERFVPROC) (GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (APIENTRYP PFNGLCLEARBUFFERFIPROC) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte *(APIENTRYP PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);
typedef GLboolean (APIENTRYP PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
typedef void (APIENTRYP PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint *renderbuffers);
typedef void (APIENTRYP PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef GLboolean (APIENTRYP PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
typedef void (APIENTRYP PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
typedef void (APIENTRYP PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint *framebuffers);
typedef void (APIENTRYP PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
typedef GLenum (APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGENERATEMIPMAPPROC) (GLenum target);
typedef void (APIENTRYP PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void *(APIENTRYP PFNGLMAPBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRYP PFNGLBINDVERTEXARRAYPROC) (GLuint array);
typedef void (APIENTRYP PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint *arrays);
typedef void (APIENTRYP PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean (APIENTRYP PFNGLISVERTEXARRAYPROC) (GLuint array);
extern PFNGLCOLORMASKIPROC glColorMaski;
extern PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
extern PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
extern PFNGLENABLEIPROC glEnablei;
extern PFNGLDISABLEIPROC glDisablei;
extern PFNGLISENABLEDIPROC glIsEnabledi;
extern PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
extern PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
extern PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
extern PFNGLBINDBUFFERBASEPROC glBindBufferBase;
extern PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
extern PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
extern PFNGLCLAMPCOLORPROC glClampColor;
extern PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;
extern PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;
extern PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
extern PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
extern PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
extern PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;
extern PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;
extern PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;
extern PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
extern PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;
extern PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;
extern PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;
extern PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
extern PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;
extern PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;
extern PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;
extern PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
extern PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;
extern PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;
extern PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;
extern PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
extern PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;
extern PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;
extern PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;
extern PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;
extern PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
extern PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;
extern PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
extern PFNGLUNIFORM1UIPROC glUniform1ui;
extern PFNGLUNIFORM2UIPROC glUniform2ui;
extern PFNGLUNIFORM3UIPROC glUniform3ui;
extern PFNGLUNIFORM4UIPROC glUniform4ui;
extern PFNGLUNIFORM1UIVPROC glUniform1uiv;
extern PFNGLUNIFORM2UIVPROC glUniform2uiv;
extern PFNGLUNIFORM3UIVPROC glUniform3uiv;
extern PFNGLUNIFORM4UIVPROC glUniform4uiv;
extern PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;
extern PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;
extern PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;
extern PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;
extern PFNGLCLEARBUFFERIVPROC glClearBufferiv;
extern PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
extern PFNGLCLEARBUFFERFVPROC glClearBufferfv;
extern PFNGLCLEARBUFFERFIPROC glClearBufferfi;
extern PFNGLGETSTRINGIPROC glGetStringi;
extern PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
extern PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
extern PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
extern PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
extern PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
extern PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
extern PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
extern PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
extern PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
extern PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
extern PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
extern PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;
extern PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
extern PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;
extern PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
extern PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
extern PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;
extern PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;
extern PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
extern PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;
extern PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
extern PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
extern PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
extern PFNGLISVERTEXARRAYPROC glIsVertexArray;
#endif /* GL_VERSION_3_0 */

#if SOGL_TEST_VERSION(3, 1)
#define GL_SAMPLER_2D_RECT                0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
#define GL_SAMPLER_BUFFER                 0x8DC2
#define GL_INT_SAMPLER_2D_RECT            0x8DCD
#define GL_INT_SAMPLER_BUFFER             0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
#define GL_TEXTURE_BUFFER                 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE        0x8C2B
#define GL_TEXTURE_BINDING_BUFFER         0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_RECTANGLE              0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE      0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE        0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE     0x84F8
#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGB8_SNORM                     0x8F96
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM                      0x8F98
#define GL_RG16_SNORM                     0x8F99
#define GL_RGB16_SNORM                    0x8F9A
#define GL_RGBA16_SNORM                   0x8F9B
#define GL_SIGNED_NORMALIZED              0x8F9C
#define GL_PRIMITIVE_RESTART              0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX        0x8F9E
#define GL_COPY_READ_BUFFER               0x8F36
#define GL_COPY_WRITE_BUFFER              0x8F37
#define GL_UNIFORM_BUFFER                 0x8A11
#define GL_UNIFORM_BUFFER_BINDING         0x8A28
#define GL_UNIFORM_BUFFER_START           0x8A29
#define GL_UNIFORM_BUFFER_SIZE            0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS      0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS    0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS    0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS    0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS    0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE         0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS          0x8A36
#define GL_UNIFORM_TYPE                   0x8A37
#define GL_UNIFORM_SIZE                   0x8A38
#define GL_UNIFORM_NAME_LENGTH            0x8A39
#define GL_UNIFORM_BLOCK_INDEX            0x8A3A
#define GL_UNIFORM_OFFSET                 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE           0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE          0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR           0x8A3E
#define GL_UNIFORM_BLOCK_BINDING          0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE        0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH      0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS  0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX                  0xFFFFFFFFu
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
typedef void (APIENTRYP PFNGLTEXBUFFERPROC) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (APIENTRYP PFNGLPRIMITIVERESTARTINDEXPROC) (GLuint index);
typedef void (APIENTRYP PFNGLCOPYBUFFERSUBDATAPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLGETUNIFORMINDICESPROC) (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMSIVPROC) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMNAMEPROC) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
typedef GLuint (APIENTRYP PFNGLGETUNIFORMBLOCKINDEXPROC) (GLuint program, const GLchar *uniformBlockName);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
typedef void (APIENTRYP PFNGLUNIFORMBLOCKBINDINGPROC) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
extern PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
extern PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
extern PFNGLTEXBUFFERPROC glTexBuffer;
extern PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
extern PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;
extern PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
extern PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
extern PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
extern PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
extern PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
extern PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
extern PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
#endif /* GL_VERSION_3_1 */

#if SOGL_TEST_VERSION(3, 2)
typedef struct __GLsync *GLsync;
typedef khronos_uint64_t GLuint64;
typedef khronos_int64_t GLint64;
#define GL_CONTEXT_CORE_PROFILE_BIT       0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY                0x000A
#define GL_LINE_STRIP_ADJACENCY           0x000B
#define GL_TRIANGLES_ADJACENCY            0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY       0x000D
#define GL_PROGRAM_POINT_SIZE             0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER                0x8DD9
#define GL_GEOMETRY_VERTICES_OUT          0x8916
#define GL_GEOMETRY_INPUT_TYPE            0x8917
#define GL_GEOMETRY_OUTPUT_TYPE           0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES   0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS   0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS  0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS  0x9125
#define GL_CONTEXT_PROFILE_MASK           0x9126
#define GL_DEPTH_CLAMP                    0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION        0x8E4D
#define GL_LAST_VERTEX_CONVENTION         0x8E4E
#define GL_PROVOKING_VERTEX               0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS      0x884F
#define GL_MAX_SERVER_WAIT_TIMEOUT        0x9111
#define GL_OBJECT_TYPE                    0x9112
#define GL_SYNC_CONDITION                 0x9113
#define GL_SYNC_STATUS                    0x9114
#define GL_SYNC_FLAGS                     0x9115
#define GL_SYNC_FENCE                     0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE     0x9117
#define GL_UNSIGNALED                     0x9118
#define GL_SIGNALED                       0x9119
#define GL_ALREADY_SIGNALED               0x911A
#define GL_TIMEOUT_EXPIRED                0x911B
#define GL_CONDITION_SATISFIED            0x911C
#define GL_WAIT_FAILED                    0x911D
#define GL_TIMEOUT_IGNORED                0xFFFFFFFFFFFFFFFFull
#define GL_SYNC_FLUSH_COMMANDS_BIT        0x00000001
#define GL_SAMPLE_POSITION                0x8E50
#define GL_SAMPLE_MASK                    0x8E51
#define GL_SAMPLE_MASK_VALUE              0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS          0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE   0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES                0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE         0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES      0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES      0x910F
#define GL_MAX_INTEGER_SAMPLES            0x9110
typedef void (APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
typedef void (APIENTRYP PFNGLPROVOKINGVERTEXPROC) (GLenum mode);
typedef GLsync (APIENTRYP PFNGLFENCESYNCPROC) (GLenum condition, GLbitfield flags);
typedef GLboolean (APIENTRYP PFNGLISSYNCPROC) (GLsync sync);
typedef void (APIENTRYP PFNGLDELETESYNCPROC) (GLsync sync);
typedef GLenum (APIENTRYP PFNGLCLIENTWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (APIENTRYP PFNGLWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (APIENTRYP PFNGLGETINTEGER64VPROC) (GLenum pname, GLint64 *data);
typedef void (APIENTRYP PFNGLGETSYNCIVPROC) (GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
typedef void (APIENTRYP PFNGLGETINTEGER64I_VPROC) (GLenum target, GLuint index, GLint64 *data);
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERI64VPROC) (GLenum target, GLenum pname, GLint64 *params);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLTEXIMAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXIMAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLGETMULTISAMPLEFVPROC) (GLenum pname, GLuint index, GLfloat *val);
typedef void (APIENTRYP PFNGLSAMPLEMASKIPROC) (GLuint maskNumber, GLbitfield mask);
extern PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
extern PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
extern PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;
extern PFNGLPROVOKINGVERTEXPROC glProvokingVertex;
extern PFNGLFENCESYNCPROC glFenceSync;
extern PFNGLISSYNCPROC glIsSync;
extern PFNGLDELETESYNCPROC glDeleteSync;
extern PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
extern PFNGLWAITSYNCPROC glWaitSync;
extern PFNGLGETINTEGER64VPROC glGetInteger64v;
extern PFNGLGETSYNCIVPROC glGetSynciv;
extern PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;
extern PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
extern PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;
extern PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
extern PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;
extern PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
extern PFNGLSAMPLEMASKIPROC glSampleMaski;
#endif /* GL_VERSION_3_2 */

#if SOGL_TEST_VERSION(3, 3)
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR    0x88FE
#define GL_SRC1_COLOR                     0x88F9
#define GL_ONE_MINUS_SRC1_COLOR           0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA           0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS   0x88FC
#define GL_ANY_SAMPLES_PASSED             0x8C2F
#define GL_SAMPLER_BINDING                0x8919
#define GL_RGB10_A2UI                     0x906F
#define GL_TEXTURE_SWIZZLE_R              0x8E42
#define GL_TEXTURE_SWIZZLE_G              0x8E43
#define GL_TEXTURE_SWIZZLE_B              0x8E44
#define GL_TEXTURE_SWIZZLE_A              0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA           0x8E46
#define GL_TIME_ELAPSED                   0x88BF
#define GL_TIMESTAMP                      0x8E28
#define GL_INT_2_10_10_10_REV             0x8D9F
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
typedef GLint (APIENTRYP PFNGLGETFRAGDATAINDEXPROC) (GLuint program, const GLchar *name);
typedef void (APIENTRYP PFNGLGENSAMPLERSPROC) (GLsizei count, GLuint *samplers);
typedef void (APIENTRYP PFNGLDELETESAMPLERSPROC) (GLsizei count, const GLuint *samplers);
typedef GLboolean (APIENTRYP PFNGLISSAMPLERPROC) (GLuint sampler);
typedef void (APIENTRYP PFNGLBINDSAMPLERPROC) (GLuint unit, GLuint sampler);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, const GLfloat *param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, GLuint *params);
typedef void (APIENTRYP PFNGLQUERYCOUNTERPROC) (GLuint id, GLenum target);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTI64VPROC) (GLuint id, GLenum pname, GLint64 *params);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUI64VPROC) (GLuint id, GLenum pname, GLuint64 *params);
typedef void (APIENTRYP PFNGLVERTEXATTRIBDIVISORPROC) (GLuint index, GLuint divisor);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
extern PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;
extern PFNGLGENSAMPLERSPROC glGenSamplers;
extern PFNGLDELETESAMPLERSPROC glDeleteSamplers;
extern PFNGLISSAMPLERPROC glIsSampler;
extern PFNGLBINDSAMPLERPROC glBindSampler;
extern PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
extern PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;
extern PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
extern PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
extern PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;
extern PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;
extern PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
extern PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;
extern PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
extern PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;
extern PFNGLQUERYCOUNTERPROC glQueryCounter;
extern PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;
extern PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;
extern PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
extern PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;
extern PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;
extern PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;
extern PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;
extern PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;
extern PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;
extern PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;
extern PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;
#endif /* GL_VERSION_3_3 */

#if SOGL_TEST_VERSION(4, 0)
#define GL_SAMPLE_SHADING                 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE       0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_TEXTURE_CUBE_MAP_ARRAY         0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY   0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY         0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW  0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY     0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#define GL_DRAW_INDIRECT_BUFFER           0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING   0x8F43
#define GL_GEOMETRY_SHADER_INVOCATIONS    0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#define GL_MAX_VERTEX_STREAMS             0x8E71
#define GL_DOUBLE_VEC2                    0x8FFC
#define GL_DOUBLE_VEC3                    0x8FFD
#define GL_DOUBLE_VEC4                    0x8FFE
#define GL_DOUBLE_MAT2                    0x8F46
#define GL_DOUBLE_MAT3                    0x8F47
#define GL_DOUBLE_MAT4                    0x8F48
#define GL_DOUBLE_MAT2x3                  0x8F49
#define GL_DOUBLE_MAT2x4                  0x8F4A
#define GL_DOUBLE_MAT3x2                  0x8F4B
#define GL_DOUBLE_MAT3x4                  0x8F4C
#define GL_DOUBLE_MAT4x2                  0x8F4D
#define GL_DOUBLE_MAT4x3                  0x8F4E
#define GL_ACTIVE_SUBROUTINES             0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS     0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH   0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES                0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_NUM_COMPATIBLE_SUBROUTINES     0x8E4A
#define GL_COMPATIBLE_SUBROUTINES         0x8E4B
#define GL_PATCHES                        0x000E
#define GL_PATCH_VERTICES                 0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL      0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL      0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES   0x8E75
#define GL_TESS_GEN_MODE                  0x8E76
#define GL_TESS_GEN_SPACING               0x8E77
#define GL_TESS_GEN_VERTEX_ORDER          0x8E78
#define GL_TESS_GEN_POINT_MODE            0x8E79
#define GL_ISOLINES                       0x8E7A
#define GL_FRACTIONAL_ODD                 0x8E7B
#define GL_FRACTIONAL_EVEN                0x8E7C
#define GL_MAX_PATCH_VERTICES             0x8E7D
#define GL_MAX_TESS_GEN_LEVEL             0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS      0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TESS_EVALUATION_SHADER         0x8E87
#define GL_TESS_CONTROL_SHADER            0x8E88
#define GL_TRANSFORM_FEEDBACK             0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING     0x8E25
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70
typedef void (APIENTRYP PFNGLMINSAMPLESHADINGPROC) (GLfloat value);
typedef void (APIENTRYP PFNGLBLENDEQUATIONIPROC) (GLuint buf, GLenum mode);
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRYP PFNGLBLENDFUNCIPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (APIENTRYP PFNGLDRAWARRAYSINDIRECTPROC) (GLenum mode, const void *indirect);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void *indirect);
typedef void (APIENTRYP PFNGLUNIFORM1DPROC) (GLint location, GLdouble x);
typedef void (APIENTRYP PFNGLUNIFORM2DPROC) (GLint location, GLdouble x, GLdouble y);
typedef void (APIENTRYP PFNGLUNIFORM3DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLUNIFORM4DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRYP PFNGLUNIFORM1DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORM2DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORM3DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORM4DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLGETUNIFORMDVPROC) (GLuint program, GLint location, GLdouble *params);
typedef GLint (APIENTRYP PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) (GLuint program, GLenum shadertype, const GLchar *name);
typedef GLuint (APIENTRYP PFNGLGETSUBROUTINEINDEXPROC) (GLuint program, GLenum shadertype, const GLchar *name);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINENAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (APIENTRYP PFNGLUNIFORMSUBROUTINESUIVPROC) (GLenum shadertype, GLsizei count, const GLuint *indices);
typedef void (APIENTRYP PFNGLGETUNIFORMSUBROUTINEUIVPROC) (GLenum shadertype, GLint location, GLuint *params);
typedef void (APIENTRYP PFNGLGETPROGRAMSTAGEIVPROC) (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
typedef void (APIENTRYP PFNGLPATCHPARAMETERIPROC) (GLenum pname, GLint value);
typedef void (APIENTRYP PFNGLPATCHPARAMETERFVPROC) (GLenum pname, const GLfloat *values);
typedef void (APIENTRYP PFNGLBINDTRANSFORMFEEDBACKPROC) (GLenum target, GLuint id);
typedef void (APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSPROC) (GLsizei n, const GLuint *ids);
typedef void (APIENTRYP PFNGLGENTRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint *ids);
typedef GLboolean (APIENTRYP PFNGLISTRANSFORMFEEDBACKPROC) (GLuint id);
typedef void (APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKPROC) (GLenum mode, GLuint id);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) (GLenum mode, GLuint id, GLuint stream);
typedef void (APIENTRYP PFNGLBEGINQUERYINDEXEDPROC) (GLenum target, GLuint index, GLuint id);
typedef void (APIENTRYP PFNGLENDQUERYINDEXEDPROC) (GLenum target, GLuint index);
typedef void (APIENTRYP PFNGLGETQUERYINDEXEDIVPROC) (GLenum target, GLuint index, GLenum pname, GLint *params);
extern PFNGLMINSAMPLESHADINGPROC glMinSampleShading;
extern PFNGLBLENDEQUATIONIPROC glBlendEquationi;
extern PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
extern PFNGLBLENDFUNCIPROC glBlendFunci;
extern PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;
extern PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
extern PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;
extern PFNGLUNIFORM1DPROC glUniform1d;
extern PFNGLUNIFORM2DPROC glUniform2d;
extern PFNGLUNIFORM3DPROC glUniform3d;
extern PFNGLUNIFORM4DPROC glUniform4d;
extern PFNGLUNIFORM1DVPROC glUniform1dv;
extern PFNGLUNIFORM2DVPROC glUniform2dv;
extern PFNGLUNIFORM3DVPROC glUniform3dv;
extern PFNGLUNIFORM4DVPROC glUniform4dv;
extern PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;
extern PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;
extern PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;
extern PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;
extern PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;
extern PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;
extern PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;
extern PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;
extern PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;
extern PFNGLGETUNIFORMDVPROC glGetUniformdv;
extern PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;
extern PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;
extern PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;
extern PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;
extern PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;
extern PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;
extern PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;
extern PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;
extern PFNGLPATCHPARAMETERIPROC glPatchParameteri;
extern PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;
extern PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
extern PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
extern PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
extern PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
extern PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
extern PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;
extern PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;
extern PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;
extern PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;
extern PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;
#endif /* GL_VERSION_4_0 */

#if SOGL_TEST_VERSION(4, 1)
#define GL_FIXED                          0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_LOW_FLOAT                      0x8DF0
#define GL_MEDIUM_FLOAT                   0x8DF1
#define GL_HIGH_FLOAT                     0x8DF2
#define GL_LOW_INT                        0x8DF3
#define GL_MEDIUM_INT                     0x8DF4
#define GL_HIGH_INT                       0x8DF5
#define GL_SHADER_COMPILER                0x8DFA
#define GL_SHADER_BINARY_FORMATS          0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9
#define GL_MAX_VERTEX_UNIFORM_VECTORS     0x8DFB
#define GL_MAX_VARYING_VECTORS            0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS   0x8DFD
#define GL_RGB565                         0x8D62
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH          0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS     0x87FE
#define GL_PROGRAM_BINARY_FORMATS         0x87FF
#define GL_VERTEX_SHADER_BIT              0x00000001
#define GL_FRAGMENT_SHADER_BIT            0x00000002
#define GL_GEOMETRY_SHADER_BIT            0x00000004
#define GL_TESS_CONTROL_SHADER_BIT        0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT     0x00000010
#define GL_ALL_SHADER_BITS                0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE              0x8258
#define GL_ACTIVE_PROGRAM                 0x8259
#define GL_PROGRAM_PIPELINE_BINDING       0x825A
#define GL_MAX_VIEWPORTS                  0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS         0x825C
#define GL_VIEWPORT_BOUNDS_RANGE          0x825D
#define GL_LAYER_PROVOKING_VERTEX         0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#define GL_UNDEFINED_VERTEX               0x8260
typedef void (APIENTRYP PFNGLRELEASESHADERCOMPILERPROC) (void);
typedef void (APIENTRYP PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (APIENTRYP PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (APIENTRYP PFNGLDEPTHRANGEFPROC) (GLfloat n, GLfloat f);
typedef void (APIENTRYP PFNGLCLEARDEPTHFPROC) (GLfloat d);
typedef void (APIENTRYP PFNGLGETPROGRAMBINARYPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (APIENTRYP PFNGLPROGRAMBINARYPROC) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIPROC) (GLuint program, GLenum pname, GLint value);
typedef void (APIENTRYP PFNGLUSEPROGRAMSTAGESPROC) (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (APIENTRYP PFNGLACTIVESHADERPROGRAMPROC) (GLuint pipeline, GLuint program);
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROGRAMVPROC) (GLenum type, GLsizei count, const GLchar *const*strings);
typedef void (APIENTRYP PFNGLBINDPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef void (APIENTRYP PFNGLDELETEPROGRAMPIPELINESPROC) (GLsizei n, const GLuint *pipelines);
typedef void (APIENTRYP PFNGLGENPROGRAMPIPELINESPROC) (GLsizei n, GLuint *pipelines);
typedef GLboolean (APIENTRYP PFNGLISPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEIVPROC) (GLuint pipeline, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IPROC) (GLuint program, GLint location, GLint v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FPROC) (GLuint program, GLint location, GLfloat v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DPROC) (GLuint program, GLint location, GLdouble v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIPROC) (GLuint program, GLint location, GLuint v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IPROC) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGPROC) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DPROC) (GLuint index, GLdouble x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DVPROC) (GLuint index, const GLdouble *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBLPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLDVPROC) (GLuint index, GLenum pname, GLdouble *params);
typedef void (APIENTRYP PFNGLVIEWPORTARRAYVPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFVPROC) (GLuint index, const GLfloat *v);
typedef void (APIENTRYP PFNGLSCISSORARRAYVPROC) (GLuint first, GLsizei count, const GLint *v);
typedef void (APIENTRYP PFNGLSCISSORINDEXEDPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLSCISSORINDEXEDVPROC) (GLuint index, const GLint *v);
typedef void (APIENTRYP PFNGLDEPTHRANGEARRAYVPROC) (GLuint first, GLsizei count, const GLdouble *v);
typedef void (APIENTRYP PFNGLDEPTHRANGEINDEXEDPROC) (GLuint index, GLdouble n, GLdouble f);
typedef void (APIENTRYP PFNGLGETFLOATI_VPROC) (GLenum target, GLuint index, GLfloat *data);
typedef void (APIENTRYP PFNGLGETDOUBLEI_VPROC) (GLenum target, GLuint index, GLdouble *data);
extern PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
extern PFNGLSHADERBINARYPROC glShaderBinary;
extern PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
extern PFNGLDEPTHRANGEFPROC glDepthRangef;
extern PFNGLCLEARDEPTHFPROC glClearDepthf;
extern PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
extern PFNGLPROGRAMBINARYPROC glProgramBinary;
extern PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;
extern PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;
extern PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;
extern PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;
extern PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;
extern PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;
extern PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;
extern PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;
extern PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;
extern PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;
extern PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;
extern PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;
extern PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;
extern PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d;
extern PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv;
extern PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;
extern PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;
extern PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;
extern PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;
extern PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;
extern PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;
extern PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d;
extern PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv;
extern PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;
extern PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;
extern PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;
extern PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;
extern PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;
extern PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;
extern PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d;
extern PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv;
extern PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;
extern PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;
extern PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;
extern PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;
extern PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;
extern PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;
extern PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d;
extern PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv;
extern PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;
extern PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;
extern PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;
extern PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;
extern PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;
extern PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv;
extern PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv;
extern PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv;
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv;
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv;
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv;
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv;
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv;
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv;
extern PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;
extern PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;
extern PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d;
extern PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d;
extern PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d;
extern PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d;
extern PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv;
extern PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv;
extern PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv;
extern PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv;
extern PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
extern PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv;
extern PFNGLVIEWPORTARRAYVPROC glViewportArrayv;
extern PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf;
extern PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv;
extern PFNGLSCISSORARRAYVPROC glScissorArrayv;
extern PFNGLSCISSORINDEXEDPROC glScissorIndexed;
extern PFNGLSCISSORINDEXEDVPROC glScissorIndexedv;
extern PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv;
extern PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed;
extern PFNGLGETFLOATI_VPROC glGetFloati_v;
extern PFNGLGETDOUBLEI_VPROC glGetDoublei_v;
#endif /* GL_VERSION_4_1 */

#if SOGL_TEST_VERSION(4, 2)
#define GL_COPY_READ_BUFFER_BINDING       0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING      0x8F37
#define GL_TRANSFORM_FEEDBACK_ACTIVE      0x8E24
#define GL_TRANSFORM_FEEDBACK_PAUSED      0x8E23
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH  0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH  0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE   0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH    0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT   0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH    0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE     0x912E
#define GL_NUM_SAMPLE_COUNTS              0x9380
#define GL_MIN_MAP_BUFFER_ALIGNMENT       0x90BC
#define GL_ATOMIC_COUNTER_BUFFER          0x92C0
#define GL_ATOMIC_COUNTER_BUFFER_BINDING  0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START    0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE     0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS     0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS   0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS   0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS   0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS  0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER    0x92DB
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT      0x00000002
#define GL_UNIFORM_BARRIER_BIT            0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT      0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#define GL_COMMAND_BARRIER_BIT            0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT       0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT     0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT      0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT        0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT     0x00001000
#define GL_ALL_BARRIER_BITS               0xFFFFFFFF
#define GL_MAX_IMAGE_UNITS                0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_BINDING_NAME             0x8F3A
#define GL_IMAGE_BINDING_LEVEL            0x8F3B
#define GL_IMAGE_BINDING_LAYERED          0x8F3C
#define GL_IMAGE_BINDING_LAYER            0x8F3D
#define GL_IMAGE_BINDING_ACCESS           0x8F3E
#define GL_IMAGE_1D                       0x904C
#define GL_IMAGE_2D                       0x904D
#define GL_IMAGE_3D                       0x904E
#define GL_IMAGE_2D_RECT                  0x904F
#define GL_IMAGE_CUBE                     0x9050
#define GL_IMAGE_BUFFER                   0x9051
#define GL_IMAGE_1D_ARRAY                 0x9052
#define GL_IMAGE_2D_ARRAY                 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY           0x9054
#define GL_IMAGE_2D_MULTISAMPLE           0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY     0x9056
#define GL_INT_IMAGE_1D                   0x9057
#define GL_INT_IMAGE_2D                   0x9058
#define GL_INT_IMAGE_3D                   0x9059
#define GL_INT_IMAGE_2D_RECT              0x905A
#define GL_INT_IMAGE_CUBE                 0x905B
#define GL_INT_IMAGE_BUFFER               0x905C
#define GL_INT_IMAGE_1D_ARRAY             0x905D
#define GL_INT_IMAGE_2D_ARRAY             0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY       0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE       0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D          0x9062
#define GL_UNSIGNED_INT_IMAGE_2D          0x9063
#define GL_UNSIGNED_INT_IMAGE_3D          0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT     0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE        0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER      0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY    0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY    0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#define GL_MAX_IMAGE_SAMPLES              0x906D
#define GL_IMAGE_BINDING_FORMAT           0x906E
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS      0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS    0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS    0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS    0x90CF
#define GL_COMPRESSED_RGBA_BPTC_UNORM     0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
#define GL_TEXTURE_IMMUTABLE_FORMAT       0x912F
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (APIENTRYP PFNGLGETINTERNALFORMATIVPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
typedef void (APIENTRYP PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLBINDIMAGETEXTUREPROC) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (APIENTRYP PFNGLMEMORYBARRIERPROC) (GLbitfield barriers);
typedef void (APIENTRYP PFNGLTEXSTORAGE1DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (APIENTRYP PFNGLTEXSTORAGE2DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXSTORAGE3DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) (GLenum mode, GLuint id, GLsizei instancecount);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
extern PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance;
extern PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance;
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance;
extern PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ;
extern PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv;
extern PFNGLBINDIMAGETEXTUREPROC glBindImageTexture;
extern PFNGLMEMORYBARRIERPROC glMemoryBarrier;
extern PFNGLTEXSTORAGE1DPROC glTexStorage1D;
extern PFNGLTEXSTORAGE2DPROC glTexStorage2D;
extern PFNGLTEXSTORAGE3DPROC glTexStorage3D;
extern PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced;
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced;
#endif /* GL_VERSION_4_2 */

#if SOGL_TEST_VERSION(4, 3)
typedef void (APIENTRY  *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_NUM_SHADING_LANGUAGE_VERSIONS  0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG       0x874E
#define GL_COMPRESSED_RGB8_ETC2           0x9274
#define GL_COMPRESSED_SRGB8_ETC2          0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC      0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_COMPRESSED_R11_EAC             0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC      0x9271
#define GL_COMPRESSED_RG11_EAC            0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC     0x9273
#define GL_PRIMITIVE_RESTART_FIXED_INDEX  0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_MAX_ELEMENT_INDEX              0x8D6B
#define GL_COMPUTE_SHADER                 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS     0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS     0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS    0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT   0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE    0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE        0x8267
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER       0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT             0x00000020
#define GL_DEBUG_OUTPUT_SYNCHRONOUS       0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION        0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM      0x8245
#define GL_DEBUG_SOURCE_API               0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM     0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER   0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY       0x8249
#define GL_DEBUG_SOURCE_APPLICATION       0x824A
#define GL_DEBUG_SOURCE_OTHER             0x824B
#define GL_DEBUG_TYPE_ERROR               0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR  0x824E
#define GL_DEBUG_TYPE_PORTABILITY         0x824F
#define GL_DEBUG_TYPE_PERFORMANCE         0x8250
#define GL_DEBUG_TYPE_OTHER               0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH       0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES      0x9144
#define GL_DEBUG_LOGGED_MESSAGES          0x9145
#define GL_DEBUG_SEVERITY_HIGH            0x9146
#define GL_DEBUG_SEVERITY_MEDIUM          0x9147
#define GL_DEBUG_SEVERITY_LOW             0x9148
#define GL_DEBUG_TYPE_MARKER              0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP          0x8269
#define GL_DEBUG_TYPE_POP_GROUP           0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION    0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH    0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH        0x826D
#define GL_BUFFER                         0x82E0
#define GL_SHADER                         0x82E1
#define GL_PROGRAM                        0x82E2
#define GL_QUERY                          0x82E3
#define GL_PROGRAM_PIPELINE               0x82E4
#define GL_SAMPLER                        0x82E6
#define GL_MAX_LABEL_LENGTH               0x82E8
#define GL_DEBUG_OUTPUT                   0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT         0x00000002
#define GL_MAX_UNIFORM_LOCATIONS          0x826E
#define GL_FRAMEBUFFER_DEFAULT_WIDTH      0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT     0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS     0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES    0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH          0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT         0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS         0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES        0x9318
#define GL_INTERNALFORMAT_SUPPORTED       0x826F
#define GL_INTERNALFORMAT_PREFERRED       0x8270
#define GL_INTERNALFORMAT_RED_SIZE        0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE      0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE       0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE      0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE      0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE    0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE     0x8277
#define GL_INTERNALFORMAT_RED_TYPE        0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE      0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE       0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE      0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE      0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE    0x827D
#define GL_MAX_WIDTH                      0x827E
#define GL_MAX_HEIGHT                     0x827F
#define GL_MAX_DEPTH                      0x8280
#define GL_MAX_LAYERS                     0x8281
#define GL_MAX_COMBINED_DIMENSIONS        0x8282
#define GL_COLOR_COMPONENTS               0x8283
#define GL_DEPTH_COMPONENTS               0x8284
#define GL_STENCIL_COMPONENTS             0x8285
#define GL_COLOR_RENDERABLE               0x8286
#define GL_DEPTH_RENDERABLE               0x8287
#define GL_STENCIL_RENDERABLE             0x8288
#define GL_FRAMEBUFFER_RENDERABLE         0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#define GL_FRAMEBUFFER_BLEND              0x828B
#define GL_READ_PIXELS                    0x828C
#define GL_READ_PIXELS_FORMAT             0x828D
#define GL_READ_PIXELS_TYPE               0x828E
#define GL_TEXTURE_IMAGE_FORMAT           0x828F
#define GL_TEXTURE_IMAGE_TYPE             0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT       0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE         0x8292
#define GL_MIPMAP                         0x8293
#define GL_MANUAL_GENERATE_MIPMAP         0x8294
#define GL_AUTO_GENERATE_MIPMAP           0x8295
#define GL_COLOR_ENCODING                 0x8296
#define GL_SRGB_READ                      0x8297
#define GL_SRGB_WRITE                     0x8298
#define GL_FILTER                         0x829A
#define GL_VERTEX_TEXTURE                 0x829B
#define GL_TESS_CONTROL_TEXTURE           0x829C
#define GL_TESS_EVALUATION_TEXTURE        0x829D
#define GL_GEOMETRY_TEXTURE               0x829E
#define GL_FRAGMENT_TEXTURE               0x829F
#define GL_COMPUTE_TEXTURE                0x82A0
#define GL_TEXTURE_SHADOW                 0x82A1
#define GL_TEXTURE_GATHER                 0x82A2
#define GL_TEXTURE_GATHER_SHADOW          0x82A3
#define GL_SHADER_IMAGE_LOAD              0x82A4
#define GL_SHADER_IMAGE_STORE             0x82A5
#define GL_SHADER_IMAGE_ATOMIC            0x82A6
#define GL_IMAGE_TEXEL_SIZE               0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS      0x82A8
#define GL_IMAGE_PIXEL_FORMAT             0x82A9
#define GL_IMAGE_PIXEL_TYPE               0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE  0x82B3
#define GL_CLEAR_BUFFER                   0x82B4
#define GL_TEXTURE_VIEW                   0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS       0x82B6
#define GL_FULL_SUPPORT                   0x82B7
#define GL_CAVEAT_SUPPORT                 0x82B8
#define GL_IMAGE_CLASS_4_X_32             0x82B9
#define GL_IMAGE_CLASS_2_X_32             0x82BA
#define GL_IMAGE_CLASS_1_X_32             0x82BB
#define GL_IMAGE_CLASS_4_X_16             0x82BC
#define GL_IMAGE_CLASS_2_X_16             0x82BD
#define GL_IMAGE_CLASS_1_X_16             0x82BE
#define GL_IMAGE_CLASS_4_X_8              0x82BF
#define GL_IMAGE_CLASS_2_X_8              0x82C0
#define GL_IMAGE_CLASS_1_X_8              0x82C1
#define GL_IMAGE_CLASS_11_11_10           0x82C2
#define GL_IMAGE_CLASS_10_10_10_2         0x82C3
#define GL_VIEW_CLASS_128_BITS            0x82C4
#define GL_VIEW_CLASS_96_BITS             0x82C5
#define GL_VIEW_CLASS_64_BITS             0x82C6
#define GL_VIEW_CLASS_48_BITS             0x82C7
#define GL_VIEW_CLASS_32_BITS             0x82C8
#define GL_VIEW_CLASS_24_BITS             0x82C9
#define GL_VIEW_CLASS_16_BITS             0x82CA
#define GL_VIEW_CLASS_8_BITS              0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB       0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA      0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA      0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA      0x82CF
#define GL_VIEW_CLASS_RGTC1_RED           0x82D0
#define GL_VIEW_CLASS_RGTC2_RG            0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM          0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT          0x82D3
#define GL_UNIFORM                        0x92E1
#define GL_UNIFORM_BLOCK                  0x92E2
#define GL_PROGRAM_INPUT                  0x92E3
#define GL_PROGRAM_OUTPUT                 0x92E4
#define GL_BUFFER_VARIABLE                0x92E5
#define GL_SHADER_STORAGE_BLOCK           0x92E6
#define GL_VERTEX_SUBROUTINE              0x92E8
#define GL_TESS_CONTROL_SUBROUTINE        0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE     0x92EA
#define GL_GEOMETRY_SUBROUTINE            0x92EB
#define GL_FRAGMENT_SUBROUTINE            0x92EC
#define GL_COMPUTE_SUBROUTINE             0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM      0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM    0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM    0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM     0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING     0x92F4
#define GL_ACTIVE_RESOURCES               0x92F5
#define GL_MAX_NAME_LENGTH                0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES       0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
#define GL_NAME_LENGTH                    0x92F9
#define GL_TYPE                           0x92FA
#define GL_ARRAY_SIZE                     0x92FB
#define GL_OFFSET                         0x92FC
#define GL_BLOCK_INDEX                    0x92FD
#define GL_ARRAY_STRIDE                   0x92FE
#define GL_MATRIX_STRIDE                  0x92FF
#define GL_IS_ROW_MAJOR                   0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX    0x9301
#define GL_BUFFER_BINDING                 0x9302
#define GL_BUFFER_DATA_SIZE               0x9303
#define GL_NUM_ACTIVE_VARIABLES           0x9304
#define GL_ACTIVE_VARIABLES               0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER    0x9306
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER  0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER  0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER   0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE           0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE         0x930D
#define GL_LOCATION                       0x930E
#define GL_LOCATION_INDEX                 0x930F
#define GL_IS_PER_PATCH                   0x92E7
#define GL_SHADER_STORAGE_BUFFER          0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING  0x90D3
#define GL_SHADER_STORAGE_BUFFER_START    0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE     0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE  0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT     0x00002000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#define GL_DEPTH_STENCIL_TEXTURE_MODE     0x90EA
#define GL_TEXTURE_BUFFER_OFFSET          0x919D
#define GL_TEXTURE_BUFFER_SIZE            0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
#define GL_TEXTURE_VIEW_MIN_LEVEL         0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS        0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER         0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS        0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
#define GL_VERTEX_ATTRIB_BINDING          0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET  0x82D5
#define GL_VERTEX_BINDING_DIVISOR         0x82D6
#define GL_VERTEX_BINDING_OFFSET          0x82D7
#define GL_VERTEX_BINDING_STRIDE          0x82D8
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS     0x82DA
#define GL_VERTEX_BINDING_BUFFER          0x8F4F
typedef void (APIENTRYP PFNGLCLEARBUFFERDATAPROC) (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (APIENTRYP PFNGLCLEARBUFFERSUBDATAPROC) (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEINDIRECTPROC) (GLintptr indirect);
typedef void (APIENTRYP PFNGLCOPYIMAGESUBDATAPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (APIENTRYP PFNGLFRAMEBUFFERPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETINTERNALFORMATI64VPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
typedef void (APIENTRYP PFNGLINVALIDATETEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRYP PFNGLINVALIDATETEXIMAGEPROC) (GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLINVALIDATEBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRYP PFNGLINVALIDATEBUFFERDATAPROC) (GLuint buffer);
typedef void (APIENTRYP PFNGLINVALIDATEFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (APIENTRYP PFNGLINVALIDATESUBFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTPROC) (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLGETPROGRAMINTERFACEIVPROC) (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
typedef GLuint (APIENTRYP PFNGLGETPROGRAMRESOURCEINDEXPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCENAMEPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCEIVPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLint *params);
typedef GLint (APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (APIENTRYP PFNGLSHADERSTORAGEBLOCKBINDINGPROC) (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
typedef void (APIENTRYP PFNGLTEXBUFFERRANGEPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLTEXSTORAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXTUREVIEWPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERPROC) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (APIENTRYP PFNGLVERTEXATTRIBFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXATTRIBIFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXATTRIBLFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXATTRIBBINDINGPROC) (GLuint attribindex, GLuint bindingindex);
typedef void (APIENTRYP PFNGLVERTEXBINDINGDIVISORPROC) (GLuint bindingindex, GLuint divisor);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKPROC) (GLDEBUGPROC callback, const void *userParam);
typedef GLuint (APIENTRYP PFNGLGETDEBUGMESSAGELOGPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (APIENTRYP PFNGLPUSHDEBUGGROUPPROC) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (APIENTRYP PFNGLPOPDEBUGGROUPPROC) (void);
typedef void (APIENTRYP PFNGLOBJECTLABELPROC) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (APIENTRYP PFNGLGETOBJECTLABELPROC) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (APIENTRYP PFNGLOBJECTPTRLABELPROC) (const void *ptr, GLsizei length, const GLchar *label);
typedef void (APIENTRYP PFNGLGETOBJECTPTRLABELPROC) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
extern PFNGLCLEARBUFFERDATAPROC glClearBufferData;
extern PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData;
extern PFNGLDISPATCHCOMPUTEPROC glDispatchCompute;
extern PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect;
extern PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData;
extern PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri;
extern PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv;
extern PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v;
extern PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage;
extern PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage;
extern PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData;
extern PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData;
extern PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer;
extern PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer;
extern PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect;
extern PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect;
extern PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv;
extern PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex;
extern PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName;
extern PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv;
extern PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation;
extern PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glGetProgramResourceLocationIndex;
extern PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding;
extern PFNGLTEXBUFFERRANGEPROC glTexBufferRange;
extern PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample;
extern PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample;
extern PFNGLTEXTUREVIEWPROC glTextureView;
extern PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer;
extern PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat;
extern PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat;
extern PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat;
extern PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding;
extern PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor;
extern PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl;
extern PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert;
extern PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;
extern PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog;
extern PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup;
extern PFNGLPOPDEBUGGROUPPROC glPopDebugGroup;
extern PFNGLOBJECTLABELPROC glObjectLabel;
extern PFNGLGETOBJECTLABELPROC glGetObjectLabel;
extern PFNGLOBJECTPTRLABELPROC glObjectPtrLabel;
extern PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel;
#endif /* GL_VERSION_4_3 */

#if SOGL_TEST_VERSION(4, 4)
#define GL_MAX_VERTEX_ATTRIB_STRIDE       0x82E5
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_TEXTURE_BUFFER_BINDING         0x8C2A
#define GL_MAP_PERSISTENT_BIT             0x0040
#define GL_MAP_COHERENT_BIT               0x0080
#define GL_DYNAMIC_STORAGE_BIT            0x0100
#define GL_CLIENT_STORAGE_BIT             0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE       0x821F
#define GL_BUFFER_STORAGE_FLAGS           0x8220
#define GL_CLEAR_TEXTURE                  0x9365
#define GL_LOCATION_COMPONENT             0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
#define GL_QUERY_BUFFER                   0x9192
#define GL_QUERY_BUFFER_BARRIER_BIT       0x00008000
#define GL_QUERY_BUFFER_BINDING           0x9193
#define GL_QUERY_RESULT_NO_WAIT           0x9194
#define GL_MIRROR_CLAMP_TO_EDGE           0x8743
typedef void (APIENTRYP PFNGLBUFFERSTORAGEPROC) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (APIENTRYP PFNGLCLEARTEXIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
typedef void (APIENTRYP PFNGLCLEARTEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
typedef void (APIENTRYP PFNGLBINDBUFFERSBASEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
typedef void (APIENTRYP PFNGLBINDBUFFERSRANGEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
typedef void (APIENTRYP PFNGLBINDTEXTURESPROC) (GLuint first, GLsizei count, const GLuint *textures);
typedef void (APIENTRYP PFNGLBINDSAMPLERSPROC) (GLuint first, GLsizei count, const GLuint *samplers);
typedef void (APIENTRYP PFNGLBINDIMAGETEXTURESPROC) (GLuint first, GLsizei count, const GLuint *textures);
typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERSPROC) (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
extern PFNGLBUFFERSTORAGEPROC glBufferStorage;
extern PFNGLCLEARTEXIMAGEPROC glClearTexImage;
extern PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage;
extern PFNGLBINDBUFFERSBASEPROC glBindBuffersBase;
extern PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange;
extern PFNGLBINDTEXTURESPROC glBindTextures;
extern PFNGLBINDSAMPLERSPROC glBindSamplers;
extern PFNGLBINDIMAGETEXTURESPROC glBindImageTextures;
extern PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers;
#endif /* GL_VERSION_4_4 */

#if SOGL_TEST_VERSION(4, 5)
#define GL_CONTEXT_LOST                   0x0507
#define GL_NEGATIVE_ONE_TO_ONE            0x935E
#define GL_ZERO_TO_ONE                    0x935F
#define GL_CLIP_ORIGIN                    0x935C
#define GL_CLIP_DEPTH_MODE                0x935D
#define GL_QUERY_WAIT_INVERTED            0x8E17
#define GL_QUERY_NO_WAIT_INVERTED         0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED  0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
#define GL_MAX_CULL_DISTANCES             0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
#define GL_TEXTURE_TARGET                 0x1006
#define GL_QUERY_TARGET                   0x82EA
#define GL_GUILTY_CONTEXT_RESET           0x8253
#define GL_INNOCENT_CONTEXT_RESET         0x8254
#define GL_UNKNOWN_CONTEXT_RESET          0x8255
#define GL_RESET_NOTIFICATION_STRATEGY    0x8256
#define GL_LOSE_CONTEXT_ON_RESET          0x8252
#define GL_NO_RESET_NOTIFICATION          0x8261
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
#define GL_CONTEXT_RELEASE_BEHAVIOR       0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC
typedef void (APIENTRYP PFNGLCLIPCONTROLPROC) (GLenum origin, GLenum depth);
typedef void (APIENTRYP PFNGLCREATETRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint *ids);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) (GLuint xfb, GLuint index, GLuint buffer);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKIVPROC) (GLuint xfb, GLenum pname, GLint *param);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint *param);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI64_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
typedef void (APIENTRYP PFNGLCREATEBUFFERSPROC) (GLsizei n, GLuint *buffers);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSTORAGEPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (APIENTRYP PFNGLNAMEDBUFFERDATAPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (APIENTRYP PFNGLCOPYNAMEDBUFFERSUBDATAPROC) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERDATAPROC) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERPROC) (GLuint buffer, GLenum access);
typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef GLboolean (APIENTRYP PFNGLUNMAPNAMEDBUFFERPROC) (GLuint buffer);
typedef void (APIENTRYP PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERIVPROC) (GLuint buffer, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) (GLuint buffer, GLenum pname, GLint64 *params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPOINTERVPROC) (GLuint buffer, GLenum pname, void **params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
typedef void (APIENTRYP PFNGLCREATEFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) (GLuint framebuffer, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) (GLuint framebuffer, GLenum buf);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) (GLuint framebuffer, GLenum src);
typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef void (APIENTRYP PFNGLBLITNAMEDFRAMEBUFFERPROC) (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLenum (APIENTRYP PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) (GLuint framebuffer, GLenum target);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) (GLuint framebuffer, GLenum pname, GLint *param);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLCREATERENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) (GLuint renderbuffer, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLCREATETEXTURESPROC) (GLenum target, GLsizei n, GLuint *textures);
typedef void (APIENTRYP PFNGLTEXTUREBUFFERPROC) (GLuint texture, GLenum internalformat, GLuint buffer);
typedef void (APIENTRYP PFNGLTEXTUREBUFFERRANGEPROC) (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE1DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFPROC) (GLuint texture, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, const GLfloat *param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIPROC) (GLuint texture, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, const GLuint *params);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, const GLint *param);
typedef void (APIENTRYP PFNGLGENERATETEXTUREMIPMAPPROC) (GLuint texture);
typedef void (APIENTRYP PFNGLBINDTEXTUREUNITPROC) (GLuint unit, GLuint texture);
typedef void (APIENTRYP PFNGLGETTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERFVPROC) (GLuint texture, GLint level, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERIVPROC) (GLuint texture, GLint level, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, GLuint *params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLCREATEVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
typedef void (APIENTRYP PFNGLVERTEXARRAYELEMENTBUFFERPROC) (GLuint vaobj, GLuint buffer);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERPROC) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERSPROC) (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBBINDINGPROC) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBIFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBLFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYBINDINGDIVISORPROC) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYIVPROC) (GLuint vaobj, GLenum pname, GLint *param);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXEDIVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXED64IVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
typedef void (APIENTRYP PFNGLCREATESAMPLERSPROC) (GLsizei n, GLuint *samplers);
typedef void (APIENTRYP PFNGLCREATEPROGRAMPIPELINESPROC) (GLsizei n, GLuint *pipelines);
typedef void (APIENTRYP PFNGLCREATEQUERIESPROC) (GLenum target, GLsizei n, GLuint *ids);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLMEMORYBARRIERBYREGIONPROC) (GLbitfield barriers);
typedef void (APIENTRYP PFNGLGETTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
typedef GLenum (APIENTRYP PFNGLGETGRAPHICSRESETSTATUSPROC) (void);
typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
typedef void (APIENTRYP PFNGLGETNTEXIMAGEPROC) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (APIENTRYP PFNGLGETNUNIFORMDVPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMFVPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMIVPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMUIVPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (APIENTRYP PFNGLREADNPIXELSPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (APIENTRYP PFNGLTEXTUREBARRIERPROC) (void);
extern PFNGLCLIPCONTROLPROC glClipControl;
extern PFNGLCREATETRANSFORMFEEDBACKSPROC glCreateTransformFeedbacks;
extern PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glTransformFeedbackBufferBase;
extern PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glTransformFeedbackBufferRange;
extern PFNGLGETTRANSFORMFEEDBACKIVPROC glGetTransformFeedbackiv;
extern PFNGLGETTRANSFORMFEEDBACKI_VPROC glGetTransformFeedbacki_v;
extern PFNGLGETTRANSFORMFEEDBACKI64_VPROC glGetTransformFeedbacki64_v;
extern PFNGLCREATEBUFFERSPROC glCreateBuffers;
extern PFNGLNAMEDBUFFERSTORAGEPROC glNamedBufferStorage;
extern PFNGLNAMEDBUFFERDATAPROC glNamedBufferData;
extern PFNGLNAMEDBUFFERSUBDATAPROC glNamedBufferSubData;
extern PFNGLCOPYNAMEDBUFFERSUBDATAPROC glCopyNamedBufferSubData;
extern PFNGLCLEARNAMEDBUFFERDATAPROC glClearNamedBufferData;
extern PFNGLCLEARNAMEDBUFFERSUBDATAPROC glClearNamedBufferSubData;
extern PFNGLMAPNAMEDBUFFERPROC glMapNamedBuffer;
extern PFNGLMAPNAMEDBUFFERRANGEPROC glMapNamedBufferRange;
extern PFNGLUNMAPNAMEDBUFFERPROC glUnmapNamedBuffer;
extern PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glFlushMappedNamedBufferRange;
extern PFNGLGETNAMEDBUFFERPARAMETERIVPROC glGetNamedBufferParameteriv;
extern PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glGetNamedBufferParameteri64v;
extern PFNGLGETNAMEDBUFFERPOINTERVPROC glGetNamedBufferPointerv;
extern PFNGLGETNAMEDBUFFERSUBDATAPROC glGetNamedBufferSubData;
extern PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers;
extern PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glNamedFramebufferRenderbuffer;
extern PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glNamedFramebufferParameteri;
extern PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glNamedFramebufferTexture;
extern PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glNamedFramebufferTextureLayer;
extern PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glNamedFramebufferDrawBuffer;
extern PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glNamedFramebufferDrawBuffers;
extern PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glNamedFramebufferReadBuffer;
extern PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glInvalidateNamedFramebufferData;
extern PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glInvalidateNamedFramebufferSubData;
extern PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glClearNamedFramebufferiv;
extern PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glClearNamedFramebufferuiv;
extern PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glClearNamedFramebufferfv;
extern PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glClearNamedFramebufferfi;
extern PFNGLBLITNAMEDFRAMEBUFFERPROC glBlitNamedFramebuffer;
extern PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glCheckNamedFramebufferStatus;
extern PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glGetNamedFramebufferParameteriv;
extern PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetNamedFramebufferAttachmentParameteriv;
extern PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers;
extern PFNGLNAMEDRENDERBUFFERSTORAGEPROC glNamedRenderbufferStorage;
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glNamedRenderbufferStorageMultisample;
extern PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glGetNamedRenderbufferParameteriv;
extern PFNGLCREATETEXTURESPROC glCreateTextures;
extern PFNGLTEXTUREBUFFERPROC glTextureBuffer;
extern PFNGLTEXTUREBUFFERRANGEPROC glTextureBufferRange;
extern PFNGLTEXTURESTORAGE1DPROC glTextureStorage1D;
extern PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D;
extern PFNGLTEXTURESTORAGE3DPROC glTextureStorage3D;
extern PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glTextureStorage2DMultisample;
extern PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glTextureStorage3DMultisample;
extern PFNGLTEXTURESUBIMAGE1DPROC glTextureSubImage1D;
extern PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D;
extern PFNGLTEXTURESUBIMAGE3DPROC glTextureSubImage3D;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glCompressedTextureSubImage1D;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glCompressedTextureSubImage2D;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glCompressedTextureSubImage3D;
extern PFNGLCOPYTEXTURESUBIMAGE1DPROC glCopyTextureSubImage1D;
extern PFNGLCOPYTEXTURESUBIMAGE2DPROC glCopyTextureSubImage2D;
extern PFNGLCOPYTEXTURESUBIMAGE3DPROC glCopyTextureSubImage3D;
extern PFNGLTEXTUREPARAMETERFPROC glTextureParameterf;
extern PFNGLTEXTUREPARAMETERFVPROC glTextureParameterfv;
extern PFNGLTEXTUREPARAMETERIPROC glTextureParameteri;
extern PFNGLTEXTUREPARAMETERIIVPROC glTextureParameterIiv;
extern PFNGLTEXTUREPARAMETERIUIVPROC glTextureParameterIuiv;
extern PFNGLTEXTUREPARAMETERIVPROC glTextureParameteriv;
extern PFNGLGENERATETEXTUREMIPMAPPROC glGenerateTextureMipmap;
extern PFNGLBINDTEXTUREUNITPROC glBindTextureUnit;
extern PFNGLGETTEXTUREIMAGEPROC glGetTextureImage;
extern PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glGetCompressedTextureImage;
extern PFNGLGETTEXTURELEVELPARAMETERFVPROC glGetTextureLevelParameterfv;
extern PFNGLGETTEXTURELEVELPARAMETERIVPROC glGetTextureLevelParameteriv;
extern PFNGLGETTEXTUREPARAMETERFVPROC glGetTextureParameterfv;
extern PFNGLGETTEXTUREPARAMETERIIVPROC glGetTextureParameterIiv;
extern PFNGLGETTEXTUREPARAMETERIUIVPROC glGetTextureParameterIuiv;
extern PFNGLGETTEXTUREPARAMETERIVPROC glGetTextureParameteriv;
extern PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays;
extern PFNGLDISABLEVERTEXARRAYATTRIBPROC glDisableVertexArrayAttrib;
extern PFNGLENABLEVERTEXARRAYATTRIBPROC glEnableVertexArrayAttrib;
extern PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer;
extern PFNGLVERTEXARRAYVERTEXBUFFERPROC glVertexArrayVertexBuffer;
extern PFNGLVERTEXARRAYVERTEXBUFFERSPROC glVertexArrayVertexBuffers;
extern PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding;
extern PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat;
extern PFNGLVERTEXARRAYATTRIBIFORMATPROC glVertexArrayAttribIFormat;
extern PFNGLVERTEXARRAYATTRIBLFORMATPROC glVertexArrayAttribLFormat;
extern PFNGLVERTEXARRAYBINDINGDIVISORPROC glVertexArrayBindingDivisor;
extern PFNGLGETVERTEXARRAYIVPROC glGetVertexArrayiv;
extern PFNGLGETVERTEXARRAYINDEXEDIVPROC glGetVertexArrayIndexediv;
extern PFNGLGETVERTEXARRAYINDEXED64IVPROC glGetVertexArrayIndexed64iv;
extern PFNGLCREATESAMPLERSPROC glCreateSamplers;
extern PFNGLCREATEPROGRAMPIPELINESPROC glCreateProgramPipelines;
extern PFNGLCREATEQUERIESPROC glCreateQueries;
extern PFNGLGETQUERYBUFFEROBJECTI64VPROC glGetQueryBufferObjecti64v;
extern PFNGLGETQUERYBUFFEROBJECTIVPROC glGetQueryBufferObjectiv;
extern PFNGLGETQUERYBUFFEROBJECTUI64VPROC glGetQueryBufferObjectui64v;
extern PFNGLGETQUERYBUFFEROBJECTUIVPROC glGetQueryBufferObjectuiv;
extern PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion;
extern PFNGLGETTEXTURESUBIMAGEPROC glGetTextureSubImage;
extern PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glGetCompressedTextureSubImage;
extern PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus;
extern PFNGLGETNCOMPRESSEDTEXIMAGEPROC glGetnCompressedTexImage;
extern PFNGLGETNTEXIMAGEPROC glGetnTexImage;
extern PFNGLGETNUNIFORMDVPROC glGetnUniformdv;
extern PFNGLGETNUNIFORMFVPROC glGetnUniformfv;
extern PFNGLGETNUNIFORMIVPROC glGetnUniformiv;
extern PFNGLGETNUNIFORMUIVPROC glGetnUniformuiv;
extern PFNGLREADNPIXELSPROC glReadnPixels;
extern PFNGLTEXTUREBARRIERPROC glTextureBarrier;
#endif /* GL_VERSION_4_5 */

#if SOGL_TEST_VERSION(4, 6)
#define GL_SHADER_BINARY_FORMAT_SPIR_V    0x9551
#define GL_SPIR_V_BINARY                  0x9552
#define GL_PARAMETER_BUFFER               0x80EE
#define GL_PARAMETER_BUFFER_BINDING       0x80EF
#define GL_CONTEXT_FLAG_NO_ERROR_BIT      0x00000008
#define GL_VERTICES_SUBMITTED             0x82EE
#define GL_PRIMITIVES_SUBMITTED           0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS      0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES    0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS    0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS     0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES      0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES     0x82F7
#define GL_POLYGON_OFFSET_CLAMP           0x8E1B
#define GL_SPIR_V_EXTENSIONS              0x9553
#define GL_NUM_SPIR_V_EXTENSIONS          0x9554
#define GL_TEXTURE_MAX_ANISOTROPY         0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY     0x84FF
#define GL_TRANSFORM_FEEDBACK_OVERFLOW    0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW 0x82ED
typedef void (APIENTRYP PFNGLSPECIALIZESHADERPROC) (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLPOLYGONOFFSETCLAMPPROC) (GLfloat factor, GLfloat units, GLfloat clamp);
extern PFNGLSPECIALIZESHADERPROC glSpecializeShader;
extern PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glMultiDrawArraysIndirectCount;
extern PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glMultiDrawElementsIndirectCount;
extern PFNGLPOLYGONOFFSETCLAMPPROC glPolygonOffsetClamp;
#endif /* GL_VERSION_4_6 */

/* EXTENSIONS */

#ifdef SOGL_ARB_ES3_2_compatibility
#define GL_PRIMITIVE_BOUNDING_BOX_ARB     0x92BE
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB 0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB 0x9382
typedef void (APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXARBPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
extern PFNGLPRIMITIVEBOUNDINGBOXARBPROC glPrimitiveBoundingBoxARB;
#endif /* SOGL_ARB_ES3_2_compatibility */

#ifdef SOGL_ARB_bindless_texture
typedef khronos_uint64_t GLuint64EXT;
#define GL_UNSIGNED_INT64_ARB             0x140F
typedef GLuint64 (APIENTRYP PFNGLGETTEXTUREHANDLEARBPROC) (GLuint texture);
typedef GLuint64 (APIENTRYP PFNGLGETTEXTURESAMPLERHANDLEARBPROC) (GLuint texture, GLuint sampler);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) (GLuint64 handle);
typedef GLuint64 (APIENTRYP PFNGLGETIMAGEHANDLEARBPROC) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle, GLenum access);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) (GLuint64 handle);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64ARBPROC) (GLint location, GLuint64 value);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) (GLuint program, GLint location, GLuint64 value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *values);
typedef GLboolean (APIENTRYP PFNGLISTEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle);
typedef GLboolean (APIENTRYP PFNGLISIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64ARBPROC) (GLuint index, GLuint64EXT x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64VARBPROC) (GLuint index, const GLuint64EXT *v);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLUI64VARBPROC) (GLuint index, GLenum pname, GLuint64EXT *params);
extern PFNGLGETTEXTUREHANDLEARBPROC glGetTextureHandleARB;
extern PFNGLGETTEXTURESAMPLERHANDLEARBPROC glGetTextureSamplerHandleARB;
extern PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glMakeTextureHandleResidentARB;
extern PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC glMakeTextureHandleNonResidentARB;
extern PFNGLGETIMAGEHANDLEARBPROC glGetImageHandleARB;
extern PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glMakeImageHandleResidentARB;
extern PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glMakeImageHandleNonResidentARB;
extern PFNGLUNIFORMHANDLEUI64ARBPROC glUniformHandleui64ARB;
extern PFNGLUNIFORMHANDLEUI64VARBPROC glUniformHandleui64vARB;
extern PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC glProgramUniformHandleui64ARB;
extern PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC glProgramUniformHandleui64vARB;
extern PFNGLISTEXTUREHANDLERESIDENTARBPROC glIsTextureHandleResidentARB;
extern PFNGLISIMAGEHANDLERESIDENTARBPROC glIsImageHandleResidentARB;
extern PFNGLVERTEXATTRIBL1UI64ARBPROC glVertexAttribL1ui64ARB;
extern PFNGLVERTEXATTRIBL1UI64VARBPROC glVertexAttribL1ui64vARB;
extern PFNGLGETVERTEXATTRIBLUI64VARBPROC glGetVertexAttribLui64vARB;
#endif /* SOGL_ARB_bindless_texture */

#ifdef SOGL_ARB_cl_event
struct _cl_context;
struct _cl_event;
#define GL_SYNC_CL_EVENT_ARB              0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB     0x8241
typedef GLsync (APIENTRYP PFNGLCREATESYNCFROMCLEVENTARBPROC) (struct _cl_context *context, struct _cl_event *event, GLbitfield flags);
extern PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB;
#endif /* SOGL_ARB_cl_event */

#ifdef SOGL_ARB_compute_variable_group_size
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB 0x9344
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB 0x90EB
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB 0x9345
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB 0x91BF
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
extern PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glDispatchComputeGroupSizeARB;
#endif /* SOGL_ARB_compute_variable_group_size */

#ifdef SOGL_ARB_debug_output
typedef void (APIENTRY  *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB  0x8245
#define GL_DEBUG_SOURCE_API_ARB           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB   0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB         0x824B
#define GL_DEBUG_TYPE_ERROR_ARB           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB     0x8250
#define GL_DEBUG_TYPE_OTHER_ARB           0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB      0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB      0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB         0x9148
typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLARBPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTARBPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKARBPROC) (GLDEBUGPROCARB callback, const void *userParam);
typedef GLuint (APIENTRYP PFNGLGETDEBUGMESSAGELOGARBPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
extern PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB;
extern PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB;
extern PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB;
extern PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB;
#endif /* SOGL_ARB_debug_output */

#ifdef SOGL_ARB_draw_buffers_blend
typedef void (APIENTRYP PFNGLBLENDEQUATIONIARBPROC) (GLuint buf, GLenum mode);
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIARBPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRYP PFNGLBLENDFUNCIARBPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIARBPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB;
extern PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB;
extern PFNGLBLENDFUNCIARBPROC glBlendFunciARB;
extern PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB;
#endif /* SOGL_ARB_draw_buffers_blend */

#ifdef SOGL_ARB_draw_instanced
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDARBPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDARBPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
extern PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB;
extern PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB;
#endif /* SOGL_ARB_draw_instanced */

#ifdef SOGL_ARB_geometry_shader4
#define GL_LINES_ADJACENCY_ARB            0x000A
#define GL_LINE_STRIP_ADJACENCY_ARB       0x000B
#define GL_TRIANGLES_ADJACENCY_ARB        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB   0x000D
#define GL_PROGRAM_POINT_SIZE_ARB         0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB 0x8DA9
#define GL_GEOMETRY_SHADER_ARB            0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB      0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB        0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB       0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB 0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB 0x8DE1
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIARBPROC) (GLuint program, GLenum pname, GLint value);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
extern PFNGLPROGRAMPARAMETERIARBPROC glProgramParameteriARB;
extern PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB;
extern PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB;
extern PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB;
#endif /* SOGL_ARB_geometry_shader4 */

#ifdef SOGL_ARB_gl_spirv
#define GL_SHADER_BINARY_FORMAT_SPIR_V_ARB 0x9551
#define GL_SPIR_V_BINARY_ARB              0x9552
typedef void (APIENTRYP PFNGLSPECIALIZESHADERARBPROC) (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
extern PFNGLSPECIALIZESHADERARBPROC glSpecializeShaderARB;
#endif /* SOGL_ARB_gl_spirv */

#ifdef SOGL_ARB_gpu_shader_int64
#define GL_INT64_ARB                      0x140E
#define GL_INT64_VEC2_ARB                 0x8FE9
#define GL_INT64_VEC3_ARB                 0x8FEA
#define GL_INT64_VEC4_ARB                 0x8FEB
#define GL_UNSIGNED_INT64_VEC2_ARB        0x8FF5
#define GL_UNSIGNED_INT64_VEC3_ARB        0x8FF6
#define GL_UNSIGNED_INT64_VEC4_ARB        0x8FF7
typedef void (APIENTRYP PFNGLUNIFORM1I64ARBPROC) (GLint location, GLint64 x);
typedef void (APIENTRYP PFNGLUNIFORM2I64ARBPROC) (GLint location, GLint64 x, GLint64 y);
typedef void (APIENTRYP PFNGLUNIFORM3I64ARBPROC) (GLint location, GLint64 x, GLint64 y, GLint64 z);
typedef void (APIENTRYP PFNGLUNIFORM4I64ARBPROC) (GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
typedef void (APIENTRYP PFNGLUNIFORM1I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLUNIFORM2I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLUNIFORM3I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLUNIFORM4I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLUNIFORM1UI64ARBPROC) (GLint location, GLuint64 x);
typedef void (APIENTRYP PFNGLUNIFORM2UI64ARBPROC) (GLint location, GLuint64 x, GLuint64 y);
typedef void (APIENTRYP PFNGLUNIFORM3UI64ARBPROC) (GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
typedef void (APIENTRYP PFNGLUNIFORM4UI64ARBPROC) (GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
typedef void (APIENTRYP PFNGLUNIFORM1UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLUNIFORM2UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLUNIFORM3UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLUNIFORM4UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLGETUNIFORMI64VARBPROC) (GLuint program, GLint location, GLint64 *params);
typedef void (APIENTRYP PFNGLGETUNIFORMUI64VARBPROC) (GLuint program, GLint location, GLuint64 *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMI64VARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMUI64VARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64ARBPROC) (GLuint program, GLint location, GLint64 x);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64ARBPROC) (GLuint program, GLint location, GLint64 x, GLint64 y);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64ARBPROC) (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64ARBPROC) (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64ARBPROC) (GLuint program, GLint location, GLuint64 x);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64ARBPROC) (GLuint program, GLint location, GLuint64 x, GLuint64 y);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64ARBPROC) (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64ARBPROC) (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
extern PFNGLUNIFORM1I64ARBPROC glUniform1i64ARB;
extern PFNGLUNIFORM2I64ARBPROC glUniform2i64ARB;
extern PFNGLUNIFORM3I64ARBPROC glUniform3i64ARB;
extern PFNGLUNIFORM4I64ARBPROC glUniform4i64ARB;
extern PFNGLUNIFORM1I64VARBPROC glUniform1i64vARB;
extern PFNGLUNIFORM2I64VARBPROC glUniform2i64vARB;
extern PFNGLUNIFORM3I64VARBPROC glUniform3i64vARB;
extern PFNGLUNIFORM4I64VARBPROC glUniform4i64vARB;
extern PFNGLUNIFORM1UI64ARBPROC glUniform1ui64ARB;
extern PFNGLUNIFORM2UI64ARBPROC glUniform2ui64ARB;
extern PFNGLUNIFORM3UI64ARBPROC glUniform3ui64ARB;
extern PFNGLUNIFORM4UI64ARBPROC glUniform4ui64ARB;
extern PFNGLUNIFORM1UI64VARBPROC glUniform1ui64vARB;
extern PFNGLUNIFORM2UI64VARBPROC glUniform2ui64vARB;
extern PFNGLUNIFORM3UI64VARBPROC glUniform3ui64vARB;
extern PFNGLUNIFORM4UI64VARBPROC glUniform4ui64vARB;
extern PFNGLGETUNIFORMI64VARBPROC glGetUniformi64vARB;
extern PFNGLGETUNIFORMUI64VARBPROC glGetUniformui64vARB;
extern PFNGLGETNUNIFORMI64VARBPROC glGetnUniformi64vARB;
extern PFNGLGETNUNIFORMUI64VARBPROC glGetnUniformui64vARB;
extern PFNGLPROGRAMUNIFORM1I64ARBPROC glProgramUniform1i64ARB;
extern PFNGLPROGRAMUNIFORM2I64ARBPROC glProgramUniform2i64ARB;
extern PFNGLPROGRAMUNIFORM3I64ARBPROC glProgramUniform3i64ARB;
extern PFNGLPROGRAMUNIFORM4I64ARBPROC glProgramUniform4i64ARB;
extern PFNGLPROGRAMUNIFORM1I64VARBPROC glProgramUniform1i64vARB;
extern PFNGLPROGRAMUNIFORM2I64VARBPROC glProgramUniform2i64vARB;
extern PFNGLPROGRAMUNIFORM3I64VARBPROC glProgramUniform3i64vARB;
extern PFNGLPROGRAMUNIFORM4I64VARBPROC glProgramUniform4i64vARB;
extern PFNGLPROGRAMUNIFORM1UI64ARBPROC glProgramUniform1ui64ARB;
extern PFNGLPROGRAMUNIFORM2UI64ARBPROC glProgramUniform2ui64ARB;
extern PFNGLPROGRAMUNIFORM3UI64ARBPROC glProgramUniform3ui64ARB;
extern PFNGLPROGRAMUNIFORM4UI64ARBPROC glProgramUniform4ui64ARB;
extern PFNGLPROGRAMUNIFORM1UI64VARBPROC glProgramUniform1ui64vARB;
extern PFNGLPROGRAMUNIFORM2UI64VARBPROC glProgramUniform2ui64vARB;
extern PFNGLPROGRAMUNIFORM3UI64VARBPROC glProgramUniform3ui64vARB;
extern PFNGLPROGRAMUNIFORM4UI64VARBPROC glProgramUniform4ui64vARB;
#endif /* SOGL_ARB_gpu_shader_int64 */

#ifdef SOGL_ARB_indirect_parameters
#define GL_PARAMETER_BUFFER_ARB           0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB   0x80EF
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
extern PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC glMultiDrawArraysIndirectCountARB;
extern PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC glMultiDrawElementsIndirectCountARB;
#endif /* SOGL_ARB_indirect_parameters */

#ifdef SOGL_ARB_instanced_arrays
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE
typedef void (APIENTRYP PFNGLVERTEXATTRIBDIVISORARBPROC) (GLuint index, GLuint divisor);
extern PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB;
#endif /* SOGL_ARB_instanced_arrays */

#ifdef SOGL_ARB_internalformat_query2
#define GL_SRGB_DECODE_ARB                0x8299
#define GL_VIEW_CLASS_EAC_R11             0x9383
#define GL_VIEW_CLASS_EAC_RG11            0x9384
#define GL_VIEW_CLASS_ETC2_RGB            0x9385
#define GL_VIEW_CLASS_ETC2_RGBA           0x9386
#define GL_VIEW_CLASS_ETC2_EAC_RGBA       0x9387
#define GL_VIEW_CLASS_ASTC_4x4_RGBA       0x9388
#define GL_VIEW_CLASS_ASTC_5x4_RGBA       0x9389
#define GL_VIEW_CLASS_ASTC_5x5_RGBA       0x938A
#define GL_VIEW_CLASS_ASTC_6x5_RGBA       0x938B
#define GL_VIEW_CLASS_ASTC_6x6_RGBA       0x938C
#define GL_VIEW_CLASS_ASTC_8x5_RGBA       0x938D
#define GL_VIEW_CLASS_ASTC_8x6_RGBA       0x938E
#define GL_VIEW_CLASS_ASTC_8x8_RGBA       0x938F
#define GL_VIEW_CLASS_ASTC_10x5_RGBA      0x9390
#define GL_VIEW_CLASS_ASTC_10x6_RGBA      0x9391
#define GL_VIEW_CLASS_ASTC_10x8_RGBA      0x9392
#define GL_VIEW_CLASS_ASTC_10x10_RGBA     0x9393
#define GL_VIEW_CLASS_ASTC_12x10_RGBA     0x9394
#define GL_VIEW_CLASS_ASTC_12x12_RGBA     0x9395
#endif /* SOGL_ARB_internalformat_query2 */

#ifdef SOGL_ARB_parallel_shader_compile
#define GL_MAX_SHADER_COMPILER_THREADS_ARB 0x91B0
#define GL_COMPLETION_STATUS_ARB          0x91B1
typedef void (APIENTRYP PFNGLMAXSHADERCOMPILERTHREADSARBPROC) (GLuint count);
extern PFNGLMAXSHADERCOMPILERTHREADSARBPROC glMaxShaderCompilerThreadsARB;
#endif /* SOGL_ARB_parallel_shader_compile */

#ifdef SOGL_ARB_pipeline_statistics_query
#define GL_VERTICES_SUBMITTED_ARB         0x82EE
#define GL_PRIMITIVES_SUBMITTED_ARB       0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS_ARB  0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB  0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB 0x82F7
#endif /* SOGL_ARB_pipeline_statistics_query */

#ifdef SOGL_ARB_pixel_buffer_object
#define GL_PIXEL_PACK_BUFFER_ARB          0x88EB
#define GL_PIXEL_UNPACK_BUFFER_ARB        0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB  0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB 0x88EF
#endif /* SOGL_ARB_pixel_buffer_object */

#ifdef SOGL_ARB_robustness
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB      0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB       0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GL_NO_RESET_NOTIFICATION_ARB      0x8261
typedef GLenum (APIENTRYP PFNGLGETGRAPHICSRESETSTATUSARBPROC) (void);
typedef void (APIENTRYP PFNGLGETNTEXIMAGEARBPROC) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img);
typedef void (APIENTRYP PFNGLREADNPIXELSARBPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) (GLenum target, GLint lod, GLsizei bufSize, void *img);
typedef void (APIENTRYP PFNGLGETNUNIFORMFVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMUIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (APIENTRYP PFNGLGETNUNIFORMDVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
extern PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB;
extern PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB;
extern PFNGLREADNPIXELSARBPROC glReadnPixelsARB;
extern PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB;
extern PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB;
extern PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB;
extern PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB;
extern PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB;
#endif /* SOGL_ARB_robustness */

#ifdef SOGL_ARB_sample_locations
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_ARB 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB 0x9340
#define GL_SAMPLE_LOCATION_ARB            0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB 0x9343
typedef void (APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) (GLenum target, GLuint start, GLsizei count, const GLfloat *v);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
typedef void (APIENTRYP PFNGLEVALUATEDEPTHVALUESARBPROC) (void);
extern PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glFramebufferSampleLocationsfvARB;
extern PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glNamedFramebufferSampleLocationsfvARB;
extern PFNGLEVALUATEDEPTHVALUESARBPROC glEvaluateDepthValuesARB;
#endif /* SOGL_ARB_sample_locations */

#ifdef SOGL_ARB_sample_shading
#define GL_SAMPLE_SHADING_ARB             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB   0x8C37
typedef void (APIENTRYP PFNGLMINSAMPLESHADINGARBPROC) (GLfloat value);
extern PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB;
#endif /* SOGL_ARB_sample_shading */

#ifdef SOGL_ARB_shading_language_include
#define GL_SHADER_INCLUDE_ARB             0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB        0x8DE9
#define GL_NAMED_STRING_TYPE_ARB          0x8DEA
typedef void (APIENTRYP PFNGLNAMEDSTRINGARBPROC) (GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string);
typedef void (APIENTRYP PFNGLDELETENAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name);
typedef void (APIENTRYP PFNGLCOMPILESHADERINCLUDEARBPROC) (GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length);
typedef GLboolean (APIENTRYP PFNGLISNAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name);
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGIVARBPROC) (GLint namelen, const GLchar *name, GLenum pname, GLint *params);
extern PFNGLNAMEDSTRINGARBPROC glNamedStringARB;
extern PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB;
extern PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB;
extern PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB;
extern PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB;
extern PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB;
#endif /* SOGL_ARB_shading_language_include */

#ifdef SOGL_ARB_sparse_buffer
#define GL_SPARSE_STORAGE_BIT_ARB         0x0400
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB    0x82F8
typedef void (APIENTRYP PFNGLBUFFERPAGECOMMITMENTARBPROC) (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
extern PFNGLBUFFERPAGECOMMITMENTARBPROC glBufferPageCommitmentARB;
extern PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC glNamedBufferPageCommitmentEXT;
extern PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC glNamedBufferPageCommitmentARB;
#endif /* SOGL_ARB_sparse_buffer */

#ifdef SOGL_ARB_sparse_texture
#define GL_TEXTURE_SPARSE_ARB             0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB    0x91A7
#define GL_NUM_SPARSE_LEVELS_ARB          0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB     0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_ARB        0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB        0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB        0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB    0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB 0x91A9
typedef void (APIENTRYP PFNGLTEXPAGECOMMITMENTARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
extern PFNGLTEXPAGECOMMITMENTARBPROC glTexPageCommitmentARB;
#endif /* SOGL_ARB_sparse_texture */

#ifdef SOGL_ARB_texture_border_clamp
#define GL_CLAMP_TO_BORDER_ARB            0x812D
#endif /* SOGL_ARB_texture_border_clamp */

#ifdef SOGL_ARB_texture_buffer_object
#define GL_TEXTURE_BUFFER_ARB             0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_ARB     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB      0x8C2E
typedef void (APIENTRYP PFNGLTEXBUFFERARBPROC) (GLenum target, GLenum internalformat, GLuint buffer);
extern PFNGLTEXBUFFERARBPROC glTexBufferARB;
#endif /* SOGL_ARB_texture_buffer_object */

#ifdef SOGL_ARB_texture_compression_bptc
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F
#endif /* SOGL_ARB_texture_compression_bptc */

#ifdef SOGL_ARB_texture_cube_map_array
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F
#endif /* SOGL_ARB_texture_cube_map_array */

#ifdef SOGL_ARB_texture_filter_minmax
#define GL_TEXTURE_REDUCTION_MODE_ARB     0x9366
#define GL_WEIGHTED_AVERAGE_ARB           0x9367
#endif /* SOGL_ARB_texture_filter_minmax */

#ifdef SOGL_ARB_texture_gather
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB 0x8F9F
#endif /* SOGL_ARB_texture_gather */

#ifdef SOGL_ARB_texture_mirrored_repeat
#define GL_MIRRORED_REPEAT_ARB            0x8370
#endif /* SOGL_ARB_texture_mirrored_repeat */

#ifdef SOGL_ARB_transform_feedback_overflow_query
#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB 0x82ED
#endif /* SOGL_ARB_transform_feedback_overflow_query */

#ifdef SOGL_ARB_viewport_array
typedef void (APIENTRYP PFNGLDEPTHRANGEARRAYDVNVPROC) (GLuint first, GLsizei count, const GLdouble *v);
typedef void (APIENTRYP PFNGLDEPTHRANGEINDEXEDDNVPROC) (GLuint index, GLdouble n, GLdouble f);
extern PFNGLDEPTHRANGEARRAYDVNVPROC glDepthRangeArraydvNV;
extern PFNGLDEPTHRANGEINDEXEDDNVPROC glDepthRangeIndexeddNV;
#endif /* SOGL_ARB_viewport_array */

#ifdef SOGL_KHR_blend_equation_advanced
#define GL_MULTIPLY_KHR                   0x9294
#define GL_SCREEN_KHR                     0x9295
#define GL_OVERLAY_KHR                    0x9296
#define GL_DARKEN_KHR                     0x9297
#define GL_LIGHTEN_KHR                    0x9298
#define GL_COLORDODGE_KHR                 0x9299
#define GL_COLORBURN_KHR                  0x929A
#define GL_HARDLIGHT_KHR                  0x929B
#define GL_SOFTLIGHT_KHR                  0x929C
#define GL_DIFFERENCE_KHR                 0x929E
#define GL_EXCLUSION_KHR                  0x92A0
#define GL_HSL_HUE_KHR                    0x92AD
#define GL_HSL_SATURATION_KHR             0x92AE
#define GL_HSL_COLOR_KHR                  0x92AF
#define GL_HSL_LUMINOSITY_KHR             0x92B0
typedef void (APIENTRYP PFNGLBLENDBARRIERKHRPROC) (void);
extern PFNGLBLENDBARRIERKHRPROC glBlendBarrierKHR;
#endif /* SOGL_KHR_blend_equation_advanced */

#ifdef SOGL_KHR_blend_equation_advanced_coherent
#define GL_BLEND_ADVANCED_COHERENT_KHR    0x9285
#endif /* SOGL_KHR_blend_equation_advanced_coherent */

#ifdef SOGL_KHR_no_error
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR  0x00000008
#endif /* SOGL_KHR_no_error */

#ifdef SOGL_KHR_parallel_shader_compile
#define GL_MAX_SHADER_COMPILER_THREADS_KHR 0x91B0
#define GL_COMPLETION_STATUS_KHR          0x91B1
typedef void (APIENTRYP PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) (GLuint count);
extern PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glMaxShaderCompilerThreadsKHR;
#endif /* SOGL_KHR_parallel_shader_compile */

#ifdef SOGL_KHR_robustness
#define GL_CONTEXT_ROBUST_ACCESS          0x90F3
#endif /* SOGL_KHR_robustness */

#ifdef SOGL_KHR_shader_subgroup
#define GL_SUBGROUP_SIZE_KHR              0x9532
#define GL_SUBGROUP_SUPPORTED_STAGES_KHR  0x9533
#define GL_SUBGROUP_SUPPORTED_FEATURES_KHR 0x9534
#define GL_SUBGROUP_QUAD_ALL_STAGES_KHR   0x9535
#define GL_SUBGROUP_FEATURE_BASIC_BIT_KHR 0x00000001
#define GL_SUBGROUP_FEATURE_VOTE_BIT_KHR  0x00000002
#define GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR 0x00000004
#define GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR 0x00000008
#define GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR 0x00000010
#define GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR 0x00000020
#define GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR 0x00000040
#define GL_SUBGROUP_FEATURE_QUAD_BIT_KHR  0x00000080
#endif /* SOGL_KHR_shader_subgroup */

#ifdef SOGL_KHR_texture_compression_astc_hdr
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR   0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR   0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR   0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR   0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR   0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR   0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR   0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR   0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR  0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR  0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR  0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif /* SOGL_KHR_texture_compression_astc_hdr */

#ifdef SOGL_AMD_framebuffer_multisample_advanced
#define GL_RENDERBUFFER_STORAGE_SAMPLES_AMD 0x91B2
#define GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD 0x91B3
#define GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD 0x91B4
#define GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD 0x91B5
#define GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B6
#define GL_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B7
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glRenderbufferStorageMultisampleAdvancedAMD;
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glNamedRenderbufferStorageMultisampleAdvancedAMD;
#endif /* SOGL_AMD_framebuffer_multisample_advanced */

#ifdef SOGL_AMD_performance_monitor
#define GL_COUNTER_TYPE_AMD               0x8BC0
#define GL_COUNTER_RANGE_AMD              0x8BC1
#define GL_UNSIGNED_INT64_AMD             0x8BC2
#define GL_PERCENTAGE_AMD                 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD   0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD        0x8BC5
#define GL_PERFMON_RESULT_AMD             0x8BC6
typedef void (APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
typedef void (APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) (GLuint group, GLuint counter, GLenum pname, void *data);
typedef void (APIENTRYP PFNGLGENPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void (APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
typedef void (APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
typedef void (APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) (GLuint monitor);
typedef void (APIENTRYP PFNGLENDPERFMONITORAMDPROC) (GLuint monitor);
typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
extern PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD;
extern PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD;
extern PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD;
extern PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;
extern PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD;
extern PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD;
extern PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD;
extern PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD;
extern PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD;
extern PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD;
extern PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD;
#endif /* SOGL_AMD_performance_monitor */

#ifdef SOGL_APPLE_rgb_422
#define GL_RGB_422_APPLE                  0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE       0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE   0x85BB
#define GL_RGB_RAW_422_APPLE              0x8A51
#endif /* SOGL_APPLE_rgb_422 */

#ifdef SOGL_EXT_EGL_image_storage
typedef void *GLeglImageOES;
typedef void (APIENTRYP PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) (GLenum target, GLeglImageOES image, const GLint* attrib_list);
typedef void (APIENTRYP PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) (GLuint texture, GLeglImageOES image, const GLint* attrib_list);
extern PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glEGLImageTargetTexStorageEXT;
extern PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glEGLImageTargetTextureStorageEXT;
#endif /* SOGL_EXT_EGL_image_storage */

#ifdef SOGL_EXT_debug_label
#define GL_PROGRAM_PIPELINE_OBJECT_EXT    0x8A4F
#define GL_PROGRAM_OBJECT_EXT             0x8B40
#define GL_SHADER_OBJECT_EXT              0x8B48
#define GL_BUFFER_OBJECT_EXT              0x9151
#define GL_QUERY_OBJECT_EXT               0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT        0x9154
typedef void (APIENTRYP PFNGLLABELOBJECTEXTPROC) (GLenum type, GLuint object, GLsizei length, const GLchar *label);
typedef void (APIENTRYP PFNGLGETOBJECTLABELEXTPROC) (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
extern PFNGLLABELOBJECTEXTPROC glLabelObjectEXT;
extern PFNGLGETOBJECTLABELEXTPROC glGetObjectLabelEXT;
#endif /* SOGL_EXT_debug_label */

#ifdef SOGL_EXT_debug_marker
typedef void (APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) (void);
extern PFNGLINSERTEVENTMARKEREXTPROC glInsertEventMarkerEXT;
extern PFNGLPUSHGROUPMARKEREXTPROC glPushGroupMarkerEXT;
extern PFNGLPOPGROUPMARKEREXTPROC glPopGroupMarkerEXT;
#endif /* SOGL_EXT_debug_marker */

#ifdef SOGL_EXT_direct_state_access
#define GL_PROGRAM_MATRIX_EXT             0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT   0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F
typedef void (APIENTRYP PFNGLMATRIXLOADFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXLOADDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (APIENTRYP PFNGLMATRIXMULTFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXMULTDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (APIENTRYP PFNGLMATRIXLOADIDENTITYEXTPROC) (GLenum mode);
typedef void (APIENTRYP PFNGLMATRIXROTATEFEXTPROC) (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRYP PFNGLMATRIXROTATEDEXTPROC) (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLMATRIXSCALEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRYP PFNGLMATRIXSCALEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLMATRIXTRANSLATEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRYP PFNGLMATRIXTRANSLATEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLMATRIXFRUSTUMEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (APIENTRYP PFNGLMATRIXORTHOEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (APIENTRYP PFNGLMATRIXPOPEXTPROC) (GLenum mode);
typedef void (APIENTRYP PFNGLMATRIXPUSHEXTPROC) (GLenum mode);
typedef void (APIENTRYP PFNGLCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
typedef void (APIENTRYP PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLCOPYTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (APIENTRYP PFNGLCOPYTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLBINDMULTITEXTUREEXTPROC) (GLenum texunit, GLenum target, GLuint texture);
typedef void (APIENTRYP PFNGLMULTITEXCOORDPOINTEREXTPROC) (GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (APIENTRYP PFNGLMULTITEXENVFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRYP PFNGLMULTITEXENVIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLMULTITEXGENDEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
typedef void (APIENTRYP PFNGLMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
typedef void (APIENTRYP PFNGLMULTITEXGENFEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
typedef void (APIENTRYP PFNGLMULTITEXGENIEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLGETMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
typedef void (APIENTRYP PFNGLGETMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRYP PFNGLMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLCOPYMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (APIENTRYP PFNGLCOPYMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (APIENTRYP PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
typedef void (APIENTRYP PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
typedef void (APIENTRYP PFNGLGETFLOATINDEXEDVEXTPROC) (GLenum target, GLuint index, GLfloat *data);
typedef void (APIENTRYP PFNGLGETDOUBLEINDEXEDVEXTPROC) (GLenum target, GLuint index, GLdouble *data);
typedef void (APIENTRYP PFNGLGETPOINTERINDEXEDVEXTPROC) (GLenum target, GLuint index, void **data);
typedef void (APIENTRYP PFNGLENABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
typedef void (APIENTRYP PFNGLDISABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
typedef GLboolean (APIENTRYP PFNGLISENABLEDINDEXEDEXTPROC) (GLenum target, GLuint index);
typedef void (APIENTRYP PFNGLGETINTEGERINDEXEDVEXTPROC) (GLenum target, GLuint index, GLint *data);
typedef void (APIENTRYP PFNGLGETBOOLEANINDEXEDVEXTPROC) (GLenum target, GLuint index, GLboolean *data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint lod, void *img);
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint lod, void *img);
typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
typedef void (APIENTRYP PFNGLNAMEDBUFFERDATAEXTPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFEREXTPROC) (GLuint buffer, GLenum access);
typedef GLboolean (APIENTRYP PFNGLUNMAPNAMEDBUFFEREXTPROC) (GLuint buffer);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) (GLuint buffer, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) (GLuint buffer, GLenum pname, void **params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FEXTPROC) (GLuint program, GLint location, GLfloat v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IEXTPROC) (GLuint program, GLint location, GLint v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRYP PFNGLTEXTUREBUFFEREXTPROC) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
typedef void (APIENTRYP PFNGLMULTITEXBUFFEREXTPROC) (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLuint *params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLuint *params);
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLuint *params);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIEXTPROC) (GLuint program, GLint location, GLuint v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLint *params);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLuint *params);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLint *params);
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint *params);
typedef void (APIENTRYP PFNGLENABLECLIENTSTATEIEXTPROC) (GLenum array, GLuint index);
typedef void (APIENTRYP PFNGLDISABLECLIENTSTATEIEXTPROC) (GLenum array, GLuint index);
typedef void (APIENTRYP PFNGLGETFLOATI_VEXTPROC) (GLenum pname, GLuint index, GLfloat *params);
typedef void (APIENTRYP PFNGLGETDOUBLEI_VEXTPROC) (GLenum pname, GLuint index, GLdouble *params);
typedef void (APIENTRYP PFNGLGETPOINTERI_VEXTPROC) (GLenum pname, GLuint index, void **params);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum format, GLsizei len, const void *string);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLdouble *params);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLfloat *params);
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble *params);
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat *params);
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMIVEXTPROC) (GLuint program, GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum pname, void *string);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) (GLuint renderbuffer, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef GLenum (APIENTRYP PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) (GLuint framebuffer, GLenum target);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLGENERATETEXTUREMIPMAPEXTPROC) (GLuint texture, GLenum target);
typedef void (APIENTRYP PFNGLGENERATEMULTITEXMIPMAPEXTPROC) (GLenum texunit, GLenum target);
typedef void (APIENTRYP PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
typedef void (APIENTRYP PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
typedef void (APIENTRYP PFNGLFRAMEBUFFERREADBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
typedef void (APIENTRYP PFNGLTEXTURERENDERBUFFEREXTPROC) (GLuint texture, GLenum target, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLMULTITEXRENDERBUFFEREXTPROC) (GLenum texunit, GLenum target, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYEXTPROC) (GLuint vaobj, GLenum array);
typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYEXTPROC) (GLuint vaobj, GLenum array);
typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) (GLuint vaobj, GLuint index);
typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) (GLuint vaobj, GLuint index);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINTEGERVEXTPROC) (GLuint vaobj, GLenum pname, GLint *param);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYPOINTERVEXTPROC) (GLuint vaobj, GLenum pname, void **param);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) (GLuint vaobj, GLuint index, GLenum pname, void **param);
typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERRANGEEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (APIENTRYP PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSTORAGEEXTPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERDATAEXTPROC) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) (GLuint framebuffer, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum pname, GLint *params);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DEXTPROC) (GLuint program, GLint location, GLdouble x);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (APIENTRYP PFNGLTEXTUREBUFFERRANGEEXTPROC) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE1DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRYP PFNGLTEXTUREPAGECOMMITMENTEXTPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) (GLuint vaobj, GLuint index, GLuint divisor);
extern PFNGLMATRIXLOADFEXTPROC glMatrixLoadfEXT;
extern PFNGLMATRIXLOADDEXTPROC glMatrixLoaddEXT;
extern PFNGLMATRIXMULTFEXTPROC glMatrixMultfEXT;
extern PFNGLMATRIXMULTDEXTPROC glMatrixMultdEXT;
extern PFNGLMATRIXLOADIDENTITYEXTPROC glMatrixLoadIdentityEXT;
extern PFNGLMATRIXROTATEFEXTPROC glMatrixRotatefEXT;
extern PFNGLMATRIXROTATEDEXTPROC glMatrixRotatedEXT;
extern PFNGLMATRIXSCALEFEXTPROC glMatrixScalefEXT;
extern PFNGLMATRIXSCALEDEXTPROC glMatrixScaledEXT;
extern PFNGLMATRIXTRANSLATEFEXTPROC glMatrixTranslatefEXT;
extern PFNGLMATRIXTRANSLATEDEXTPROC glMatrixTranslatedEXT;
extern PFNGLMATRIXFRUSTUMEXTPROC glMatrixFrustumEXT;
extern PFNGLMATRIXORTHOEXTPROC glMatrixOrthoEXT;
extern PFNGLMATRIXPOPEXTPROC glMatrixPopEXT;
extern PFNGLMATRIXPUSHEXTPROC glMatrixPushEXT;
extern PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;
extern PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;
extern PFNGLTEXTUREPARAMETERFEXTPROC glTextureParameterfEXT;
extern PFNGLTEXTUREPARAMETERFVEXTPROC glTextureParameterfvEXT;
extern PFNGLTEXTUREPARAMETERIEXTPROC glTextureParameteriEXT;
extern PFNGLTEXTUREPARAMETERIVEXTPROC glTextureParameterivEXT;
extern PFNGLTEXTUREIMAGE1DEXTPROC glTextureImage1DEXT;
extern PFNGLTEXTUREIMAGE2DEXTPROC glTextureImage2DEXT;
extern PFNGLTEXTURESUBIMAGE1DEXTPROC glTextureSubImage1DEXT;
extern PFNGLTEXTURESUBIMAGE2DEXTPROC glTextureSubImage2DEXT;
extern PFNGLCOPYTEXTUREIMAGE1DEXTPROC glCopyTextureImage1DEXT;
extern PFNGLCOPYTEXTUREIMAGE2DEXTPROC glCopyTextureImage2DEXT;
extern PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glCopyTextureSubImage1DEXT;
extern PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glCopyTextureSubImage2DEXT;
extern PFNGLGETTEXTUREIMAGEEXTPROC glGetTextureImageEXT;
extern PFNGLGETTEXTUREPARAMETERFVEXTPROC glGetTextureParameterfvEXT;
extern PFNGLGETTEXTUREPARAMETERIVEXTPROC glGetTextureParameterivEXT;
extern PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glGetTextureLevelParameterfvEXT;
extern PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glGetTextureLevelParameterivEXT;
extern PFNGLTEXTUREIMAGE3DEXTPROC glTextureImage3DEXT;
extern PFNGLTEXTURESUBIMAGE3DEXTPROC glTextureSubImage3DEXT;
extern PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glCopyTextureSubImage3DEXT;
extern PFNGLBINDMULTITEXTUREEXTPROC glBindMultiTextureEXT;
extern PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;
extern PFNGLMULTITEXENVFEXTPROC glMultiTexEnvfEXT;
extern PFNGLMULTITEXENVFVEXTPROC glMultiTexEnvfvEXT;
extern PFNGLMULTITEXENVIEXTPROC glMultiTexEnviEXT;
extern PFNGLMULTITEXENVIVEXTPROC glMultiTexEnvivEXT;
extern PFNGLMULTITEXGENDEXTPROC glMultiTexGendEXT;
extern PFNGLMULTITEXGENDVEXTPROC glMultiTexGendvEXT;
extern PFNGLMULTITEXGENFEXTPROC glMultiTexGenfEXT;
extern PFNGLMULTITEXGENFVEXTPROC glMultiTexGenfvEXT;
extern PFNGLMULTITEXGENIEXTPROC glMultiTexGeniEXT;
extern PFNGLMULTITEXGENIVEXTPROC glMultiTexGenivEXT;
extern PFNGLGETMULTITEXENVFVEXTPROC glGetMultiTexEnvfvEXT;
extern PFNGLGETMULTITEXENVIVEXTPROC glGetMultiTexEnvivEXT;
extern PFNGLGETMULTITEXGENDVEXTPROC glGetMultiTexGendvEXT;
extern PFNGLGETMULTITEXGENFVEXTPROC glGetMultiTexGenfvEXT;
extern PFNGLGETMULTITEXGENIVEXTPROC glGetMultiTexGenivEXT;
extern PFNGLMULTITEXPARAMETERIEXTPROC glMultiTexParameteriEXT;
extern PFNGLMULTITEXPARAMETERIVEXTPROC glMultiTexParameterivEXT;
extern PFNGLMULTITEXPARAMETERFEXTPROC glMultiTexParameterfEXT;
extern PFNGLMULTITEXPARAMETERFVEXTPROC glMultiTexParameterfvEXT;
extern PFNGLMULTITEXIMAGE1DEXTPROC glMultiTexImage1DEXT;
extern PFNGLMULTITEXIMAGE2DEXTPROC glMultiTexImage2DEXT;
extern PFNGLMULTITEXSUBIMAGE1DEXTPROC glMultiTexSubImage1DEXT;
extern PFNGLMULTITEXSUBIMAGE2DEXTPROC glMultiTexSubImage2DEXT;
extern PFNGLCOPYMULTITEXIMAGE1DEXTPROC glCopyMultiTexImage1DEXT;
extern PFNGLCOPYMULTITEXIMAGE2DEXTPROC glCopyMultiTexImage2DEXT;
extern PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glCopyMultiTexSubImage1DEXT;
extern PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glCopyMultiTexSubImage2DEXT;
extern PFNGLGETMULTITEXIMAGEEXTPROC glGetMultiTexImageEXT;
extern PFNGLGETMULTITEXPARAMETERFVEXTPROC glGetMultiTexParameterfvEXT;
extern PFNGLGETMULTITEXPARAMETERIVEXTPROC glGetMultiTexParameterivEXT;
extern PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glGetMultiTexLevelParameterfvEXT;
extern PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glGetMultiTexLevelParameterivEXT;
extern PFNGLMULTITEXIMAGE3DEXTPROC glMultiTexImage3DEXT;
extern PFNGLMULTITEXSUBIMAGE3DEXTPROC glMultiTexSubImage3DEXT;
extern PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glCopyMultiTexSubImage3DEXT;
extern PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;
extern PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;
extern PFNGLGETFLOATINDEXEDVEXTPROC glGetFloatIndexedvEXT;
extern PFNGLGETDOUBLEINDEXEDVEXTPROC glGetDoubleIndexedvEXT;
extern PFNGLGETPOINTERINDEXEDVEXTPROC glGetPointerIndexedvEXT;
extern PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;
extern PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;
extern PFNGLISENABLEDINDEXEDEXTPROC glIsEnabledIndexedEXT;
extern PFNGLGETINTEGERINDEXEDVEXTPROC glGetIntegerIndexedvEXT;
extern PFNGLGETBOOLEANINDEXEDVEXTPROC glGetBooleanIndexedvEXT;
extern PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glCompressedTextureImage3DEXT;
extern PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glCompressedTextureImage2DEXT;
extern PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glCompressedTextureImage1DEXT;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glCompressedTextureSubImage3DEXT;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glCompressedTextureSubImage2DEXT;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glCompressedTextureSubImage1DEXT;
extern PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glGetCompressedTextureImageEXT;
extern PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glCompressedMultiTexImage3DEXT;
extern PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glCompressedMultiTexImage2DEXT;
extern PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glCompressedMultiTexImage1DEXT;
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glCompressedMultiTexSubImage3DEXT;
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glCompressedMultiTexSubImage2DEXT;
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glCompressedMultiTexSubImage1DEXT;
extern PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glGetCompressedMultiTexImageEXT;
extern PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT;
extern PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT;
extern PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT;
extern PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT;
extern PFNGLNAMEDBUFFERDATAEXTPROC glNamedBufferDataEXT;
extern PFNGLNAMEDBUFFERSUBDATAEXTPROC glNamedBufferSubDataEXT;
extern PFNGLMAPNAMEDBUFFEREXTPROC glMapNamedBufferEXT;
extern PFNGLUNMAPNAMEDBUFFEREXTPROC glUnmapNamedBufferEXT;
extern PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glGetNamedBufferParameterivEXT;
extern PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glGetNamedBufferPointervEXT;
extern PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glGetNamedBufferSubDataEXT;
extern PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT;
extern PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT;
extern PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT;
extern PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT;
extern PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT;
extern PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT;
extern PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT;
extern PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT;
extern PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT;
extern PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT;
extern PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT;
extern PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT;
extern PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT;
extern PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT;
extern PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT;
extern PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;
extern PFNGLTEXTUREBUFFEREXTPROC glTextureBufferEXT;
extern PFNGLMULTITEXBUFFEREXTPROC glMultiTexBufferEXT;
extern PFNGLTEXTUREPARAMETERIIVEXTPROC glTextureParameterIivEXT;
extern PFNGLTEXTUREPARAMETERIUIVEXTPROC glTextureParameterIuivEXT;
extern PFNGLGETTEXTUREPARAMETERIIVEXTPROC glGetTextureParameterIivEXT;
extern PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glGetTextureParameterIuivEXT;
extern PFNGLMULTITEXPARAMETERIIVEXTPROC glMultiTexParameterIivEXT;
extern PFNGLMULTITEXPARAMETERIUIVEXTPROC glMultiTexParameterIuivEXT;
extern PFNGLGETMULTITEXPARAMETERIIVEXTPROC glGetMultiTexParameterIivEXT;
extern PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glGetMultiTexParameterIuivEXT;
extern PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT;
extern PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT;
extern PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT;
extern PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT;
extern PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT;
extern PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT;
extern PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT;
extern PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glNamedProgramLocalParameters4fvEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glNamedProgramLocalParameterI4iEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glNamedProgramLocalParameterI4ivEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glNamedProgramLocalParametersI4ivEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glNamedProgramLocalParameterI4uiEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glNamedProgramLocalParameterI4uivEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glNamedProgramLocalParametersI4uivEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glGetNamedProgramLocalParameterIivEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glGetNamedProgramLocalParameterIuivEXT;
extern PFNGLENABLECLIENTSTATEIEXTPROC glEnableClientStateiEXT;
extern PFNGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT;
extern PFNGLGETFLOATI_VEXTPROC glGetFloati_vEXT;
extern PFNGLGETDOUBLEI_VEXTPROC glGetDoublei_vEXT;
extern PFNGLGETPOINTERI_VEXTPROC glGetPointeri_vEXT;
extern PFNGLNAMEDPROGRAMSTRINGEXTPROC glNamedProgramStringEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glNamedProgramLocalParameter4dEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glNamedProgramLocalParameter4dvEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glNamedProgramLocalParameter4fEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glNamedProgramLocalParameter4fvEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glGetNamedProgramLocalParameterdvEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glGetNamedProgramLocalParameterfvEXT;
extern PFNGLGETNAMEDPROGRAMIVEXTPROC glGetNamedProgramivEXT;
extern PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glGetNamedProgramStringEXT;
extern PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glNamedRenderbufferStorageEXT;
extern PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glGetNamedRenderbufferParameterivEXT;
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glNamedRenderbufferStorageMultisampleEXT;
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glNamedRenderbufferStorageMultisampleCoverageEXT;
extern PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glCheckNamedFramebufferStatusEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glNamedFramebufferTexture1DEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glNamedFramebufferTexture2DEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glNamedFramebufferTexture3DEXT;
extern PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glNamedFramebufferRenderbufferEXT;
extern PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetNamedFramebufferAttachmentParameterivEXT;
extern PFNGLGENERATETEXTUREMIPMAPEXTPROC glGenerateTextureMipmapEXT;
extern PFNGLGENERATEMULTITEXMIPMAPEXTPROC glGenerateMultiTexMipmapEXT;
extern PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glFramebufferDrawBufferEXT;
extern PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glFramebufferDrawBuffersEXT;
extern PFNGLFRAMEBUFFERREADBUFFEREXTPROC glFramebufferReadBufferEXT;
extern PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glGetFramebufferParameterivEXT;
extern PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glNamedCopyBufferSubDataEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glNamedFramebufferTextureEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glNamedFramebufferTextureLayerEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glNamedFramebufferTextureFaceEXT;
extern PFNGLTEXTURERENDERBUFFEREXTPROC glTextureRenderbufferEXT;
extern PFNGLMULTITEXRENDERBUFFEREXTPROC glMultiTexRenderbufferEXT;
extern PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glVertexArrayVertexOffsetEXT;
extern PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glVertexArrayColorOffsetEXT;
extern PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glVertexArrayEdgeFlagOffsetEXT;
extern PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glVertexArrayIndexOffsetEXT;
extern PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glVertexArrayNormalOffsetEXT;
extern PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glVertexArrayTexCoordOffsetEXT;
extern PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glVertexArrayMultiTexCoordOffsetEXT;
extern PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glVertexArrayFogCoordOffsetEXT;
extern PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glVertexArraySecondaryColorOffsetEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glVertexArrayVertexAttribOffsetEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glVertexArrayVertexAttribIOffsetEXT;
extern PFNGLENABLEVERTEXARRAYEXTPROC glEnableVertexArrayEXT;
extern PFNGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT;
extern PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glEnableVertexArrayAttribEXT;
extern PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT;
extern PFNGLGETVERTEXARRAYINTEGERVEXTPROC glGetVertexArrayIntegervEXT;
extern PFNGLGETVERTEXARRAYPOINTERVEXTPROC glGetVertexArrayPointervEXT;
extern PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC glGetVertexArrayIntegeri_vEXT;
extern PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC glGetVertexArrayPointeri_vEXT;
extern PFNGLMAPNAMEDBUFFERRANGEEXTPROC glMapNamedBufferRangeEXT;
extern PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glFlushMappedNamedBufferRangeEXT;
extern PFNGLNAMEDBUFFERSTORAGEEXTPROC glNamedBufferStorageEXT;
extern PFNGLCLEARNAMEDBUFFERDATAEXTPROC glClearNamedBufferDataEXT;
extern PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC glClearNamedBufferSubDataEXT;
extern PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC glNamedFramebufferParameteriEXT;
extern PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC glGetNamedFramebufferParameterivEXT;
extern PFNGLPROGRAMUNIFORM1DEXTPROC glProgramUniform1dEXT;
extern PFNGLPROGRAMUNIFORM2DEXTPROC glProgramUniform2dEXT;
extern PFNGLPROGRAMUNIFORM3DEXTPROC glProgramUniform3dEXT;
extern PFNGLPROGRAMUNIFORM4DEXTPROC glProgramUniform4dEXT;
extern PFNGLPROGRAMUNIFORM1DVEXTPROC glProgramUniform1dvEXT;
extern PFNGLPROGRAMUNIFORM2DVEXTPROC glProgramUniform2dvEXT;
extern PFNGLPROGRAMUNIFORM3DVEXTPROC glProgramUniform3dvEXT;
extern PFNGLPROGRAMUNIFORM4DVEXTPROC glProgramUniform4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glProgramUniformMatrix2dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glProgramUniformMatrix3dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glProgramUniformMatrix4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glProgramUniformMatrix2x3dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glProgramUniformMatrix2x4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glProgramUniformMatrix3x2dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glProgramUniformMatrix3x4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glProgramUniformMatrix4x2dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glProgramUniformMatrix4x3dvEXT;
extern PFNGLTEXTUREBUFFERRANGEEXTPROC glTextureBufferRangeEXT;
extern PFNGLTEXTURESTORAGE1DEXTPROC glTextureStorage1DEXT;
extern PFNGLTEXTURESTORAGE2DEXTPROC glTextureStorage2DEXT;
extern PFNGLTEXTURESTORAGE3DEXTPROC glTextureStorage3DEXT;
extern PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC glTextureStorage2DMultisampleEXT;
extern PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC glTextureStorage3DMultisampleEXT;
extern PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC glVertexArrayBindVertexBufferEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC glVertexArrayVertexAttribFormatEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC glVertexArrayVertexAttribIFormatEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC glVertexArrayVertexAttribLFormatEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC glVertexArrayVertexAttribBindingEXT;
extern PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC glVertexArrayVertexBindingDivisorEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glVertexArrayVertexAttribLOffsetEXT;
extern PFNGLTEXTUREPAGECOMMITMENTEXTPROC glTexturePageCommitmentEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC glVertexArrayVertexAttribDivisorEXT;
#endif /* SOGL_EXT_direct_state_access */

#ifdef SOGL_EXT_draw_instanced
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
extern PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT;
extern PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;
#endif /* SOGL_EXT_draw_instanced */

#ifdef SOGL_EXT_polygon_offset_clamp
#define GL_POLYGON_OFFSET_CLAMP_EXT       0x8E1B
typedef void (APIENTRYP PFNGLPOLYGONOFFSETCLAMPEXTPROC) (GLfloat factor, GLfloat units, GLfloat clamp);
extern PFNGLPOLYGONOFFSETCLAMPEXTPROC glPolygonOffsetClampEXT;
#endif /* SOGL_EXT_polygon_offset_clamp */

#ifdef SOGL_EXT_raster_multisample
#define GL_RASTER_MULTISAMPLE_EXT         0x9327
#define GL_RASTER_SAMPLES_EXT             0x9328
#define GL_MAX_RASTER_SAMPLES_EXT         0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT   0x932C
typedef void (APIENTRYP PFNGLRASTERSAMPLESEXTPROC) (GLuint samples, GLboolean fixedsamplelocations);
extern PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT;
#endif /* SOGL_EXT_raster_multisample */

#ifdef SOGL_EXT_separate_shader_objects
#define GL_ACTIVE_PROGRAM_EXT             0x8B8D
typedef void (APIENTRYP PFNGLUSESHADERPROGRAMEXTPROC) (GLenum type, GLuint program);
typedef void (APIENTRYP PFNGLACTIVEPROGRAMEXTPROC) (GLuint program);
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROGRAMEXTPROC) (GLenum type, const GLchar *string);
extern PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT;
extern PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT;
extern PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT;
#endif /* SOGL_EXT_separate_shader_objects */

#ifdef SOGL_EXT_shader_framebuffer_fetch
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52
#endif /* SOGL_EXT_shader_framebuffer_fetch */

#ifdef SOGL_EXT_shader_framebuffer_fetch_non_coherent
typedef void (APIENTRYP PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) (void);
extern PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glFramebufferFetchBarrierEXT;
#endif /* SOGL_EXT_shader_framebuffer_fetch_non_coherent */

#ifdef SOGL_EXT_texture_compression_s3tc
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3
#endif /* SOGL_EXT_texture_compression_s3tc */

#ifdef SOGL_EXT_texture_filter_minmax
#define GL_TEXTURE_REDUCTION_MODE_EXT     0x9366
#define GL_WEIGHTED_AVERAGE_EXT           0x9367
#endif /* SOGL_EXT_texture_filter_minmax */

#ifdef SOGL_EXT_texture_sRGB_R8
#define GL_SR8_EXT                        0x8FBD
#endif /* SOGL_EXT_texture_sRGB_R8 */

#ifdef SOGL_EXT_texture_sRGB_decode
#define GL_TEXTURE_SRGB_DECODE_EXT        0x8A48
#define GL_DECODE_EXT                     0x8A49
#define GL_SKIP_DECODE_EXT                0x8A4A
#endif /* SOGL_EXT_texture_sRGB_decode */

#ifdef SOGL_EXT_window_rectangles
#define GL_INCLUSIVE_EXT                  0x8F10
#define GL_EXCLUSIVE_EXT                  0x8F11
#define GL_WINDOW_RECTANGLE_EXT           0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT      0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT      0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT      0x8F15
typedef void (APIENTRYP PFNGLWINDOWRECTANGLESEXTPROC) (GLenum mode, GLsizei count, const GLint *box);
extern PFNGLWINDOWRECTANGLESEXTPROC glWindowRectanglesEXT;
#endif /* SOGL_EXT_window_rectangles */

#ifdef SOGL_INTEL_blackhole_render
#define GL_BLACKHOLE_RENDER_INTEL         0x83FC
#endif /* SOGL_INTEL_blackhole_render */

#ifdef SOGL_INTEL_conservative_rasterization
#define GL_CONSERVATIVE_RASTERIZATION_INTEL 0x83FE
#endif /* SOGL_INTEL_conservative_rasterization */

#ifdef SOGL_INTEL_framebuffer_CMAA
typedef void (APIENTRYP PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) (void);
extern PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC glApplyFramebufferAttachmentCMAAINTEL;
#endif /* SOGL_INTEL_framebuffer_CMAA */

#ifdef SOGL_INTEL_performance_query
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x00000000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x00000001
#define GL_PERFQUERY_WAIT_INTEL           0x83FB
#define GL_PERFQUERY_FLUSH_INTEL          0x83FA
#define GL_PERFQUERY_DONOT_FLUSH_INTEL    0x83F9
#define GL_PERFQUERY_COUNTER_EVENT_INTEL  0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL    0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500
typedef void (APIENTRYP PFNGLBEGINPERFQUERYINTELPROC) (GLuint queryHandle);
typedef void (APIENTRYP PFNGLCREATEPERFQUERYINTELPROC) (GLuint queryId, GLuint *queryHandle);
typedef void (APIENTRYP PFNGLDELETEPERFQUERYINTELPROC) (GLuint queryHandle);
typedef void (APIENTRYP PFNGLENDPERFQUERYINTELPROC) (GLuint queryHandle);
typedef void (APIENTRYP PFNGLGETFIRSTPERFQUERYIDINTELPROC) (GLuint *queryId);
typedef void (APIENTRYP PFNGLGETNEXTPERFQUERYIDINTELPROC) (GLuint queryId, GLuint *nextQueryId);
typedef void (APIENTRYP PFNGLGETPERFCOUNTERINFOINTELPROC) (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
typedef void (APIENTRYP PFNGLGETPERFQUERYDATAINTELPROC) (GLuint queryHandle, GLuint flags, GLsizei dataSize, void *data, GLuint *bytesWritten);
typedef void (APIENTRYP PFNGLGETPERFQUERYIDBYNAMEINTELPROC) (GLchar *queryName, GLuint *queryId);
typedef void (APIENTRYP PFNGLGETPERFQUERYINFOINTELPROC) (GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
extern PFNGLBEGINPERFQUERYINTELPROC glBeginPerfQueryINTEL;
extern PFNGLCREATEPERFQUERYINTELPROC glCreatePerfQueryINTEL;
extern PFNGLDELETEPERFQUERYINTELPROC glDeletePerfQueryINTEL;
extern PFNGLENDPERFQUERYINTELPROC glEndPerfQueryINTEL;
extern PFNGLGETFIRSTPERFQUERYIDINTELPROC glGetFirstPerfQueryIdINTEL;
extern PFNGLGETNEXTPERFQUERYIDINTELPROC glGetNextPerfQueryIdINTEL;
extern PFNGLGETPERFCOUNTERINFOINTELPROC glGetPerfCounterInfoINTEL;
extern PFNGLGETPERFQUERYDATAINTELPROC glGetPerfQueryDataINTEL;
extern PFNGLGETPERFQUERYIDBYNAMEINTELPROC glGetPerfQueryIdByNameINTEL;
extern PFNGLGETPERFQUERYINFOINTELPROC glGetPerfQueryInfoINTEL;
#endif /* SOGL_INTEL_performance_query */

#ifdef SOGL_MESA_framebuffer_flip_x
#define GL_FRAMEBUFFER_FLIP_X_MESA        0x8BBC
#endif /* SOGL_MESA_framebuffer_flip_x */

#ifdef SOGL_MESA_framebuffer_flip_y
#define GL_FRAMEBUFFER_FLIP_Y_MESA        0x8BBB
typedef void (APIENTRYP PFNGLFRAMEBUFFERPARAMETERIMESAPROC) (GLenum target, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) (GLenum target, GLenum pname, GLint *params);
extern PFNGLFRAMEBUFFERPARAMETERIMESAPROC glFramebufferParameteriMESA;
extern PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glGetFramebufferParameterivMESA;
#endif /* SOGL_MESA_framebuffer_flip_y */

#ifdef SOGL_MESA_framebuffer_swap_xy
#define GL_FRAMEBUFFER_SWAP_XY_MESA       0x8BBD
#endif /* SOGL_MESA_framebuffer_swap_xy */

#ifdef SOGL_NV_bindless_multi_draw_indirect
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
extern PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC glMultiDrawArraysIndirectBindlessNV;
extern PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC glMultiDrawElementsIndirectBindlessNV;
#endif /* SOGL_NV_bindless_multi_draw_indirect */

#ifdef SOGL_NV_bindless_multi_draw_indirect_count
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
extern PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC glMultiDrawArraysIndirectBindlessCountNV;
extern PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC glMultiDrawElementsIndirectBindlessCountNV;
#endif /* SOGL_NV_bindless_multi_draw_indirect_count */

#ifdef SOGL_NV_bindless_texture
typedef GLuint64 (APIENTRYP PFNGLGETTEXTUREHANDLENVPROC) (GLuint texture);
typedef GLuint64 (APIENTRYP PFNGLGETTEXTURESAMPLERHANDLENVPROC) (GLuint texture, GLuint sampler);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) (GLuint64 handle);
typedef GLuint64 (APIENTRYP PFNGLGETIMAGEHANDLENVPROC) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle, GLenum access);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) (GLuint64 handle);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64NVPROC) (GLint location, GLuint64 value);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64VNVPROC) (GLint location, GLsizei count, const GLuint64 *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) (GLuint program, GLint location, GLuint64 value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *values);
typedef GLboolean (APIENTRYP PFNGLISTEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle);
typedef GLboolean (APIENTRYP PFNGLISIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle);
extern PFNGLGETTEXTUREHANDLENVPROC glGetTextureHandleNV;
extern PFNGLGETTEXTURESAMPLERHANDLENVPROC glGetTextureSamplerHandleNV;
extern PFNGLMAKETEXTUREHANDLERESIDENTNVPROC glMakeTextureHandleResidentNV;
extern PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glMakeTextureHandleNonResidentNV;
extern PFNGLGETIMAGEHANDLENVPROC glGetImageHandleNV;
extern PFNGLMAKEIMAGEHANDLERESIDENTNVPROC glMakeImageHandleResidentNV;
extern PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC glMakeImageHandleNonResidentNV;
extern PFNGLUNIFORMHANDLEUI64NVPROC glUniformHandleui64NV;
extern PFNGLUNIFORMHANDLEUI64VNVPROC glUniformHandleui64vNV;
extern PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC glProgramUniformHandleui64NV;
extern PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC glProgramUniformHandleui64vNV;
extern PFNGLISTEXTUREHANDLERESIDENTNVPROC glIsTextureHandleResidentNV;
extern PFNGLISIMAGEHANDLERESIDENTNVPROC glIsImageHandleResidentNV;
#endif /* SOGL_NV_bindless_texture */

#ifdef SOGL_NV_blend_equation_advanced
#define GL_BLEND_OVERLAP_NV               0x9281
#define GL_BLEND_PREMULTIPLIED_SRC_NV     0x9280
#define GL_BLUE_NV                        0x1905
#define GL_COLORBURN_NV                   0x929A
#define GL_COLORDODGE_NV                  0x9299
#define GL_CONJOINT_NV                    0x9284
#define GL_CONTRAST_NV                    0x92A1
#define GL_DARKEN_NV                      0x9297
#define GL_DIFFERENCE_NV                  0x929E
#define GL_DISJOINT_NV                    0x9283
#define GL_DST_ATOP_NV                    0x928F
#define GL_DST_IN_NV                      0x928B
#define GL_DST_NV                         0x9287
#define GL_DST_OUT_NV                     0x928D
#define GL_DST_OVER_NV                    0x9289
#define GL_EXCLUSION_NV                   0x92A0
#define GL_GREEN_NV                       0x1904
#define GL_HARDLIGHT_NV                   0x929B
#define GL_HARDMIX_NV                     0x92A9
#define GL_HSL_COLOR_NV                   0x92AF
#define GL_HSL_HUE_NV                     0x92AD
#define GL_HSL_LUMINOSITY_NV              0x92B0
#define GL_HSL_SATURATION_NV              0x92AE
#define GL_INVERT_OVG_NV                  0x92B4
#define GL_INVERT_RGB_NV                  0x92A3
#define GL_LIGHTEN_NV                     0x9298
#define GL_LINEARBURN_NV                  0x92A5
#define GL_LINEARDODGE_NV                 0x92A4
#define GL_LINEARLIGHT_NV                 0x92A7
#define GL_MINUS_CLAMPED_NV               0x92B3
#define GL_MINUS_NV                       0x929F
#define GL_MULTIPLY_NV                    0x9294
#define GL_OVERLAY_NV                     0x9296
#define GL_PINLIGHT_NV                    0x92A8
#define GL_PLUS_CLAMPED_ALPHA_NV          0x92B2
#define GL_PLUS_CLAMPED_NV                0x92B1
#define GL_PLUS_DARKER_NV                 0x9292
#define GL_PLUS_NV                        0x9291
#define GL_RED_NV                         0x1903
#define GL_SCREEN_NV                      0x9295
#define GL_SOFTLIGHT_NV                   0x929C
#define GL_SRC_ATOP_NV                    0x928E
#define GL_SRC_IN_NV                      0x928A
#define GL_SRC_NV                         0x9286
#define GL_SRC_OUT_NV                     0x928C
#define GL_SRC_OVER_NV                    0x9288
#define GL_UNCORRELATED_NV                0x9282
#define GL_VIVIDLIGHT_NV                  0x92A6
#define GL_XOR_NV                         0x1506
typedef void (APIENTRYP PFNGLBLENDPARAMETERINVPROC) (GLenum pname, GLint value);
typedef void (APIENTRYP PFNGLBLENDBARRIERNVPROC) (void);
extern PFNGLBLENDPARAMETERINVPROC glBlendParameteriNV;
extern PFNGLBLENDBARRIERNVPROC glBlendBarrierNV;
#endif /* SOGL_NV_blend_equation_advanced */

#ifdef SOGL_NV_blend_equation_advanced_coherent
#define GL_BLEND_ADVANCED_COHERENT_NV     0x9285
#endif /* SOGL_NV_blend_equation_advanced_coherent */

#ifdef SOGL_NV_blend_minmax_factor
#define GL_FACTOR_MIN_AMD                 0x901C
#define GL_FACTOR_MAX_AMD                 0x901D
#endif /* SOGL_NV_blend_minmax_factor */

#ifdef SOGL_NV_clip_space_w_scaling
#define GL_VIEWPORT_POSITION_W_SCALE_NV   0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV 0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV 0x937E
typedef void (APIENTRYP PFNGLVIEWPORTPOSITIONWSCALENVPROC) (GLuint index, GLfloat xcoeff, GLfloat ycoeff);
extern PFNGLVIEWPORTPOSITIONWSCALENVPROC glViewportPositionWScaleNV;
#endif /* SOGL_NV_clip_space_w_scaling */

#ifdef SOGL_NV_command_list
#define GL_TERMINATE_SEQUENCE_COMMAND_NV  0x0000
#define GL_NOP_COMMAND_NV                 0x0001
#define GL_DRAW_ELEMENTS_COMMAND_NV       0x0002
#define GL_DRAW_ARRAYS_COMMAND_NV         0x0003
#define GL_DRAW_ELEMENTS_STRIP_COMMAND_NV 0x0004
#define GL_DRAW_ARRAYS_STRIP_COMMAND_NV   0x0005
#define GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV 0x0006
#define GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV 0x0007
#define GL_ELEMENT_ADDRESS_COMMAND_NV     0x0008
#define GL_ATTRIBUTE_ADDRESS_COMMAND_NV   0x0009
#define GL_UNIFORM_ADDRESS_COMMAND_NV     0x000A
#define GL_BLEND_COLOR_COMMAND_NV         0x000B
#define GL_STENCIL_REF_COMMAND_NV         0x000C
#define GL_LINE_WIDTH_COMMAND_NV          0x000D
#define GL_POLYGON_OFFSET_COMMAND_NV      0x000E
#define GL_ALPHA_REF_COMMAND_NV           0x000F
#define GL_VIEWPORT_COMMAND_NV            0x0010
#define GL_SCISSOR_COMMAND_NV             0x0011
#define GL_FRONT_FACE_COMMAND_NV          0x0012
typedef void (APIENTRYP PFNGLCREATESTATESNVPROC) (GLsizei n, GLuint *states);
typedef void (APIENTRYP PFNGLDELETESTATESNVPROC) (GLsizei n, const GLuint *states);
typedef GLboolean (APIENTRYP PFNGLISSTATENVPROC) (GLuint state);
typedef void (APIENTRYP PFNGLSTATECAPTURENVPROC) (GLuint state, GLenum mode);
typedef GLuint (APIENTRYP PFNGLGETCOMMANDHEADERNVPROC) (GLenum tokenID, GLuint size);
typedef GLushort (APIENTRYP PFNGLGETSTAGEINDEXNVPROC) (GLenum shadertype);
typedef void (APIENTRYP PFNGLDRAWCOMMANDSNVPROC) (GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count);
typedef void (APIENTRYP PFNGLDRAWCOMMANDSADDRESSNVPROC) (GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count);
typedef void (APIENTRYP PFNGLDRAWCOMMANDSSTATESNVPROC) (GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
typedef void (APIENTRYP PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) (const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
typedef void (APIENTRYP PFNGLCREATECOMMANDLISTSNVPROC) (GLsizei n, GLuint *lists);
typedef void (APIENTRYP PFNGLDELETECOMMANDLISTSNVPROC) (GLsizei n, const GLuint *lists);
typedef GLboolean (APIENTRYP PFNGLISCOMMANDLISTNVPROC) (GLuint list);
typedef void (APIENTRYP PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) (GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
typedef void (APIENTRYP PFNGLCOMMANDLISTSEGMENTSNVPROC) (GLuint list, GLuint segments);
typedef void (APIENTRYP PFNGLCOMPILECOMMANDLISTNVPROC) (GLuint list);
typedef void (APIENTRYP PFNGLCALLCOMMANDLISTNVPROC) (GLuint list);
extern PFNGLCREATESTATESNVPROC glCreateStatesNV;
extern PFNGLDELETESTATESNVPROC glDeleteStatesNV;
extern PFNGLISSTATENVPROC glIsStateNV;
extern PFNGLSTATECAPTURENVPROC glStateCaptureNV;
extern PFNGLGETCOMMANDHEADERNVPROC glGetCommandHeaderNV;
extern PFNGLGETSTAGEINDEXNVPROC glGetStageIndexNV;
extern PFNGLDRAWCOMMANDSNVPROC glDrawCommandsNV;
extern PFNGLDRAWCOMMANDSADDRESSNVPROC glDrawCommandsAddressNV;
extern PFNGLDRAWCOMMANDSSTATESNVPROC glDrawCommandsStatesNV;
extern PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC glDrawCommandsStatesAddressNV;
extern PFNGLCREATECOMMANDLISTSNVPROC glCreateCommandListsNV;
extern PFNGLDELETECOMMANDLISTSNVPROC glDeleteCommandListsNV;
extern PFNGLISCOMMANDLISTNVPROC glIsCommandListNV;
extern PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC glListDrawCommandsStatesClientNV;
extern PFNGLCOMMANDLISTSEGMENTSNVPROC glCommandListSegmentsNV;
extern PFNGLCOMPILECOMMANDLISTNVPROC glCompileCommandListNV;
extern PFNGLCALLCOMMANDLISTNVPROC glCallCommandListNV;
#endif /* SOGL_NV_command_list */

#ifdef SOGL_NV_conditional_render
#define GL_QUERY_WAIT_NV                  0x8E13
#define GL_QUERY_NO_WAIT_NV               0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV        0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV     0x8E16
typedef void (APIENTRYP PFNGLBEGINCONDITIONALRENDERNVPROC) (GLuint id, GLenum mode);
typedef void (APIENTRYP PFNGLENDCONDITIONALRENDERNVPROC) (void);
extern PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;
extern PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV;
#endif /* SOGL_NV_conditional_render */

#ifdef SOGL_NV_conservative_raster
#define GL_CONSERVATIVE_RASTERIZATION_NV  0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349
typedef void (APIENTRYP PFNGLSUBPIXELPRECISIONBIASNVPROC) (GLuint xbits, GLuint ybits);
extern PFNGLSUBPIXELPRECISIONBIASNVPROC glSubpixelPrecisionBiasNV;
#endif /* SOGL_NV_conservative_raster */

#ifdef SOGL_NV_conservative_raster_dilate
#define GL_CONSERVATIVE_RASTER_DILATE_NV  0x9379
#define GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV 0x937A
#define GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV 0x937B
typedef void (APIENTRYP PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) (GLenum pname, GLfloat value);
extern PFNGLCONSERVATIVERASTERPARAMETERFNVPROC glConservativeRasterParameterfNV;
#endif /* SOGL_NV_conservative_raster_dilate */

#ifdef SOGL_NV_conservative_raster_pre_snap
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV 0x9550
#endif /* SOGL_NV_conservative_raster_pre_snap */

#ifdef SOGL_NV_conservative_raster_pre_snap_triangles
#define GL_CONSERVATIVE_RASTER_MODE_NV    0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV 0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV 0x954F
typedef void (APIENTRYP PFNGLCONSERVATIVERASTERPARAMETERINVPROC) (GLenum pname, GLint param);
extern PFNGLCONSERVATIVERASTERPARAMETERINVPROC glConservativeRasterParameteriNV;
#endif /* SOGL_NV_conservative_raster_pre_snap_triangles */

#ifdef SOGL_NV_depth_buffer_float
#define GL_DEPTH_COMPONENT32F_NV          0x8DAB
#define GL_DEPTH32F_STENCIL8_NV           0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV     0x8DAF
typedef void (APIENTRYP PFNGLDEPTHRANGEDNVPROC) (GLdouble zNear, GLdouble zFar);
typedef void (APIENTRYP PFNGLCLEARDEPTHDNVPROC) (GLdouble depth);
typedef void (APIENTRYP PFNGLDEPTHBOUNDSDNVPROC) (GLdouble zmin, GLdouble zmax);
extern PFNGLDEPTHRANGEDNVPROC glDepthRangedNV;
extern PFNGLCLEARDEPTHDNVPROC glClearDepthdNV;
extern PFNGLDEPTHBOUNDSDNVPROC glDepthBoundsdNV;
#endif /* SOGL_NV_depth_buffer_float */

#ifdef SOGL_NV_draw_vulkan_image
typedef void (APIENTRY  *GLVULKANPROCNV)(void);
typedef void (APIENTRYP PFNGLDRAWVKIMAGENVPROC) (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
typedef GLVULKANPROCNV (APIENTRYP PFNGLGETVKPROCADDRNVPROC) (const GLchar *name);
typedef void (APIENTRYP PFNGLWAITVKSEMAPHORENVPROC) (GLuint64 vkSemaphore);
typedef void (APIENTRYP PFNGLSIGNALVKSEMAPHORENVPROC) (GLuint64 vkSemaphore);
typedef void (APIENTRYP PFNGLSIGNALVKFENCENVPROC) (GLuint64 vkFence);
extern PFNGLDRAWVKIMAGENVPROC glDrawVkImageNV;
extern PFNGLGETVKPROCADDRNVPROC glGetVkProcAddrNV;
extern PFNGLWAITVKSEMAPHORENVPROC glWaitVkSemaphoreNV;
extern PFNGLSIGNALVKSEMAPHORENVPROC glSignalVkSemaphoreNV;
extern PFNGLSIGNALVKFENCENVPROC glSignalVkFenceNV;
#endif /* SOGL_NV_draw_vulkan_image */

#ifdef SOGL_NV_fill_rectangle
#define GL_FILL_RECTANGLE_NV              0x933C
#endif /* SOGL_NV_fill_rectangle */

#ifdef SOGL_NV_fragment_coverage_to_color
#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV  0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV     0x92DE
typedef void (APIENTRYP PFNGLFRAGMENTCOVERAGECOLORNVPROC) (GLuint color);
extern PFNGLFRAGMENTCOVERAGECOLORNVPROC glFragmentCoverageColorNV;
#endif /* SOGL_NV_fragment_coverage_to_color */

#ifdef SOGL_NV_framebuffer_mixed_samples
#define GL_COVERAGE_MODULATION_TABLE_NV   0x9331
#define GL_COLOR_SAMPLES_NV               0x8E20
#define GL_DEPTH_SAMPLES_NV               0x932D
#define GL_STENCIL_SAMPLES_NV             0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV         0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333
typedef void (APIENTRYP PFNGLCOVERAGEMODULATIONTABLENVPROC) (GLsizei n, const GLfloat *v);
typedef void (APIENTRYP PFNGLGETCOVERAGEMODULATIONTABLENVPROC) (GLsizei bufSize, GLfloat *v);
typedef void (APIENTRYP PFNGLCOVERAGEMODULATIONNVPROC) (GLenum components);
extern PFNGLCOVERAGEMODULATIONTABLENVPROC glCoverageModulationTableNV;
extern PFNGLGETCOVERAGEMODULATIONTABLENVPROC glGetCoverageModulationTableNV;
extern PFNGLCOVERAGEMODULATIONNVPROC glCoverageModulationNV;
#endif /* SOGL_NV_framebuffer_mixed_samples */

#ifdef SOGL_NV_framebuffer_multisample_coverage
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV  0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV  0x8E12
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glRenderbufferStorageMultisampleCoverageNV;
#endif /* SOGL_NV_framebuffer_multisample_coverage */

#ifdef SOGL_NV_gpu_shader5
typedef khronos_int64_t GLint64EXT;
#define GL_INT64_NV                       0x140E
#define GL_UNSIGNED_INT64_NV              0x140F
#define GL_INT8_NV                        0x8FE0
#define GL_INT8_VEC2_NV                   0x8FE1
#define GL_INT8_VEC3_NV                   0x8FE2
#define GL_INT8_VEC4_NV                   0x8FE3
#define GL_INT16_NV                       0x8FE4
#define GL_INT16_VEC2_NV                  0x8FE5
#define GL_INT16_VEC3_NV                  0x8FE6
#define GL_INT16_VEC4_NV                  0x8FE7
#define GL_INT64_VEC2_NV                  0x8FE9
#define GL_INT64_VEC3_NV                  0x8FEA
#define GL_INT64_VEC4_NV                  0x8FEB
#define GL_UNSIGNED_INT8_NV               0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV          0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV          0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV          0x8FEF
#define GL_UNSIGNED_INT16_NV              0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV         0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV         0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV         0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV         0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV         0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV         0x8FF7
#define GL_FLOAT16_NV                     0x8FF8
#define GL_FLOAT16_VEC2_NV                0x8FF9
#define GL_FLOAT16_VEC3_NV                0x8FFA
#define GL_FLOAT16_VEC4_NV                0x8FFB
typedef void (APIENTRYP PFNGLUNIFORM1I64NVPROC) (GLint location, GLint64EXT x);
typedef void (APIENTRYP PFNGLUNIFORM2I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y);
typedef void (APIENTRYP PFNGLUNIFORM3I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (APIENTRYP PFNGLUNIFORM4I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (APIENTRYP PFNGLUNIFORM1I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLUNIFORM2I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLUNIFORM3I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLUNIFORM4I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLUNIFORM1UI64NVPROC) (GLint location, GLuint64EXT x);
typedef void (APIENTRYP PFNGLUNIFORM2UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (APIENTRYP PFNGLUNIFORM3UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (APIENTRYP PFNGLUNIFORM4UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (APIENTRYP PFNGLUNIFORM1UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLUNIFORM2UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLUNIFORM3UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLUNIFORM4UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLGETUNIFORMI64VNVPROC) (GLuint program, GLint location, GLint64EXT *params);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64NVPROC) (GLuint program, GLint location, GLint64EXT x);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLUNIFORM1I64NVPROC glUniform1i64NV;
extern PFNGLUNIFORM2I64NVPROC glUniform2i64NV;
extern PFNGLUNIFORM3I64NVPROC glUniform3i64NV;
extern PFNGLUNIFORM4I64NVPROC glUniform4i64NV;
extern PFNGLUNIFORM1I64VNVPROC glUniform1i64vNV;
extern PFNGLUNIFORM2I64VNVPROC glUniform2i64vNV;
extern PFNGLUNIFORM3I64VNVPROC glUniform3i64vNV;
extern PFNGLUNIFORM4I64VNVPROC glUniform4i64vNV;
extern PFNGLUNIFORM1UI64NVPROC glUniform1ui64NV;
extern PFNGLUNIFORM2UI64NVPROC glUniform2ui64NV;
extern PFNGLUNIFORM3UI64NVPROC glUniform3ui64NV;
extern PFNGLUNIFORM4UI64NVPROC glUniform4ui64NV;
extern PFNGLUNIFORM1UI64VNVPROC glUniform1ui64vNV;
extern PFNGLUNIFORM2UI64VNVPROC glUniform2ui64vNV;
extern PFNGLUNIFORM3UI64VNVPROC glUniform3ui64vNV;
extern PFNGLUNIFORM4UI64VNVPROC glUniform4ui64vNV;
extern PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV;
extern PFNGLPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV;
extern PFNGLPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV;
extern PFNGLPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV;
extern PFNGLPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV;
extern PFNGLPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV;
extern PFNGLPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV;
extern PFNGLPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV;
extern PFNGLPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV;
extern PFNGLPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV;
extern PFNGLPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV;
extern PFNGLPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV;
extern PFNGLPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV;
extern PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;
extern PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;
extern PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;
extern PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;
#endif /* SOGL_NV_gpu_shader5 */

#ifdef SOGL_NV_internalformat_sample_query
#define GL_MULTISAMPLES_NV                0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV         0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV         0x9373
#define GL_CONFORMANT_NV                  0x9374
typedef void (APIENTRYP PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params);
extern PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glGetInternalformatSampleivNV;
#endif /* SOGL_NV_internalformat_sample_query */

#ifdef SOGL_NV_memory_attachment
#define GL_ATTACHED_MEMORY_OBJECT_NV      0x95A4
#define GL_ATTACHED_MEMORY_OFFSET_NV      0x95A5
#define GL_MEMORY_ATTACHABLE_ALIGNMENT_NV 0x95A6
#define GL_MEMORY_ATTACHABLE_SIZE_NV      0x95A7
#define GL_MEMORY_ATTACHABLE_NV           0x95A8
#define GL_DETACHED_MEMORY_INCARNATION_NV 0x95A9
#define GL_DETACHED_TEXTURES_NV           0x95AA
#define GL_DETACHED_BUFFERS_NV            0x95AB
#define GL_MAX_DETACHED_TEXTURES_NV       0x95AC
#define GL_MAX_DETACHED_BUFFERS_NV        0x95AD
typedef void (APIENTRYP PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) (GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint *params);
typedef void (APIENTRYP PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) (GLuint memory, GLenum pname);
typedef void (APIENTRYP PFNGLTEXATTACHMEMORYNVPROC) (GLenum target, GLuint memory, GLuint64 offset);
typedef void (APIENTRYP PFNGLBUFFERATTACHMEMORYNVPROC) (GLenum target, GLuint memory, GLuint64 offset);
typedef void (APIENTRYP PFNGLTEXTUREATTACHMEMORYNVPROC) (GLuint texture, GLuint memory, GLuint64 offset);
typedef void (APIENTRYP PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) (GLuint buffer, GLuint memory, GLuint64 offset);
extern PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC glGetMemoryObjectDetachedResourcesuivNV;
extern PFNGLRESETMEMORYOBJECTPARAMETERNVPROC glResetMemoryObjectParameterNV;
extern PFNGLTEXATTACHMEMORYNVPROC glTexAttachMemoryNV;
extern PFNGLBUFFERATTACHMEMORYNVPROC glBufferAttachMemoryNV;
extern PFNGLTEXTUREATTACHMEMORYNVPROC glTextureAttachMemoryNV;
extern PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glNamedBufferAttachMemoryNV;
#endif /* SOGL_NV_memory_attachment */

#ifdef SOGL_NV_memory_object_sparse
typedef void (APIENTRYP PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) (GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
typedef void (APIENTRYP PFNGLTEXPAGECOMMITMENTMEMNVPROC) (GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
typedef void (APIENTRYP PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) (GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
extern PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glBufferPageCommitmentMemNV;
extern PFNGLTEXPAGECOMMITMENTMEMNVPROC glTexPageCommitmentMemNV;
extern PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glNamedBufferPageCommitmentMemNV;
extern PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC glTexturePageCommitmentMemNV;
#endif /* SOGL_NV_memory_object_sparse */

#ifdef SOGL_NV_mesh_shader
#define GL_MESH_SHADER_NV                 0x9559
#define GL_TASK_SHADER_NV                 0x955A
#define GL_MAX_MESH_UNIFORM_BLOCKS_NV     0x8E60
#define GL_MAX_MESH_TEXTURE_IMAGE_UNITS_NV 0x8E61
#define GL_MAX_MESH_IMAGE_UNIFORMS_NV     0x8E62
#define GL_MAX_MESH_UNIFORM_COMPONENTS_NV 0x8E63
#define GL_MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV 0x8E64
#define GL_MAX_MESH_ATOMIC_COUNTERS_NV    0x8E65
#define GL_MAX_MESH_SHADER_STORAGE_BLOCKS_NV 0x8E66
#define GL_MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV 0x8E67
#define GL_MAX_TASK_UNIFORM_BLOCKS_NV     0x8E68
#define GL_MAX_TASK_TEXTURE_IMAGE_UNITS_NV 0x8E69
#define GL_MAX_TASK_IMAGE_UNIFORMS_NV     0x8E6A
#define GL_MAX_TASK_UNIFORM_COMPONENTS_NV 0x8E6B
#define GL_MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV 0x8E6C
#define GL_MAX_TASK_ATOMIC_COUNTERS_NV    0x8E6D
#define GL_MAX_TASK_SHADER_STORAGE_BLOCKS_NV 0x8E6E
#define GL_MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV 0x8E6F
#define GL_MAX_MESH_WORK_GROUP_INVOCATIONS_NV 0x95A2
#define GL_MAX_TASK_WORK_GROUP_INVOCATIONS_NV 0x95A3
#define GL_MAX_MESH_TOTAL_MEMORY_SIZE_NV  0x9536
#define GL_MAX_TASK_TOTAL_MEMORY_SIZE_NV  0x9537
#define GL_MAX_MESH_OUTPUT_VERTICES_NV    0x9538
#define GL_MAX_MESH_OUTPUT_PRIMITIVES_NV  0x9539
#define GL_MAX_TASK_OUTPUT_COUNT_NV       0x953A
#define GL_MAX_DRAW_MESH_TASKS_COUNT_NV   0x953D
#define GL_MAX_MESH_VIEWS_NV              0x9557
#define GL_MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV 0x92DF
#define GL_MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV 0x9543
#define GL_MAX_MESH_WORK_GROUP_SIZE_NV    0x953B
#define GL_MAX_TASK_WORK_GROUP_SIZE_NV    0x953C
#define GL_MESH_WORK_GROUP_SIZE_NV        0x953E
#define GL_TASK_WORK_GROUP_SIZE_NV        0x953F
#define GL_MESH_VERTICES_OUT_NV           0x9579
#define GL_MESH_PRIMITIVES_OUT_NV         0x957A
#define GL_MESH_OUTPUT_TYPE_NV            0x957B
#define GL_UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV 0x959C
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV 0x959D
#define GL_REFERENCED_BY_MESH_SHADER_NV   0x95A0
#define GL_REFERENCED_BY_TASK_SHADER_NV   0x95A1
#define GL_MESH_SHADER_BIT_NV             0x00000040
#define GL_TASK_SHADER_BIT_NV             0x00000080
#define GL_MESH_SUBROUTINE_NV             0x957C
#define GL_TASK_SUBROUTINE_NV             0x957D
#define GL_MESH_SUBROUTINE_UNIFORM_NV     0x957E
#define GL_TASK_SUBROUTINE_UNIFORM_NV     0x957F
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV 0x959E
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV 0x959F
typedef void (APIENTRYP PFNGLDRAWMESHTASKSNVPROC) (GLuint first, GLuint count);
typedef void (APIENTRYP PFNGLDRAWMESHTASKSINDIRECTNVPROC) (GLintptr indirect);
typedef void (APIENTRYP PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) (GLintptr indirect, GLsizei drawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
extern PFNGLDRAWMESHTASKSNVPROC glDrawMeshTasksNV;
extern PFNGLDRAWMESHTASKSINDIRECTNVPROC glDrawMeshTasksIndirectNV;
extern PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC glMultiDrawMeshTasksIndirectNV;
extern PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC glMultiDrawMeshTasksIndirectCountNV;
#endif /* SOGL_NV_mesh_shader */

#ifdef SOGL_NV_path_rendering
#define GL_PATH_FORMAT_SVG_NV             0x9070
#define GL_PATH_FORMAT_PS_NV              0x9071
#define GL_STANDARD_FONT_NAME_NV          0x9072
#define GL_SYSTEM_FONT_NAME_NV            0x9073
#define GL_FILE_NAME_NV                   0x9074
#define GL_PATH_STROKE_WIDTH_NV           0x9075
#define GL_PATH_END_CAPS_NV               0x9076
#define GL_PATH_INITIAL_END_CAP_NV        0x9077
#define GL_PATH_TERMINAL_END_CAP_NV       0x9078
#define GL_PATH_JOIN_STYLE_NV             0x9079
#define GL_PATH_MITER_LIMIT_NV            0x907A
#define GL_PATH_DASH_CAPS_NV              0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV       0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV      0x907D
#define GL_PATH_DASH_OFFSET_NV            0x907E
#define GL_PATH_CLIENT_LENGTH_NV          0x907F
#define GL_PATH_FILL_MODE_NV              0x9080
#define GL_PATH_FILL_MASK_NV              0x9081
#define GL_PATH_FILL_COVER_MODE_NV        0x9082
#define GL_PATH_STROKE_COVER_MODE_NV      0x9083
#define GL_PATH_STROKE_MASK_NV            0x9084
#define GL_COUNT_UP_NV                    0x9088
#define GL_COUNT_DOWN_NV                  0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV    0x908A
#define GL_CONVEX_HULL_NV                 0x908B
#define GL_BOUNDING_BOX_NV                0x908D
#define GL_TRANSLATE_X_NV                 0x908E
#define GL_TRANSLATE_Y_NV                 0x908F
#define GL_TRANSLATE_2D_NV                0x9090
#define GL_TRANSLATE_3D_NV                0x9091
#define GL_AFFINE_2D_NV                   0x9092
#define GL_AFFINE_3D_NV                   0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV         0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV         0x9098
#define GL_UTF8_NV                        0x909A
#define GL_UTF16_NV                       0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV 0x909C
#define GL_PATH_COMMAND_COUNT_NV          0x909D
#define GL_PATH_COORD_COUNT_NV            0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV       0x909F
#define GL_PATH_COMPUTED_LENGTH_NV        0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV      0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV    0x90A2
#define GL_SQUARE_NV                      0x90A3
#define GL_ROUND_NV                       0x90A4
#define GL_TRIANGULAR_NV                  0x90A5
#define GL_BEVEL_NV                       0x90A6
#define GL_MITER_REVERT_NV                0x90A7
#define GL_MITER_TRUNCATE_NV              0x90A8
#define GL_SKIP_MISSING_GLYPH_NV          0x90A9
#define GL_USE_MISSING_GLYPH_NV           0x90AA
#define GL_PATH_ERROR_POSITION_NV         0x90AB
#define GL_ACCUM_ADJACENT_PAIRS_NV        0x90AD
#define GL_ADJACENT_PAIRS_NV              0x90AE
#define GL_FIRST_TO_REST_NV               0x90AF
#define GL_PATH_GEN_MODE_NV               0x90B0
#define GL_PATH_GEN_COEFF_NV              0x90B1
#define GL_PATH_GEN_COMPONENTS_NV         0x90B3
#define GL_PATH_STENCIL_FUNC_NV           0x90B7
#define GL_PATH_STENCIL_REF_NV            0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV     0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV 0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV 0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV       0x90BF
#define GL_PATH_DASH_OFFSET_RESET_NV      0x90B4
#define GL_MOVE_TO_RESETS_NV              0x90B5
#define GL_MOVE_TO_CONTINUES_NV           0x90B6
#define GL_CLOSE_PATH_NV                  0x00
#define GL_MOVE_TO_NV                     0x02
#define GL_RELATIVE_MOVE_TO_NV            0x03
#define GL_LINE_TO_NV                     0x04
#define GL_RELATIVE_LINE_TO_NV            0x05
#define GL_HORIZONTAL_LINE_TO_NV          0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV 0x07
#define GL_VERTICAL_LINE_TO_NV            0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV   0x09
#define GL_QUADRATIC_CURVE_TO_NV          0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV 0x0B
#define GL_CUBIC_CURVE_TO_NV              0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV     0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV   0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0F
#define GL_SMOOTH_CUBIC_CURVE_TO_NV       0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV 0x11
#define GL_SMALL_CCW_ARC_TO_NV            0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV   0x13
#define GL_SMALL_CW_ARC_TO_NV             0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV    0x15
#define GL_LARGE_CCW_ARC_TO_NV            0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV   0x17
#define GL_LARGE_CW_ARC_TO_NV             0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV    0x19
#define GL_RESTART_PATH_NV                0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV    0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV     0xF4
#define GL_RECT_NV                        0xF6
#define GL_CIRCULAR_CCW_ARC_TO_NV         0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV          0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV     0xFC
#define GL_ARC_TO_NV                      0xFE
#define GL_RELATIVE_ARC_TO_NV             0xFF
#define GL_BOLD_BIT_NV                    0x01
#define GL_ITALIC_BIT_NV                  0x02
#define GL_GLYPH_WIDTH_BIT_NV             0x01
#define GL_GLYPH_HEIGHT_BIT_NV            0x02
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV 0x04
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV 0x08
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV 0x10
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV 0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV 0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV 0x80
#define GL_GLYPH_HAS_KERNING_BIT_NV       0x100
#define GL_FONT_X_MIN_BOUNDS_BIT_NV       0x00010000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV       0x00020000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV       0x00040000
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV       0x00080000
#define GL_FONT_UNITS_PER_EM_BIT_NV       0x00100000
#define GL_FONT_ASCENDER_BIT_NV           0x00200000
#define GL_FONT_DESCENDER_BIT_NV          0x00400000
#define GL_FONT_HEIGHT_BIT_NV             0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV  0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV 0x02000000
#define GL_FONT_UNDERLINE_POSITION_BIT_NV 0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV 0x08000000
#define GL_FONT_HAS_KERNING_BIT_NV        0x10000000
#define GL_ROUNDED_RECT_NV                0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV       0xE9
#define GL_ROUNDED_RECT2_NV               0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV      0xEB
#define GL_ROUNDED_RECT4_NV               0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV      0xED
#define GL_ROUNDED_RECT8_NV               0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV      0xEF
#define GL_RELATIVE_RECT_NV               0xF7
#define GL_FONT_GLYPHS_AVAILABLE_NV       0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV     0x9369
#define GL_FONT_UNAVAILABLE_NV            0x936A
#define GL_FONT_UNINTELLIGIBLE_NV         0x936B
#define GL_CONIC_CURVE_TO_NV              0x1A
#define GL_RELATIVE_CONIC_CURVE_TO_NV     0x1B
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV  0x20000000
#define GL_STANDARD_FONT_FORMAT_NV        0x936C
#define GL_PATH_PROJECTION_NV             0x1701
#define GL_PATH_MODELVIEW_NV              0x1700
#define GL_PATH_MODELVIEW_STACK_DEPTH_NV  0x0BA3
#define GL_PATH_MODELVIEW_MATRIX_NV       0x0BA6
#define GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV 0x0D36
#define GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV 0x84E3
#define GL_PATH_PROJECTION_STACK_DEPTH_NV 0x0BA4
#define GL_PATH_PROJECTION_MATRIX_NV      0x0BA7
#define GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV 0x0D38
#define GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV 0x84E4
#define GL_FRAGMENT_INPUT_NV              0x936D
typedef GLuint (APIENTRYP PFNGLGENPATHSNVPROC) (GLsizei range);
typedef void (APIENTRYP PFNGLDELETEPATHSNVPROC) (GLuint path, GLsizei range);
typedef GLboolean (APIENTRYP PFNGLISPATHNVPROC) (GLuint path);
typedef void (APIENTRYP PFNGLPATHCOMMANDSNVPROC) (GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (APIENTRYP PFNGLPATHCOORDSNVPROC) (GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (APIENTRYP PFNGLPATHSUBCOMMANDSNVPROC) (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (APIENTRYP PFNGLPATHSUBCOORDSNVPROC) (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
typedef void (APIENTRYP PFNGLPATHSTRINGNVPROC) (GLuint path, GLenum format, GLsizei length, const void *pathString);
typedef void (APIENTRYP PFNGLPATHGLYPHSNVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (APIENTRYP PFNGLPATHGLYPHRANGENVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (APIENTRYP PFNGLWEIGHTPATHSNVPROC) (GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights);
typedef void (APIENTRYP PFNGLCOPYPATHNVPROC) (GLuint resultPath, GLuint srcPath);
typedef void (APIENTRYP PFNGLINTERPOLATEPATHSNVPROC) (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
typedef void (APIENTRYP PFNGLTRANSFORMPATHNVPROC) (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues);
typedef void (APIENTRYP PFNGLPATHPARAMETERIVNVPROC) (GLuint path, GLenum pname, const GLint *value);
typedef void (APIENTRYP PFNGLPATHPARAMETERINVPROC) (GLuint path, GLenum pname, GLint value);
typedef void (APIENTRYP PFNGLPATHPARAMETERFVNVPROC) (GLuint path, GLenum pname, const GLfloat *value);
typedef void (APIENTRYP PFNGLPATHPARAMETERFNVPROC) (GLuint path, GLenum pname, GLfloat value);
typedef void (APIENTRYP PFNGLPATHDASHARRAYNVPROC) (GLuint path, GLsizei dashCount, const GLfloat *dashArray);
typedef void (APIENTRYP PFNGLPATHSTENCILFUNCNVPROC) (GLenum func, GLint ref, GLuint mask);
typedef void (APIENTRYP PFNGLPATHSTENCILDEPTHOFFSETNVPROC) (GLfloat factor, GLfloat units);
typedef void (APIENTRYP PFNGLSTENCILFILLPATHNVPROC) (GLuint path, GLenum fillMode, GLuint mask);
typedef void (APIENTRYP PFNGLSTENCILSTROKEPATHNVPROC) (GLuint path, GLint reference, GLuint mask);
typedef void (APIENTRYP PFNGLSTENCILFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
typedef void (APIENTRYP PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
typedef void (APIENTRYP PFNGLPATHCOVERDEPTHFUNCNVPROC) (GLenum func);
typedef void (APIENTRYP PFNGLCOVERFILLPATHNVPROC) (GLuint path, GLenum coverMode);
typedef void (APIENTRYP PFNGLCOVERSTROKEPATHNVPROC) (GLuint path, GLenum coverMode);
typedef void (APIENTRYP PFNGLCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef void (APIENTRYP PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef void (APIENTRYP PFNGLGETPATHPARAMETERIVNVPROC) (GLuint path, GLenum pname, GLint *value);
typedef void (APIENTRYP PFNGLGETPATHPARAMETERFVNVPROC) (GLuint path, GLenum pname, GLfloat *value);
typedef void (APIENTRYP PFNGLGETPATHCOMMANDSNVPROC) (GLuint path, GLubyte *commands);
typedef void (APIENTRYP PFNGLGETPATHCOORDSNVPROC) (GLuint path, GLfloat *coords);
typedef void (APIENTRYP PFNGLGETPATHDASHARRAYNVPROC) (GLuint path, GLfloat *dashArray);
typedef void (APIENTRYP PFNGLGETPATHMETRICSNVPROC) (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
typedef void (APIENTRYP PFNGLGETPATHMETRICRANGENVPROC) (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
typedef void (APIENTRYP PFNGLGETPATHSPACINGNVPROC) (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
typedef GLboolean (APIENTRYP PFNGLISPOINTINFILLPATHNVPROC) (GLuint path, GLuint mask, GLfloat x, GLfloat y);
typedef GLboolean (APIENTRYP PFNGLISPOINTINSTROKEPATHNVPROC) (GLuint path, GLfloat x, GLfloat y);
typedef GLfloat (APIENTRYP PFNGLGETPATHLENGTHNVPROC) (GLuint path, GLsizei startSegment, GLsizei numSegments);
typedef GLboolean (APIENTRYP PFNGLPOINTALONGPATHNVPROC) (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
typedef void (APIENTRYP PFNGLMATRIXLOAD3X2FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXLOAD3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXMULT3X2FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXMULT3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
typedef void (APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHNVPROC) (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
typedef void (APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
typedef void (APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef void (APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
typedef GLenum (APIENTRYP PFNGLPATHGLYPHINDEXRANGENVPROC) (GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
typedef GLenum (APIENTRYP PFNGLPATHGLYPHINDEXARRAYNVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef GLenum (APIENTRYP PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (APIENTRYP PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCEFVNVPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLfloat *params);
extern PFNGLGENPATHSNVPROC glGenPathsNV;
extern PFNGLDELETEPATHSNVPROC glDeletePathsNV;
extern PFNGLISPATHNVPROC glIsPathNV;
extern PFNGLPATHCOMMANDSNVPROC glPathCommandsNV;
extern PFNGLPATHCOORDSNVPROC glPathCoordsNV;
extern PFNGLPATHSUBCOMMANDSNVPROC glPathSubCommandsNV;
extern PFNGLPATHSUBCOORDSNVPROC glPathSubCoordsNV;
extern PFNGLPATHSTRINGNVPROC glPathStringNV;
extern PFNGLPATHGLYPHSNVPROC glPathGlyphsNV;
extern PFNGLPATHGLYPHRANGENVPROC glPathGlyphRangeNV;
extern PFNGLWEIGHTPATHSNVPROC glWeightPathsNV;
extern PFNGLCOPYPATHNVPROC glCopyPathNV;
extern PFNGLINTERPOLATEPATHSNVPROC glInterpolatePathsNV;
extern PFNGLTRANSFORMPATHNVPROC glTransformPathNV;
extern PFNGLPATHPARAMETERIVNVPROC glPathParameterivNV;
extern PFNGLPATHPARAMETERINVPROC glPathParameteriNV;
extern PFNGLPATHPARAMETERFVNVPROC glPathParameterfvNV;
extern PFNGLPATHPARAMETERFNVPROC glPathParameterfNV;
extern PFNGLPATHDASHARRAYNVPROC glPathDashArrayNV;
extern PFNGLPATHSTENCILFUNCNVPROC glPathStencilFuncNV;
extern PFNGLPATHSTENCILDEPTHOFFSETNVPROC glPathStencilDepthOffsetNV;
extern PFNGLSTENCILFILLPATHNVPROC glStencilFillPathNV;
extern PFNGLSTENCILSTROKEPATHNVPROC glStencilStrokePathNV;
extern PFNGLSTENCILFILLPATHINSTANCEDNVPROC glStencilFillPathInstancedNV;
extern PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glStencilStrokePathInstancedNV;
extern PFNGLPATHCOVERDEPTHFUNCNVPROC glPathCoverDepthFuncNV;
extern PFNGLCOVERFILLPATHNVPROC glCoverFillPathNV;
extern PFNGLCOVERSTROKEPATHNVPROC glCoverStrokePathNV;
extern PFNGLCOVERFILLPATHINSTANCEDNVPROC glCoverFillPathInstancedNV;
extern PFNGLCOVERSTROKEPATHINSTANCEDNVPROC glCoverStrokePathInstancedNV;
extern PFNGLGETPATHPARAMETERIVNVPROC glGetPathParameterivNV;
extern PFNGLGETPATHPARAMETERFVNVPROC glGetPathParameterfvNV;
extern PFNGLGETPATHCOMMANDSNVPROC glGetPathCommandsNV;
extern PFNGLGETPATHCOORDSNVPROC glGetPathCoordsNV;
extern PFNGLGETPATHDASHARRAYNVPROC glGetPathDashArrayNV;
extern PFNGLGETPATHMETRICSNVPROC glGetPathMetricsNV;
extern PFNGLGETPATHMETRICRANGENVPROC glGetPathMetricRangeNV;
extern PFNGLGETPATHSPACINGNVPROC glGetPathSpacingNV;
extern PFNGLISPOINTINFILLPATHNVPROC glIsPointInFillPathNV;
extern PFNGLISPOINTINSTROKEPATHNVPROC glIsPointInStrokePathNV;
extern PFNGLGETPATHLENGTHNVPROC glGetPathLengthNV;
extern PFNGLPOINTALONGPATHNVPROC glPointAlongPathNV;
extern PFNGLMATRIXLOAD3X2FNVPROC glMatrixLoad3x2fNV;
extern PFNGLMATRIXLOAD3X3FNVPROC glMatrixLoad3x3fNV;
extern PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC glMatrixLoadTranspose3x3fNV;
extern PFNGLMATRIXMULT3X2FNVPROC glMatrixMult3x2fNV;
extern PFNGLMATRIXMULT3X3FNVPROC glMatrixMult3x3fNV;
extern PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC glMatrixMultTranspose3x3fNV;
extern PFNGLSTENCILTHENCOVERFILLPATHNVPROC glStencilThenCoverFillPathNV;
extern PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC glStencilThenCoverStrokePathNV;
extern PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC glStencilThenCoverFillPathInstancedNV;
extern PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glStencilThenCoverStrokePathInstancedNV;
extern PFNGLPATHGLYPHINDEXRANGENVPROC glPathGlyphIndexRangeNV;
extern PFNGLPATHGLYPHINDEXARRAYNVPROC glPathGlyphIndexArrayNV;
extern PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC glPathMemoryGlyphIndexArrayNV;
extern PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glProgramPathFragmentInputGenNV;
extern PFNGLGETPROGRAMRESOURCEFVNVPROC glGetProgramResourcefvNV;
#endif /* SOGL_NV_path_rendering */

#ifdef SOGL_NV_path_rendering_shared_edge
#define GL_SHARED_EDGE_NV                 0xC0
#endif /* SOGL_NV_path_rendering_shared_edge */

#ifdef SOGL_NV_primitive_shading_rate
#define GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV 0x95B1
#define GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV 0x95B2
#endif /* SOGL_NV_primitive_shading_rate */

#ifdef SOGL_NV_representative_fragment_test
#define GL_REPRESENTATIVE_FRAGMENT_TEST_NV 0x937F
#endif /* SOGL_NV_representative_fragment_test */

#ifdef SOGL_NV_sample_locations
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV             0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343
typedef void (APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLenum target, GLuint start, GLsizei count, const GLfloat *v);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
typedef void (APIENTRYP PFNGLRESOLVEDEPTHVALUESNVPROC) (void);
extern PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glFramebufferSampleLocationsfvNV;
extern PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glNamedFramebufferSampleLocationsfvNV;
extern PFNGLRESOLVEDEPTHVALUESNVPROC glResolveDepthValuesNV;
#endif /* SOGL_NV_sample_locations */

#ifdef SOGL_NV_scissor_exclusive
#define GL_SCISSOR_TEST_EXCLUSIVE_NV      0x9555
#define GL_SCISSOR_BOX_EXCLUSIVE_NV       0x9556
typedef void (APIENTRYP PFNGLSCISSOREXCLUSIVENVPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) (GLuint first, GLsizei count, const GLint *v);
extern PFNGLSCISSOREXCLUSIVENVPROC glScissorExclusiveNV;
extern PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glScissorExclusiveArrayvNV;
#endif /* SOGL_NV_scissor_exclusive */

#ifdef SOGL_NV_shader_buffer_load
#define GL_BUFFER_GPU_ADDRESS_NV          0x8F1D
#define GL_GPU_ADDRESS_NV                 0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV   0x8F35
typedef void (APIENTRYP PFNGLMAKEBUFFERRESIDENTNVPROC) (GLenum target, GLenum access);
typedef void (APIENTRYP PFNGLMAKEBUFFERNONRESIDENTNVPROC) (GLenum target);
typedef GLboolean (APIENTRYP PFNGLISBUFFERRESIDENTNVPROC) (GLenum target);
typedef void (APIENTRYP PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) (GLuint buffer, GLenum access);
typedef void (APIENTRYP PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) (GLuint buffer);
typedef GLboolean (APIENTRYP PFNGLISNAMEDBUFFERRESIDENTNVPROC) (GLuint buffer);
typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERUI64VNVPROC) (GLenum target, GLenum pname, GLuint64EXT *params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) (GLuint buffer, GLenum pname, GLuint64EXT *params);
typedef void (APIENTRYP PFNGLGETINTEGERUI64VNVPROC) (GLenum value, GLuint64EXT *result);
typedef void (APIENTRYP PFNGLUNIFORMUI64NVPROC) (GLint location, GLuint64EXT value);
typedef void (APIENTRYP PFNGLUNIFORMUI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
typedef void (APIENTRYP PFNGLGETUNIFORMUI64VNVPROC) (GLuint program, GLint location, GLuint64EXT *params);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMUI64NVPROC) (GLuint program, GLint location, GLuint64EXT value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMUI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern PFNGLMAKEBUFFERRESIDENTNVPROC glMakeBufferResidentNV;
extern PFNGLMAKEBUFFERNONRESIDENTNVPROC glMakeBufferNonResidentNV;
extern PFNGLISBUFFERRESIDENTNVPROC glIsBufferResidentNV;
extern PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glMakeNamedBufferResidentNV;
extern PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glMakeNamedBufferNonResidentNV;
extern PFNGLISNAMEDBUFFERRESIDENTNVPROC glIsNamedBufferResidentNV;
extern PFNGLGETBUFFERPARAMETERUI64VNVPROC glGetBufferParameterui64vNV;
extern PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glGetNamedBufferParameterui64vNV;
extern PFNGLGETINTEGERUI64VNVPROC glGetIntegerui64vNV;
extern PFNGLUNIFORMUI64NVPROC glUniformui64NV;
extern PFNGLUNIFORMUI64VNVPROC glUniformui64vNV;
extern PFNGLGETUNIFORMUI64VNVPROC glGetUniformui64vNV;
extern PFNGLPROGRAMUNIFORMUI64NVPROC glProgramUniformui64NV;
extern PFNGLPROGRAMUNIFORMUI64VNVPROC glProgramUniformui64vNV;
#endif /* SOGL_NV_shader_buffer_load */

#ifdef SOGL_NV_shader_buffer_store
#define GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV 0x00000010
#endif /* SOGL_NV_shader_buffer_store */

#ifdef SOGL_NV_shader_subgroup_partitioned
#define GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV 0x00000100
#endif /* SOGL_NV_shader_subgroup_partitioned */

#ifdef SOGL_NV_shader_thread_group
#define GL_WARP_SIZE_NV                   0x9339
#define GL_WARPS_PER_SM_NV                0x933A
#define GL_SM_COUNT_NV                    0x933B
#endif /* SOGL_NV_shader_thread_group */

#ifdef SOGL_NV_shading_rate_image
#define GL_SHADING_RATE_IMAGE_NV          0x9563
#define GL_SHADING_RATE_NO_INVOCATIONS_NV 0x9564
#define GL_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV 0x9565
#define GL_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV 0x9566
#define GL_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV 0x9567
#define GL_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV 0x9568
#define GL_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV 0x9569
#define GL_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV 0x956A
#define GL_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV 0x956B
#define GL_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV 0x956C
#define GL_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV 0x956D
#define GL_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV 0x956E
#define GL_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV 0x956F
#define GL_SHADING_RATE_IMAGE_BINDING_NV  0x955B
#define GL_SHADING_RATE_IMAGE_TEXEL_WIDTH_NV 0x955C
#define GL_SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV 0x955D
#define GL_SHADING_RATE_IMAGE_PALETTE_SIZE_NV 0x955E
#define GL_MAX_COARSE_FRAGMENT_SAMPLES_NV 0x955F
#define GL_SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV 0x95AE
#define GL_SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV 0x95AF
#define GL_SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV 0x95B0
typedef void (APIENTRYP PFNGLBINDSHADINGRATEIMAGENVPROC) (GLuint texture);
typedef void (APIENTRYP PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) (GLuint viewport, GLuint entry, GLenum *rate);
typedef void (APIENTRYP PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) (GLenum rate, GLuint samples, GLuint index, GLint *location);
typedef void (APIENTRYP PFNGLSHADINGRATEIMAGEBARRIERNVPROC) (GLboolean synchronize);
typedef void (APIENTRYP PFNGLSHADINGRATEIMAGEPALETTENVPROC) (GLuint viewport, GLuint first, GLsizei count, const GLenum *rates);
typedef void (APIENTRYP PFNGLSHADINGRATESAMPLEORDERNVPROC) (GLenum order);
typedef void (APIENTRYP PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) (GLenum rate, GLuint samples, const GLint *locations);
extern PFNGLBINDSHADINGRATEIMAGENVPROC glBindShadingRateImageNV;
extern PFNGLGETSHADINGRATEIMAGEPALETTENVPROC glGetShadingRateImagePaletteNV;
extern PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC glGetShadingRateSampleLocationivNV;
extern PFNGLSHADINGRATEIMAGEBARRIERNVPROC glShadingRateImageBarrierNV;
extern PFNGLSHADINGRATEIMAGEPALETTENVPROC glShadingRateImagePaletteNV;
extern PFNGLSHADINGRATESAMPLEORDERNVPROC glShadingRateSampleOrderNV;
extern PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC glShadingRateSampleOrderCustomNV;
#endif /* SOGL_NV_shading_rate_image */

#ifdef SOGL_NV_texture_barrier
typedef void (APIENTRYP PFNGLTEXTUREBARRIERNVPROC) (void);
extern PFNGLTEXTUREBARRIERNVPROC glTextureBarrierNV;
#endif /* SOGL_NV_texture_barrier */

#ifdef SOGL_NV_uniform_buffer_unified_memory
#define GL_UNIFORM_BUFFER_UNIFIED_NV      0x936E
#define GL_UNIFORM_BUFFER_ADDRESS_NV      0x936F
#define GL_UNIFORM_BUFFER_LENGTH_NV       0x9370
#endif /* SOGL_NV_uniform_buffer_unified_memory */

#ifdef SOGL_NV_vertex_attrib_integer_64bit
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1I64NVPROC) (GLuint index, GLint64EXT x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1I64VNVPROC) (GLuint index, const GLint64EXT *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2I64VNVPROC) (GLuint index, const GLint64EXT *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3I64VNVPROC) (GLuint index, const GLint64EXT *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4I64VNVPROC) (GLuint index, const GLint64EXT *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64NVPROC) (GLuint index, GLuint64EXT x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLI64VNVPROC) (GLuint index, GLenum pname, GLint64EXT *params);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLUI64VNVPROC) (GLuint index, GLenum pname, GLuint64EXT *params);
typedef void (APIENTRYP PFNGLVERTEXATTRIBLFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLsizei stride);
extern PFNGLVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV;
extern PFNGLVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV;
extern PFNGLVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV;
extern PFNGLVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV;
extern PFNGLVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV;
extern PFNGLVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV;
extern PFNGLVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV;
extern PFNGLVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV;
extern PFNGLVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV;
extern PFNGLVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV;
extern PFNGLVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV;
extern PFNGLVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV;
extern PFNGLVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV;
extern PFNGLVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV;
extern PFNGLVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV;
extern PFNGLVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV;
extern PFNGLGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV;
extern PFNGLGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV;
extern PFNGLVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV;
#endif /* SOGL_NV_vertex_attrib_integer_64bit */

#ifdef SOGL_NV_vertex_buffer_unified_memory
#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV 0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV       0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV 0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV        0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV        0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV         0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV         0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV 0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV     0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV 0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV     0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV       0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV  0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV         0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV         0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV          0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV          0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV  0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV      0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV 0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV      0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV        0x8F33
#define GL_DRAW_INDIRECT_UNIFIED_NV       0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV       0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV        0x8F42
typedef void (APIENTRYP PFNGLBUFFERADDRESSRANGENVPROC) (GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
typedef void (APIENTRYP PFNGLVERTEXFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLNORMALFORMATNVPROC) (GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLCOLORFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLINDEXFORMATNVPROC) (GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLTEXCOORDFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLEDGEFLAGFORMATNVPROC) (GLsizei stride);
typedef void (APIENTRYP PFNGLSECONDARYCOLORFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLFOGCOORDFORMATNVPROC) (GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLVERTEXATTRIBFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
typedef void (APIENTRYP PFNGLVERTEXATTRIBIFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRYP PFNGLGETINTEGERUI64I_VNVPROC) (GLenum value, GLuint index, GLuint64EXT *result);
extern PFNGLBUFFERADDRESSRANGENVPROC glBufferAddressRangeNV;
extern PFNGLVERTEXFORMATNVPROC glVertexFormatNV;
extern PFNGLNORMALFORMATNVPROC glNormalFormatNV;
extern PFNGLCOLORFORMATNVPROC glColorFormatNV;
extern PFNGLINDEXFORMATNVPROC glIndexFormatNV;
extern PFNGLTEXCOORDFORMATNVPROC glTexCoordFormatNV;
extern PFNGLEDGEFLAGFORMATNVPROC glEdgeFlagFormatNV;
extern PFNGLSECONDARYCOLORFORMATNVPROC glSecondaryColorFormatNV;
extern PFNGLFOGCOORDFORMATNVPROC glFogCoordFormatNV;
extern PFNGLVERTEXATTRIBFORMATNVPROC glVertexAttribFormatNV;
extern PFNGLVERTEXATTRIBIFORMATNVPROC glVertexAttribIFormatNV;
extern PFNGLGETINTEGERUI64I_VNVPROC glGetIntegerui64i_vNV;
#endif /* SOGL_NV_vertex_buffer_unified_memory */

#ifdef SOGL_NV_viewport_swizzle
#define GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV 0x9350
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV 0x9351
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV 0x9352
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV 0x9353
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV 0x9354
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV 0x9355
#define GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV 0x9356
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV 0x9357
#define GL_VIEWPORT_SWIZZLE_X_NV          0x9358
#define GL_VIEWPORT_SWIZZLE_Y_NV          0x9359
#define GL_VIEWPORT_SWIZZLE_Z_NV          0x935A
#define GL_VIEWPORT_SWIZZLE_W_NV          0x935B
typedef void (APIENTRYP PFNGLVIEWPORTSWIZZLENVPROC) (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
extern PFNGLVIEWPORTSWIZZLENVPROC glViewportSwizzleNV;
#endif /* SOGL_NV_viewport_swizzle */

#ifdef SOGL_OVR_multiview
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR                  0x9631
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR 0x9633
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
extern PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glFramebufferTextureMultiviewOVR;
#endif /* SOGL_OVR_multiview */

/* IMPLEMENTATION */

#ifdef SOGL_IMPLEMENTATION

#define SOGL_NULL ((void *)0)

#if SOGL_TEST_VERSION(1, 0)
PFNGLCULLFACEPROC glCullFace = SOGL_NULL;
PFNGLFRONTFACEPROC glFrontFace = SOGL_NULL;
PFNGLHINTPROC glHint = SOGL_NULL;
PFNGLLINEWIDTHPROC glLineWidth = SOGL_NULL;
PFNGLPOINTSIZEPROC glPointSize = SOGL_NULL;
PFNGLPOLYGONMODEPROC glPolygonMode = SOGL_NULL;
PFNGLSCISSORPROC glScissor = SOGL_NULL;
PFNGLTEXPARAMETERFPROC glTexParameterf = SOGL_NULL;
PFNGLTEXPARAMETERFVPROC glTexParameterfv = SOGL_NULL;
PFNGLTEXPARAMETERIPROC glTexParameteri = SOGL_NULL;
PFNGLTEXPARAMETERIVPROC glTexParameteriv = SOGL_NULL;
PFNGLTEXIMAGE1DPROC glTexImage1D = SOGL_NULL;
PFNGLTEXIMAGE2DPROC glTexImage2D = SOGL_NULL;
PFNGLDRAWBUFFERPROC glDrawBuffer = SOGL_NULL;
PFNGLCLEARPROC glClear = SOGL_NULL;
PFNGLCLEARCOLORPROC glClearColor = SOGL_NULL;
PFNGLCLEARSTENCILPROC glClearStencil = SOGL_NULL;
PFNGLCLEARDEPTHPROC glClearDepth = SOGL_NULL;
PFNGLSTENCILMASKPROC glStencilMask = SOGL_NULL;
PFNGLCOLORMASKPROC glColorMask = SOGL_NULL;
PFNGLDEPTHMASKPROC glDepthMask = SOGL_NULL;
PFNGLDISABLEPROC glDisable = SOGL_NULL;
PFNGLENABLEPROC glEnable = SOGL_NULL;
PFNGLFINISHPROC glFinish = SOGL_NULL;
PFNGLFLUSHPROC glFlush = SOGL_NULL;
PFNGLBLENDFUNCPROC glBlendFunc = SOGL_NULL;
PFNGLLOGICOPPROC glLogicOp = SOGL_NULL;
PFNGLSTENCILFUNCPROC glStencilFunc = SOGL_NULL;
PFNGLSTENCILOPPROC glStencilOp = SOGL_NULL;
PFNGLDEPTHFUNCPROC glDepthFunc = SOGL_NULL;
PFNGLPIXELSTOREFPROC glPixelStoref = SOGL_NULL;
PFNGLPIXELSTOREIPROC glPixelStorei = SOGL_NULL;
PFNGLREADBUFFERPROC glReadBuffer = SOGL_NULL;
PFNGLREADPIXELSPROC glReadPixels = SOGL_NULL;
PFNGLGETBOOLEANVPROC glGetBooleanv = SOGL_NULL;
PFNGLGETDOUBLEVPROC glGetDoublev = SOGL_NULL;
PFNGLGETERRORPROC glGetError = SOGL_NULL;
PFNGLGETFLOATVPROC glGetFloatv = SOGL_NULL;
PFNGLGETINTEGERVPROC glGetIntegerv = SOGL_NULL;
PFNGLGETSTRINGPROC glGetString = SOGL_NULL;
PFNGLGETTEXIMAGEPROC glGetTexImage = SOGL_NULL;
PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv = SOGL_NULL;
PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv = SOGL_NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv = SOGL_NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv = SOGL_NULL;
PFNGLISENABLEDPROC glIsEnabled = SOGL_NULL;
PFNGLDEPTHRANGEPROC glDepthRange = SOGL_NULL;
PFNGLVIEWPORTPROC glViewport = SOGL_NULL;
#endif /* GL_VERSION_1_0 */

#if SOGL_TEST_VERSION(1, 1)
PFNGLDRAWARRAYSPROC glDrawArrays = SOGL_NULL;
PFNGLDRAWELEMENTSPROC glDrawElements = SOGL_NULL;
PFNGLGETPOINTERVPROC glGetPointerv = SOGL_NULL;
PFNGLPOLYGONOFFSETPROC glPolygonOffset = SOGL_NULL;
PFNGLCOPYTEXIMAGE1DPROC glCopyTexImage1D = SOGL_NULL;
PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D = SOGL_NULL;
PFNGLCOPYTEXSUBIMAGE1DPROC glCopyTexSubImage1D = SOGL_NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D = SOGL_NULL;
PFNGLTEXSUBIMAGE1DPROC glTexSubImage1D = SOGL_NULL;
PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D = SOGL_NULL;
PFNGLBINDTEXTUREPROC glBindTexture = SOGL_NULL;
PFNGLDELETETEXTURESPROC glDeleteTextures = SOGL_NULL;
PFNGLGENTEXTURESPROC glGenTextures = SOGL_NULL;
PFNGLISTEXTUREPROC glIsTexture = SOGL_NULL;
#endif /* GL_VERSION_1_1 */

#if SOGL_TEST_VERSION(1, 2)
PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements = SOGL_NULL;
PFNGLTEXIMAGE3DPROC glTexImage3D = SOGL_NULL;
PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D = SOGL_NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D = SOGL_NULL;
#endif /* GL_VERSION_1_2 */

#if SOGL_TEST_VERSION(1, 3)
PFNGLACTIVETEXTUREPROC glActiveTexture = SOGL_NULL;
PFNGLSAMPLECOVERAGEPROC glSampleCoverage = SOGL_NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D = SOGL_NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D = SOGL_NULL;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D = SOGL_NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D = SOGL_NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D = SOGL_NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D = SOGL_NULL;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage = SOGL_NULL;
#endif /* GL_VERSION_1_3 */

#if SOGL_TEST_VERSION(1, 4)
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = SOGL_NULL;
PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays = SOGL_NULL;
PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements = SOGL_NULL;
PFNGLPOINTPARAMETERFPROC glPointParameterf = SOGL_NULL;
PFNGLPOINTPARAMETERFVPROC glPointParameterfv = SOGL_NULL;
PFNGLPOINTPARAMETERIPROC glPointParameteri = SOGL_NULL;
PFNGLPOINTPARAMETERIVPROC glPointParameteriv = SOGL_NULL;
PFNGLBLENDCOLORPROC glBlendColor = SOGL_NULL;
PFNGLBLENDEQUATIONPROC glBlendEquation = SOGL_NULL;
#endif /* GL_VERSION_1_4 */

#if SOGL_TEST_VERSION(1, 5)
PFNGLGENQUERIESPROC glGenQueries = SOGL_NULL;
PFNGLDELETEQUERIESPROC glDeleteQueries = SOGL_NULL;
PFNGLISQUERYPROC glIsQuery = SOGL_NULL;
PFNGLBEGINQUERYPROC glBeginQuery = SOGL_NULL;
PFNGLENDQUERYPROC glEndQuery = SOGL_NULL;
PFNGLGETQUERYIVPROC glGetQueryiv = SOGL_NULL;
PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv = SOGL_NULL;
PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv = SOGL_NULL;
PFNGLBINDBUFFERPROC glBindBuffer = SOGL_NULL;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = SOGL_NULL;
PFNGLGENBUFFERSPROC glGenBuffers = SOGL_NULL;
PFNGLISBUFFERPROC glIsBuffer = SOGL_NULL;
PFNGLBUFFERDATAPROC glBufferData = SOGL_NULL;
PFNGLBUFFERSUBDATAPROC glBufferSubData = SOGL_NULL;
PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = SOGL_NULL;
PFNGLMAPBUFFERPROC glMapBuffer = SOGL_NULL;
PFNGLUNMAPBUFFERPROC glUnmapBuffer = SOGL_NULL;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = SOGL_NULL;
PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = SOGL_NULL;
#endif /* GL_VERSION_1_5 */

#if SOGL_TEST_VERSION(2, 0)
PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = SOGL_NULL;
PFNGLDRAWBUFFERSPROC glDrawBuffers = SOGL_NULL;
PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate = SOGL_NULL;
PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate = SOGL_NULL;
PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate = SOGL_NULL;
PFNGLATTACHSHADERPROC glAttachShader = SOGL_NULL;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = SOGL_NULL;
PFNGLCOMPILESHADERPROC glCompileShader = SOGL_NULL;
PFNGLCREATEPROGRAMPROC glCreateProgram = SOGL_NULL;
PFNGLCREATESHADERPROC glCreateShader = SOGL_NULL;
PFNGLDELETEPROGRAMPROC glDeleteProgram = SOGL_NULL;
PFNGLDELETESHADERPROC glDeleteShader = SOGL_NULL;
PFNGLDETACHSHADERPROC glDetachShader = SOGL_NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = SOGL_NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = SOGL_NULL;
PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib = SOGL_NULL;
PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform = SOGL_NULL;
PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = SOGL_NULL;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = SOGL_NULL;
PFNGLGETPROGRAMIVPROC glGetProgramiv = SOGL_NULL;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = SOGL_NULL;
PFNGLGETSHADERIVPROC glGetShaderiv = SOGL_NULL;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = SOGL_NULL;
PFNGLGETSHADERSOURCEPROC glGetShaderSource = SOGL_NULL;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = SOGL_NULL;
PFNGLGETUNIFORMFVPROC glGetUniformfv = SOGL_NULL;
PFNGLGETUNIFORMIVPROC glGetUniformiv = SOGL_NULL;
PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv = SOGL_NULL;
PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv = SOGL_NULL;
PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv = SOGL_NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv = SOGL_NULL;
PFNGLISPROGRAMPROC glIsProgram = SOGL_NULL;
PFNGLISSHADERPROC glIsShader = SOGL_NULL;
PFNGLLINKPROGRAMPROC glLinkProgram = SOGL_NULL;
PFNGLSHADERSOURCEPROC glShaderSource = SOGL_NULL;
PFNGLUSEPROGRAMPROC glUseProgram = SOGL_NULL;
PFNGLUNIFORM1FPROC glUniform1f = SOGL_NULL;
PFNGLUNIFORM2FPROC glUniform2f = SOGL_NULL;
PFNGLUNIFORM3FPROC glUniform3f = SOGL_NULL;
PFNGLUNIFORM4FPROC glUniform4f = SOGL_NULL;
PFNGLUNIFORM1IPROC glUniform1i = SOGL_NULL;
PFNGLUNIFORM2IPROC glUniform2i = SOGL_NULL;
PFNGLUNIFORM3IPROC glUniform3i = SOGL_NULL;
PFNGLUNIFORM4IPROC glUniform4i = SOGL_NULL;
PFNGLUNIFORM1FVPROC glUniform1fv = SOGL_NULL;
PFNGLUNIFORM2FVPROC glUniform2fv = SOGL_NULL;
PFNGLUNIFORM3FVPROC glUniform3fv = SOGL_NULL;
PFNGLUNIFORM4FVPROC glUniform4fv = SOGL_NULL;
PFNGLUNIFORM1IVPROC glUniform1iv = SOGL_NULL;
PFNGLUNIFORM2IVPROC glUniform2iv = SOGL_NULL;
PFNGLUNIFORM3IVPROC glUniform3iv = SOGL_NULL;
PFNGLUNIFORM4IVPROC glUniform4iv = SOGL_NULL;
PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = SOGL_NULL;
PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = SOGL_NULL;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = SOGL_NULL;
PFNGLVALIDATEPROGRAMPROC glValidateProgram = SOGL_NULL;
PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d = SOGL_NULL;
PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv = SOGL_NULL;
PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f = SOGL_NULL;
PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv = SOGL_NULL;
PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s = SOGL_NULL;
PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv = SOGL_NULL;
PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d = SOGL_NULL;
PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv = SOGL_NULL;
PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f = SOGL_NULL;
PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv = SOGL_NULL;
PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s = SOGL_NULL;
PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv = SOGL_NULL;
PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d = SOGL_NULL;
PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv = SOGL_NULL;
PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f = SOGL_NULL;
PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv = SOGL_NULL;
PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s = SOGL_NULL;
PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv = SOGL_NULL;
PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv = SOGL_NULL;
PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv = SOGL_NULL;
PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv = SOGL_NULL;
PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub = SOGL_NULL;
PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv = SOGL_NULL;
PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv = SOGL_NULL;
PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv = SOGL_NULL;
PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv = SOGL_NULL;
PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d = SOGL_NULL;
PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv = SOGL_NULL;
PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f = SOGL_NULL;
PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv = SOGL_NULL;
PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv = SOGL_NULL;
PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s = SOGL_NULL;
PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv = SOGL_NULL;
PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv = SOGL_NULL;
PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv = SOGL_NULL;
PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv = SOGL_NULL;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = SOGL_NULL;
#endif /* GL_VERSION_2_0 */

#if SOGL_TEST_VERSION(2, 1)
PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv = SOGL_NULL;
PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv = SOGL_NULL;
PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv = SOGL_NULL;
PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv = SOGL_NULL;
PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv = SOGL_NULL;
PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv = SOGL_NULL;
#endif /* GL_VERSION_2_1 */

#if SOGL_TEST_VERSION(3, 0)
PFNGLCOLORMASKIPROC glColorMaski = SOGL_NULL;
PFNGLGETBOOLEANI_VPROC glGetBooleani_v = SOGL_NULL;
PFNGLGETINTEGERI_VPROC glGetIntegeri_v = SOGL_NULL;
PFNGLENABLEIPROC glEnablei = SOGL_NULL;
PFNGLDISABLEIPROC glDisablei = SOGL_NULL;
PFNGLISENABLEDIPROC glIsEnabledi = SOGL_NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback = SOGL_NULL;
PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback = SOGL_NULL;
PFNGLBINDBUFFERRANGEPROC glBindBufferRange = SOGL_NULL;
PFNGLBINDBUFFERBASEPROC glBindBufferBase = SOGL_NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings = SOGL_NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying = SOGL_NULL;
PFNGLCLAMPCOLORPROC glClampColor = SOGL_NULL;
PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender = SOGL_NULL;
PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender = SOGL_NULL;
PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer = SOGL_NULL;
PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv = SOGL_NULL;
PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv = SOGL_NULL;
PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i = SOGL_NULL;
PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i = SOGL_NULL;
PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i = SOGL_NULL;
PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i = SOGL_NULL;
PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui = SOGL_NULL;
PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui = SOGL_NULL;
PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui = SOGL_NULL;
PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui = SOGL_NULL;
PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv = SOGL_NULL;
PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv = SOGL_NULL;
PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv = SOGL_NULL;
PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv = SOGL_NULL;
PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv = SOGL_NULL;
PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv = SOGL_NULL;
PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv = SOGL_NULL;
PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv = SOGL_NULL;
PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv = SOGL_NULL;
PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv = SOGL_NULL;
PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv = SOGL_NULL;
PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv = SOGL_NULL;
PFNGLGETUNIFORMUIVPROC glGetUniformuiv = SOGL_NULL;
PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation = SOGL_NULL;
PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation = SOGL_NULL;
PFNGLUNIFORM1UIPROC glUniform1ui = SOGL_NULL;
PFNGLUNIFORM2UIPROC glUniform2ui = SOGL_NULL;
PFNGLUNIFORM3UIPROC glUniform3ui = SOGL_NULL;
PFNGLUNIFORM4UIPROC glUniform4ui = SOGL_NULL;
PFNGLUNIFORM1UIVPROC glUniform1uiv = SOGL_NULL;
PFNGLUNIFORM2UIVPROC glUniform2uiv = SOGL_NULL;
PFNGLUNIFORM3UIVPROC glUniform3uiv = SOGL_NULL;
PFNGLUNIFORM4UIVPROC glUniform4uiv = SOGL_NULL;
PFNGLTEXPARAMETERIIVPROC glTexParameterIiv = SOGL_NULL;
PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv = SOGL_NULL;
PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv = SOGL_NULL;
PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv = SOGL_NULL;
PFNGLCLEARBUFFERIVPROC glClearBufferiv = SOGL_NULL;
PFNGLCLEARBUFFERUIVPROC glClearBufferuiv = SOGL_NULL;
PFNGLCLEARBUFFERFVPROC glClearBufferfv = SOGL_NULL;
PFNGLCLEARBUFFERFIPROC glClearBufferfi = SOGL_NULL;
PFNGLGETSTRINGIPROC glGetStringi = SOGL_NULL;
PFNGLISRENDERBUFFERPROC glIsRenderbuffer = SOGL_NULL;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = SOGL_NULL;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = SOGL_NULL;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = SOGL_NULL;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = SOGL_NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv = SOGL_NULL;
PFNGLISFRAMEBUFFERPROC glIsFramebuffer = SOGL_NULL;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = SOGL_NULL;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = SOGL_NULL;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = SOGL_NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D = SOGL_NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = SOGL_NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = SOGL_NULL;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap = SOGL_NULL;
PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer = SOGL_NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer = SOGL_NULL;
PFNGLMAPBUFFERRANGEPROC glMapBufferRange = SOGL_NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange = SOGL_NULL;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray = SOGL_NULL;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = SOGL_NULL;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = SOGL_NULL;
PFNGLISVERTEXARRAYPROC glIsVertexArray = SOGL_NULL;
#endif /* GL_VERSION_3_0 */

#if SOGL_TEST_VERSION(3, 1)
PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced = SOGL_NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced = SOGL_NULL;
PFNGLTEXBUFFERPROC glTexBuffer = SOGL_NULL;
PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex = SOGL_NULL;
PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData = SOGL_NULL;
PFNGLGETUNIFORMINDICESPROC glGetUniformIndices = SOGL_NULL;
PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv = SOGL_NULL;
PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName = SOGL_NULL;
PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex = SOGL_NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv = SOGL_NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName = SOGL_NULL;
PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding = SOGL_NULL;
#endif /* GL_VERSION_3_1 */

#if SOGL_TEST_VERSION(3, 2)
PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex = SOGL_NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex = SOGL_NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex = SOGL_NULL;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex = SOGL_NULL;
PFNGLPROVOKINGVERTEXPROC glProvokingVertex = SOGL_NULL;
PFNGLFENCESYNCPROC glFenceSync = SOGL_NULL;
PFNGLISSYNCPROC glIsSync = SOGL_NULL;
PFNGLDELETESYNCPROC glDeleteSync = SOGL_NULL;
PFNGLCLIENTWAITSYNCPROC glClientWaitSync = SOGL_NULL;
PFNGLWAITSYNCPROC glWaitSync = SOGL_NULL;
PFNGLGETINTEGER64VPROC glGetInteger64v = SOGL_NULL;
PFNGLGETSYNCIVPROC glGetSynciv = SOGL_NULL;
PFNGLGETINTEGER64I_VPROC glGetInteger64i_v = SOGL_NULL;
PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture = SOGL_NULL;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample = SOGL_NULL;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample = SOGL_NULL;
PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv = SOGL_NULL;
PFNGLSAMPLEMASKIPROC glSampleMaski = SOGL_NULL;
#endif /* GL_VERSION_3_2 */

#if SOGL_TEST_VERSION(3, 3)
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed = SOGL_NULL;
PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex = SOGL_NULL;
PFNGLGENSAMPLERSPROC glGenSamplers = SOGL_NULL;
PFNGLDELETESAMPLERSPROC glDeleteSamplers = SOGL_NULL;
PFNGLISSAMPLERPROC glIsSampler = SOGL_NULL;
PFNGLBINDSAMPLERPROC glBindSampler = SOGL_NULL;
PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri = SOGL_NULL;
PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv = SOGL_NULL;
PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf = SOGL_NULL;
PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv = SOGL_NULL;
PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv = SOGL_NULL;
PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv = SOGL_NULL;
PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv = SOGL_NULL;
PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv = SOGL_NULL;
PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv = SOGL_NULL;
PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv = SOGL_NULL;
PFNGLQUERYCOUNTERPROC glQueryCounter = SOGL_NULL;
PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v = SOGL_NULL;
PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v = SOGL_NULL;
PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor = SOGL_NULL;
PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui = SOGL_NULL;
PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv = SOGL_NULL;
PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui = SOGL_NULL;
PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv = SOGL_NULL;
PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui = SOGL_NULL;
PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv = SOGL_NULL;
PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui = SOGL_NULL;
PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv = SOGL_NULL;
#endif /* GL_VERSION_3_3 */

#if SOGL_TEST_VERSION(4, 0)
PFNGLMINSAMPLESHADINGPROC glMinSampleShading = SOGL_NULL;
PFNGLBLENDEQUATIONIPROC glBlendEquationi = SOGL_NULL;
PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei = SOGL_NULL;
PFNGLBLENDFUNCIPROC glBlendFunci = SOGL_NULL;
PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei = SOGL_NULL;
PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect = SOGL_NULL;
PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect = SOGL_NULL;
PFNGLUNIFORM1DPROC glUniform1d = SOGL_NULL;
PFNGLUNIFORM2DPROC glUniform2d = SOGL_NULL;
PFNGLUNIFORM3DPROC glUniform3d = SOGL_NULL;
PFNGLUNIFORM4DPROC glUniform4d = SOGL_NULL;
PFNGLUNIFORM1DVPROC glUniform1dv = SOGL_NULL;
PFNGLUNIFORM2DVPROC glUniform2dv = SOGL_NULL;
PFNGLUNIFORM3DVPROC glUniform3dv = SOGL_NULL;
PFNGLUNIFORM4DVPROC glUniform4dv = SOGL_NULL;
PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv = SOGL_NULL;
PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv = SOGL_NULL;
PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv = SOGL_NULL;
PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv = SOGL_NULL;
PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv = SOGL_NULL;
PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv = SOGL_NULL;
PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv = SOGL_NULL;
PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv = SOGL_NULL;
PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv = SOGL_NULL;
PFNGLGETUNIFORMDVPROC glGetUniformdv = SOGL_NULL;
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation = SOGL_NULL;
PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex = SOGL_NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv = SOGL_NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName = SOGL_NULL;
PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName = SOGL_NULL;
PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv = SOGL_NULL;
PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv = SOGL_NULL;
PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv = SOGL_NULL;
PFNGLPATCHPARAMETERIPROC glPatchParameteri = SOGL_NULL;
PFNGLPATCHPARAMETERFVPROC glPatchParameterfv = SOGL_NULL;
PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback = SOGL_NULL;
PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks = SOGL_NULL;
PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks = SOGL_NULL;
PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback = SOGL_NULL;
PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback = SOGL_NULL;
PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback = SOGL_NULL;
PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback = SOGL_NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream = SOGL_NULL;
PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed = SOGL_NULL;
PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed = SOGL_NULL;
PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv = SOGL_NULL;
#endif /* GL_VERSION_4_0 */

#if SOGL_TEST_VERSION(4, 1)
PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler = SOGL_NULL;
PFNGLSHADERBINARYPROC glShaderBinary = SOGL_NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat = SOGL_NULL;
PFNGLDEPTHRANGEFPROC glDepthRangef = SOGL_NULL;
PFNGLCLEARDEPTHFPROC glClearDepthf = SOGL_NULL;
PFNGLGETPROGRAMBINARYPROC glGetProgramBinary = SOGL_NULL;
PFNGLPROGRAMBINARYPROC glProgramBinary = SOGL_NULL;
PFNGLPROGRAMPARAMETERIPROC glProgramParameteri = SOGL_NULL;
PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages = SOGL_NULL;
PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram = SOGL_NULL;
PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv = SOGL_NULL;
PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline = SOGL_NULL;
PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines = SOGL_NULL;
PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines = SOGL_NULL;
PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline = SOGL_NULL;
PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv = SOGL_NULL;
PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i = SOGL_NULL;
PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv = SOGL_NULL;
PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f = SOGL_NULL;
PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv = SOGL_NULL;
PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d = SOGL_NULL;
PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv = SOGL_NULL;
PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i = SOGL_NULL;
PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv = SOGL_NULL;
PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f = SOGL_NULL;
PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv = SOGL_NULL;
PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d = SOGL_NULL;
PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv = SOGL_NULL;
PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i = SOGL_NULL;
PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv = SOGL_NULL;
PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f = SOGL_NULL;
PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv = SOGL_NULL;
PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d = SOGL_NULL;
PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv = SOGL_NULL;
PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i = SOGL_NULL;
PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv = SOGL_NULL;
PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f = SOGL_NULL;
PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv = SOGL_NULL;
PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d = SOGL_NULL;
PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv = SOGL_NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline = SOGL_NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog = SOGL_NULL;
PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d = SOGL_NULL;
PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d = SOGL_NULL;
PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d = SOGL_NULL;
PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d = SOGL_NULL;
PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv = SOGL_NULL;
PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv = SOGL_NULL;
PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv = SOGL_NULL;
PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv = SOGL_NULL;
PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer = SOGL_NULL;
PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv = SOGL_NULL;
PFNGLVIEWPORTARRAYVPROC glViewportArrayv = SOGL_NULL;
PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf = SOGL_NULL;
PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv = SOGL_NULL;
PFNGLSCISSORARRAYVPROC glScissorArrayv = SOGL_NULL;
PFNGLSCISSORINDEXEDPROC glScissorIndexed = SOGL_NULL;
PFNGLSCISSORINDEXEDVPROC glScissorIndexedv = SOGL_NULL;
PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv = SOGL_NULL;
PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed = SOGL_NULL;
PFNGLGETFLOATI_VPROC glGetFloati_v = SOGL_NULL;
PFNGLGETDOUBLEI_VPROC glGetDoublei_v = SOGL_NULL;
#endif /* GL_VERSION_4_1 */

#if SOGL_TEST_VERSION(4, 2)
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance = SOGL_NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance = SOGL_NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance = SOGL_NULL;
PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ = SOGL_NULL;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv = SOGL_NULL;
PFNGLBINDIMAGETEXTUREPROC glBindImageTexture = SOGL_NULL;
PFNGLMEMORYBARRIERPROC glMemoryBarrier = SOGL_NULL;
PFNGLTEXSTORAGE1DPROC glTexStorage1D = SOGL_NULL;
PFNGLTEXSTORAGE2DPROC glTexStorage2D = SOGL_NULL;
PFNGLTEXSTORAGE3DPROC glTexStorage3D = SOGL_NULL;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced = SOGL_NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced = SOGL_NULL;
#endif /* GL_VERSION_4_2 */

#if SOGL_TEST_VERSION(4, 3)
PFNGLCLEARBUFFERDATAPROC glClearBufferData = SOGL_NULL;
PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData = SOGL_NULL;
PFNGLDISPATCHCOMPUTEPROC glDispatchCompute = SOGL_NULL;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect = SOGL_NULL;
PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData = SOGL_NULL;
PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri = SOGL_NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv = SOGL_NULL;
PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v = SOGL_NULL;
PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage = SOGL_NULL;
PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage = SOGL_NULL;
PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData = SOGL_NULL;
PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData = SOGL_NULL;
PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer = SOGL_NULL;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer = SOGL_NULL;
PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect = SOGL_NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect = SOGL_NULL;
PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv = SOGL_NULL;
PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex = SOGL_NULL;
PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName = SOGL_NULL;
PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv = SOGL_NULL;
PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation = SOGL_NULL;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glGetProgramResourceLocationIndex = SOGL_NULL;
PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding = SOGL_NULL;
PFNGLTEXBUFFERRANGEPROC glTexBufferRange = SOGL_NULL;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample = SOGL_NULL;
PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample = SOGL_NULL;
PFNGLTEXTUREVIEWPROC glTextureView = SOGL_NULL;
PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer = SOGL_NULL;
PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat = SOGL_NULL;
PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat = SOGL_NULL;
PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat = SOGL_NULL;
PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding = SOGL_NULL;
PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor = SOGL_NULL;
PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl = SOGL_NULL;
PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert = SOGL_NULL;
PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback = SOGL_NULL;
PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog = SOGL_NULL;
PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup = SOGL_NULL;
PFNGLPOPDEBUGGROUPPROC glPopDebugGroup = SOGL_NULL;
PFNGLOBJECTLABELPROC glObjectLabel = SOGL_NULL;
PFNGLGETOBJECTLABELPROC glGetObjectLabel = SOGL_NULL;
PFNGLOBJECTPTRLABELPROC glObjectPtrLabel = SOGL_NULL;
PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel = SOGL_NULL;
#endif /* GL_VERSION_4_3 */

#if SOGL_TEST_VERSION(4, 4)
PFNGLBUFFERSTORAGEPROC glBufferStorage = SOGL_NULL;
PFNGLCLEARTEXIMAGEPROC glClearTexImage = SOGL_NULL;
PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage = SOGL_NULL;
PFNGLBINDBUFFERSBASEPROC glBindBuffersBase = SOGL_NULL;
PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange = SOGL_NULL;
PFNGLBINDTEXTURESPROC glBindTextures = SOGL_NULL;
PFNGLBINDSAMPLERSPROC glBindSamplers = SOGL_NULL;
PFNGLBINDIMAGETEXTURESPROC glBindImageTextures = SOGL_NULL;
PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers = SOGL_NULL;
#endif /* GL_VERSION_4_4 */

#if SOGL_TEST_VERSION(4, 5)
PFNGLCLIPCONTROLPROC glClipControl = SOGL_NULL;
PFNGLCREATETRANSFORMFEEDBACKSPROC glCreateTransformFeedbacks = SOGL_NULL;
PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glTransformFeedbackBufferBase = SOGL_NULL;
PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glTransformFeedbackBufferRange = SOGL_NULL;
PFNGLGETTRANSFORMFEEDBACKIVPROC glGetTransformFeedbackiv = SOGL_NULL;
PFNGLGETTRANSFORMFEEDBACKI_VPROC glGetTransformFeedbacki_v = SOGL_NULL;
PFNGLGETTRANSFORMFEEDBACKI64_VPROC glGetTransformFeedbacki64_v = SOGL_NULL;
PFNGLCREATEBUFFERSPROC glCreateBuffers = SOGL_NULL;
PFNGLNAMEDBUFFERSTORAGEPROC glNamedBufferStorage = SOGL_NULL;
PFNGLNAMEDBUFFERDATAPROC glNamedBufferData = SOGL_NULL;
PFNGLNAMEDBUFFERSUBDATAPROC glNamedBufferSubData = SOGL_NULL;
PFNGLCOPYNAMEDBUFFERSUBDATAPROC glCopyNamedBufferSubData = SOGL_NULL;
PFNGLCLEARNAMEDBUFFERDATAPROC glClearNamedBufferData = SOGL_NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAPROC glClearNamedBufferSubData = SOGL_NULL;
PFNGLMAPNAMEDBUFFERPROC glMapNamedBuffer = SOGL_NULL;
PFNGLMAPNAMEDBUFFERRANGEPROC glMapNamedBufferRange = SOGL_NULL;
PFNGLUNMAPNAMEDBUFFERPROC glUnmapNamedBuffer = SOGL_NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glFlushMappedNamedBufferRange = SOGL_NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVPROC glGetNamedBufferParameteriv = SOGL_NULL;
PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glGetNamedBufferParameteri64v = SOGL_NULL;
PFNGLGETNAMEDBUFFERPOINTERVPROC glGetNamedBufferPointerv = SOGL_NULL;
PFNGLGETNAMEDBUFFERSUBDATAPROC glGetNamedBufferSubData = SOGL_NULL;
PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glNamedFramebufferRenderbuffer = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glNamedFramebufferParameteri = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glNamedFramebufferTexture = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glNamedFramebufferTextureLayer = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glNamedFramebufferDrawBuffer = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glNamedFramebufferDrawBuffers = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glNamedFramebufferReadBuffer = SOGL_NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glInvalidateNamedFramebufferData = SOGL_NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glInvalidateNamedFramebufferSubData = SOGL_NULL;
PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glClearNamedFramebufferiv = SOGL_NULL;
PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glClearNamedFramebufferuiv = SOGL_NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glClearNamedFramebufferfv = SOGL_NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glClearNamedFramebufferfi = SOGL_NULL;
PFNGLBLITNAMEDFRAMEBUFFERPROC glBlitNamedFramebuffer = SOGL_NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glCheckNamedFramebufferStatus = SOGL_NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glGetNamedFramebufferParameteriv = SOGL_NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetNamedFramebufferAttachmentParameteriv = SOGL_NULL;
PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers = SOGL_NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEPROC glNamedRenderbufferStorage = SOGL_NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glNamedRenderbufferStorageMultisample = SOGL_NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glGetNamedRenderbufferParameteriv = SOGL_NULL;
PFNGLCREATETEXTURESPROC glCreateTextures = SOGL_NULL;
PFNGLTEXTUREBUFFERPROC glTextureBuffer = SOGL_NULL;
PFNGLTEXTUREBUFFERRANGEPROC glTextureBufferRange = SOGL_NULL;
PFNGLTEXTURESTORAGE1DPROC glTextureStorage1D = SOGL_NULL;
PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D = SOGL_NULL;
PFNGLTEXTURESTORAGE3DPROC glTextureStorage3D = SOGL_NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glTextureStorage2DMultisample = SOGL_NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glTextureStorage3DMultisample = SOGL_NULL;
PFNGLTEXTURESUBIMAGE1DPROC glTextureSubImage1D = SOGL_NULL;
PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D = SOGL_NULL;
PFNGLTEXTURESUBIMAGE3DPROC glTextureSubImage3D = SOGL_NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glCompressedTextureSubImage1D = SOGL_NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glCompressedTextureSubImage2D = SOGL_NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glCompressedTextureSubImage3D = SOGL_NULL;
PFNGLCOPYTEXTURESUBIMAGE1DPROC glCopyTextureSubImage1D = SOGL_NULL;
PFNGLCOPYTEXTURESUBIMAGE2DPROC glCopyTextureSubImage2D = SOGL_NULL;
PFNGLCOPYTEXTURESUBIMAGE3DPROC glCopyTextureSubImage3D = SOGL_NULL;
PFNGLTEXTUREPARAMETERFPROC glTextureParameterf = SOGL_NULL;
PFNGLTEXTUREPARAMETERFVPROC glTextureParameterfv = SOGL_NULL;
PFNGLTEXTUREPARAMETERIPROC glTextureParameteri = SOGL_NULL;
PFNGLTEXTUREPARAMETERIIVPROC glTextureParameterIiv = SOGL_NULL;
PFNGLTEXTUREPARAMETERIUIVPROC glTextureParameterIuiv = SOGL_NULL;
PFNGLTEXTUREPARAMETERIVPROC glTextureParameteriv = SOGL_NULL;
PFNGLGENERATETEXTUREMIPMAPPROC glGenerateTextureMipmap = SOGL_NULL;
PFNGLBINDTEXTUREUNITPROC glBindTextureUnit = SOGL_NULL;
PFNGLGETTEXTUREIMAGEPROC glGetTextureImage = SOGL_NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glGetCompressedTextureImage = SOGL_NULL;
PFNGLGETTEXTURELEVELPARAMETERFVPROC glGetTextureLevelParameterfv = SOGL_NULL;
PFNGLGETTEXTURELEVELPARAMETERIVPROC glGetTextureLevelParameteriv = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERFVPROC glGetTextureParameterfv = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERIIVPROC glGetTextureParameterIiv = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERIUIVPROC glGetTextureParameterIuiv = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERIVPROC glGetTextureParameteriv = SOGL_NULL;
PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays = SOGL_NULL;
PFNGLDISABLEVERTEXARRAYATTRIBPROC glDisableVertexArrayAttrib = SOGL_NULL;
PFNGLENABLEVERTEXARRAYATTRIBPROC glEnableVertexArrayAttrib = SOGL_NULL;
PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXBUFFERPROC glVertexArrayVertexBuffer = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXBUFFERSPROC glVertexArrayVertexBuffers = SOGL_NULL;
PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding = SOGL_NULL;
PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat = SOGL_NULL;
PFNGLVERTEXARRAYATTRIBIFORMATPROC glVertexArrayAttribIFormat = SOGL_NULL;
PFNGLVERTEXARRAYATTRIBLFORMATPROC glVertexArrayAttribLFormat = SOGL_NULL;
PFNGLVERTEXARRAYBINDINGDIVISORPROC glVertexArrayBindingDivisor = SOGL_NULL;
PFNGLGETVERTEXARRAYIVPROC glGetVertexArrayiv = SOGL_NULL;
PFNGLGETVERTEXARRAYINDEXEDIVPROC glGetVertexArrayIndexediv = SOGL_NULL;
PFNGLGETVERTEXARRAYINDEXED64IVPROC glGetVertexArrayIndexed64iv = SOGL_NULL;
PFNGLCREATESAMPLERSPROC glCreateSamplers = SOGL_NULL;
PFNGLCREATEPROGRAMPIPELINESPROC glCreateProgramPipelines = SOGL_NULL;
PFNGLCREATEQUERIESPROC glCreateQueries = SOGL_NULL;
PFNGLGETQUERYBUFFEROBJECTI64VPROC glGetQueryBufferObjecti64v = SOGL_NULL;
PFNGLGETQUERYBUFFEROBJECTIVPROC glGetQueryBufferObjectiv = SOGL_NULL;
PFNGLGETQUERYBUFFEROBJECTUI64VPROC glGetQueryBufferObjectui64v = SOGL_NULL;
PFNGLGETQUERYBUFFEROBJECTUIVPROC glGetQueryBufferObjectuiv = SOGL_NULL;
PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion = SOGL_NULL;
PFNGLGETTEXTURESUBIMAGEPROC glGetTextureSubImage = SOGL_NULL;
PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glGetCompressedTextureSubImage = SOGL_NULL;
PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus = SOGL_NULL;
PFNGLGETNCOMPRESSEDTEXIMAGEPROC glGetnCompressedTexImage = SOGL_NULL;
PFNGLGETNTEXIMAGEPROC glGetnTexImage = SOGL_NULL;
PFNGLGETNUNIFORMDVPROC glGetnUniformdv = SOGL_NULL;
PFNGLGETNUNIFORMFVPROC glGetnUniformfv = SOGL_NULL;
PFNGLGETNUNIFORMIVPROC glGetnUniformiv = SOGL_NULL;
PFNGLGETNUNIFORMUIVPROC glGetnUniformuiv = SOGL_NULL;
PFNGLREADNPIXELSPROC glReadnPixels = SOGL_NULL;
PFNGLTEXTUREBARRIERPROC glTextureBarrier = SOGL_NULL;
#endif /* GL_VERSION_4_5 */

#if SOGL_TEST_VERSION(4, 6)
PFNGLSPECIALIZESHADERPROC glSpecializeShader = SOGL_NULL;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glMultiDrawArraysIndirectCount = SOGL_NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glMultiDrawElementsIndirectCount = SOGL_NULL;
PFNGLPOLYGONOFFSETCLAMPPROC glPolygonOffsetClamp = SOGL_NULL;
#endif /* GL_VERSION_4_6 */

/* EXTENSION IMPLEMENTATIONS */


#ifdef SOGL_ARB_ES3_2_compatibility
PFNGLPRIMITIVEBOUNDINGBOXARBPROC glPrimitiveBoundingBoxARB = SOGL_NULL;
#endif /* SOGL_ARB_ES3_2_compatibility */

#ifdef SOGL_ARB_bindless_texture
PFNGLGETTEXTUREHANDLEARBPROC glGetTextureHandleARB = SOGL_NULL;
PFNGLGETTEXTURESAMPLERHANDLEARBPROC glGetTextureSamplerHandleARB = SOGL_NULL;
PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glMakeTextureHandleResidentARB = SOGL_NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC glMakeTextureHandleNonResidentARB = SOGL_NULL;
PFNGLGETIMAGEHANDLEARBPROC glGetImageHandleARB = SOGL_NULL;
PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glMakeImageHandleResidentARB = SOGL_NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glMakeImageHandleNonResidentARB = SOGL_NULL;
PFNGLUNIFORMHANDLEUI64ARBPROC glUniformHandleui64ARB = SOGL_NULL;
PFNGLUNIFORMHANDLEUI64VARBPROC glUniformHandleui64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC glProgramUniformHandleui64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC glProgramUniformHandleui64vARB = SOGL_NULL;
PFNGLISTEXTUREHANDLERESIDENTARBPROC glIsTextureHandleResidentARB = SOGL_NULL;
PFNGLISIMAGEHANDLERESIDENTARBPROC glIsImageHandleResidentARB = SOGL_NULL;
PFNGLVERTEXATTRIBL1UI64ARBPROC glVertexAttribL1ui64ARB = SOGL_NULL;
PFNGLVERTEXATTRIBL1UI64VARBPROC glVertexAttribL1ui64vARB = SOGL_NULL;
PFNGLGETVERTEXATTRIBLUI64VARBPROC glGetVertexAttribLui64vARB = SOGL_NULL;
#endif /* SOGL_ARB_bindless_texture */

#ifdef SOGL_ARB_cl_event
PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB = SOGL_NULL;
#endif /* SOGL_ARB_cl_event */

#ifdef SOGL_ARB_compute_variable_group_size
PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glDispatchComputeGroupSizeARB = SOGL_NULL;
#endif /* SOGL_ARB_compute_variable_group_size */

#ifdef SOGL_ARB_debug_output
PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB = SOGL_NULL;
PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB = SOGL_NULL;
PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB = SOGL_NULL;
PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB = SOGL_NULL;
#endif /* SOGL_ARB_debug_output */

#ifdef SOGL_ARB_draw_buffers_blend
PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB = SOGL_NULL;
PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB = SOGL_NULL;
PFNGLBLENDFUNCIARBPROC glBlendFunciARB = SOGL_NULL;
PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB = SOGL_NULL;
#endif /* SOGL_ARB_draw_buffers_blend */

#ifdef SOGL_ARB_draw_instanced
PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB = SOGL_NULL;
PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB = SOGL_NULL;
#endif /* SOGL_ARB_draw_instanced */

#ifdef SOGL_ARB_geometry_shader4
PFNGLPROGRAMPARAMETERIARBPROC glProgramParameteriARB = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB = SOGL_NULL;
PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB = SOGL_NULL;
#endif /* SOGL_ARB_geometry_shader4 */

#ifdef SOGL_ARB_gl_spirv
PFNGLSPECIALIZESHADERARBPROC glSpecializeShaderARB = SOGL_NULL;
#endif /* SOGL_ARB_gl_spirv */

#ifdef SOGL_ARB_gpu_shader_int64
PFNGLUNIFORM1I64ARBPROC glUniform1i64ARB = SOGL_NULL;
PFNGLUNIFORM2I64ARBPROC glUniform2i64ARB = SOGL_NULL;
PFNGLUNIFORM3I64ARBPROC glUniform3i64ARB = SOGL_NULL;
PFNGLUNIFORM4I64ARBPROC glUniform4i64ARB = SOGL_NULL;
PFNGLUNIFORM1I64VARBPROC glUniform1i64vARB = SOGL_NULL;
PFNGLUNIFORM2I64VARBPROC glUniform2i64vARB = SOGL_NULL;
PFNGLUNIFORM3I64VARBPROC glUniform3i64vARB = SOGL_NULL;
PFNGLUNIFORM4I64VARBPROC glUniform4i64vARB = SOGL_NULL;
PFNGLUNIFORM1UI64ARBPROC glUniform1ui64ARB = SOGL_NULL;
PFNGLUNIFORM2UI64ARBPROC glUniform2ui64ARB = SOGL_NULL;
PFNGLUNIFORM3UI64ARBPROC glUniform3ui64ARB = SOGL_NULL;
PFNGLUNIFORM4UI64ARBPROC glUniform4ui64ARB = SOGL_NULL;
PFNGLUNIFORM1UI64VARBPROC glUniform1ui64vARB = SOGL_NULL;
PFNGLUNIFORM2UI64VARBPROC glUniform2ui64vARB = SOGL_NULL;
PFNGLUNIFORM3UI64VARBPROC glUniform3ui64vARB = SOGL_NULL;
PFNGLUNIFORM4UI64VARBPROC glUniform4ui64vARB = SOGL_NULL;
PFNGLGETUNIFORMI64VARBPROC glGetUniformi64vARB = SOGL_NULL;
PFNGLGETUNIFORMUI64VARBPROC glGetUniformui64vARB = SOGL_NULL;
PFNGLGETNUNIFORMI64VARBPROC glGetnUniformi64vARB = SOGL_NULL;
PFNGLGETNUNIFORMUI64VARBPROC glGetnUniformui64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM1I64ARBPROC glProgramUniform1i64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM2I64ARBPROC glProgramUniform2i64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM3I64ARBPROC glProgramUniform3i64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM4I64ARBPROC glProgramUniform4i64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM1I64VARBPROC glProgramUniform1i64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM2I64VARBPROC glProgramUniform2i64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM3I64VARBPROC glProgramUniform3i64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM4I64VARBPROC glProgramUniform4i64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UI64ARBPROC glProgramUniform1ui64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UI64ARBPROC glProgramUniform2ui64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UI64ARBPROC glProgramUniform3ui64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UI64ARBPROC glProgramUniform4ui64ARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UI64VARBPROC glProgramUniform1ui64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UI64VARBPROC glProgramUniform2ui64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UI64VARBPROC glProgramUniform3ui64vARB = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UI64VARBPROC glProgramUniform4ui64vARB = SOGL_NULL;
#endif /* SOGL_ARB_gpu_shader_int64 */

#ifdef SOGL_ARB_indirect_parameters
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC glMultiDrawArraysIndirectCountARB = SOGL_NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC glMultiDrawElementsIndirectCountARB = SOGL_NULL;
#endif /* SOGL_ARB_indirect_parameters */

#ifdef SOGL_ARB_instanced_arrays
PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB = SOGL_NULL;
#endif /* SOGL_ARB_instanced_arrays */

#ifdef SOGL_ARB_parallel_shader_compile
PFNGLMAXSHADERCOMPILERTHREADSARBPROC glMaxShaderCompilerThreadsARB = SOGL_NULL;
#endif /* SOGL_ARB_parallel_shader_compile */

#ifdef SOGL_ARB_robustness
PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB = SOGL_NULL;
PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB = SOGL_NULL;
PFNGLREADNPIXELSARBPROC glReadnPixelsARB = SOGL_NULL;
PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB = SOGL_NULL;
PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB = SOGL_NULL;
PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB = SOGL_NULL;
PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB = SOGL_NULL;
PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB = SOGL_NULL;
#endif /* SOGL_ARB_robustness */

#ifdef SOGL_ARB_sample_locations
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glFramebufferSampleLocationsfvARB = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glNamedFramebufferSampleLocationsfvARB = SOGL_NULL;
PFNGLEVALUATEDEPTHVALUESARBPROC glEvaluateDepthValuesARB = SOGL_NULL;
#endif /* SOGL_ARB_sample_locations */

#ifdef SOGL_ARB_sample_shading
PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB = SOGL_NULL;
#endif /* SOGL_ARB_sample_shading */

#ifdef SOGL_ARB_shading_language_include
PFNGLNAMEDSTRINGARBPROC glNamedStringARB = SOGL_NULL;
PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB = SOGL_NULL;
PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB = SOGL_NULL;
PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB = SOGL_NULL;
PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB = SOGL_NULL;
PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB = SOGL_NULL;
#endif /* SOGL_ARB_shading_language_include */

#ifdef SOGL_ARB_sparse_buffer
PFNGLBUFFERPAGECOMMITMENTARBPROC glBufferPageCommitmentARB = SOGL_NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC glNamedBufferPageCommitmentEXT = SOGL_NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC glNamedBufferPageCommitmentARB = SOGL_NULL;
#endif /* SOGL_ARB_sparse_buffer */

#ifdef SOGL_ARB_sparse_texture
PFNGLTEXPAGECOMMITMENTARBPROC glTexPageCommitmentARB = SOGL_NULL;
#endif /* SOGL_ARB_sparse_texture */

#ifdef SOGL_ARB_texture_buffer_object
PFNGLTEXBUFFERARBPROC glTexBufferARB = SOGL_NULL;
#endif /* SOGL_ARB_texture_buffer_object */

#ifdef SOGL_ARB_viewport_array
PFNGLDEPTHRANGEARRAYDVNVPROC glDepthRangeArraydvNV = SOGL_NULL;
PFNGLDEPTHRANGEINDEXEDDNVPROC glDepthRangeIndexeddNV = SOGL_NULL;
#endif /* SOGL_ARB_viewport_array */

#ifdef SOGL_KHR_blend_equation_advanced
PFNGLBLENDBARRIERKHRPROC glBlendBarrierKHR = SOGL_NULL;
#endif /* SOGL_KHR_blend_equation_advanced */

#ifdef SOGL_KHR_parallel_shader_compile
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glMaxShaderCompilerThreadsKHR = SOGL_NULL;
#endif /* SOGL_KHR_parallel_shader_compile */

#ifdef SOGL_AMD_framebuffer_multisample_advanced
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glRenderbufferStorageMultisampleAdvancedAMD = SOGL_NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glNamedRenderbufferStorageMultisampleAdvancedAMD = SOGL_NULL;
#endif /* SOGL_AMD_framebuffer_multisample_advanced */

#ifdef SOGL_AMD_performance_monitor
PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD = SOGL_NULL;
PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD = SOGL_NULL;
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD = SOGL_NULL;
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD = SOGL_NULL;
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD = SOGL_NULL;
PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD = SOGL_NULL;
PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD = SOGL_NULL;
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD = SOGL_NULL;
PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD = SOGL_NULL;
PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD = SOGL_NULL;
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD = SOGL_NULL;
#endif /* SOGL_AMD_performance_monitor */

#ifdef SOGL_EXT_EGL_image_storage
PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glEGLImageTargetTexStorageEXT = SOGL_NULL;
PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glEGLImageTargetTextureStorageEXT = SOGL_NULL;
#endif /* SOGL_EXT_EGL_image_storage */

#ifdef SOGL_EXT_debug_label
PFNGLLABELOBJECTEXTPROC glLabelObjectEXT = SOGL_NULL;
PFNGLGETOBJECTLABELEXTPROC glGetObjectLabelEXT = SOGL_NULL;
#endif /* SOGL_EXT_debug_label */

#ifdef SOGL_EXT_debug_marker
PFNGLINSERTEVENTMARKEREXTPROC glInsertEventMarkerEXT = SOGL_NULL;
PFNGLPUSHGROUPMARKEREXTPROC glPushGroupMarkerEXT = SOGL_NULL;
PFNGLPOPGROUPMARKEREXTPROC glPopGroupMarkerEXT = SOGL_NULL;
#endif /* SOGL_EXT_debug_marker */

#ifdef SOGL_EXT_direct_state_access
PFNGLMATRIXLOADFEXTPROC glMatrixLoadfEXT = SOGL_NULL;
PFNGLMATRIXLOADDEXTPROC glMatrixLoaddEXT = SOGL_NULL;
PFNGLMATRIXMULTFEXTPROC glMatrixMultfEXT = SOGL_NULL;
PFNGLMATRIXMULTDEXTPROC glMatrixMultdEXT = SOGL_NULL;
PFNGLMATRIXLOADIDENTITYEXTPROC glMatrixLoadIdentityEXT = SOGL_NULL;
PFNGLMATRIXROTATEFEXTPROC glMatrixRotatefEXT = SOGL_NULL;
PFNGLMATRIXROTATEDEXTPROC glMatrixRotatedEXT = SOGL_NULL;
PFNGLMATRIXSCALEFEXTPROC glMatrixScalefEXT = SOGL_NULL;
PFNGLMATRIXSCALEDEXTPROC glMatrixScaledEXT = SOGL_NULL;
PFNGLMATRIXTRANSLATEFEXTPROC glMatrixTranslatefEXT = SOGL_NULL;
PFNGLMATRIXTRANSLATEDEXTPROC glMatrixTranslatedEXT = SOGL_NULL;
PFNGLMATRIXFRUSTUMEXTPROC glMatrixFrustumEXT = SOGL_NULL;
PFNGLMATRIXORTHOEXTPROC glMatrixOrthoEXT = SOGL_NULL;
PFNGLMATRIXPOPEXTPROC glMatrixPopEXT = SOGL_NULL;
PFNGLMATRIXPUSHEXTPROC glMatrixPushEXT = SOGL_NULL;
PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT = SOGL_NULL;
PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT = SOGL_NULL;
PFNGLTEXTUREPARAMETERFEXTPROC glTextureParameterfEXT = SOGL_NULL;
PFNGLTEXTUREPARAMETERFVEXTPROC glTextureParameterfvEXT = SOGL_NULL;
PFNGLTEXTUREPARAMETERIEXTPROC glTextureParameteriEXT = SOGL_NULL;
PFNGLTEXTUREPARAMETERIVEXTPROC glTextureParameterivEXT = SOGL_NULL;
PFNGLTEXTUREIMAGE1DEXTPROC glTextureImage1DEXT = SOGL_NULL;
PFNGLTEXTUREIMAGE2DEXTPROC glTextureImage2DEXT = SOGL_NULL;
PFNGLTEXTURESUBIMAGE1DEXTPROC glTextureSubImage1DEXT = SOGL_NULL;
PFNGLTEXTURESUBIMAGE2DEXTPROC glTextureSubImage2DEXT = SOGL_NULL;
PFNGLCOPYTEXTUREIMAGE1DEXTPROC glCopyTextureImage1DEXT = SOGL_NULL;
PFNGLCOPYTEXTUREIMAGE2DEXTPROC glCopyTextureImage2DEXT = SOGL_NULL;
PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glCopyTextureSubImage1DEXT = SOGL_NULL;
PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glCopyTextureSubImage2DEXT = SOGL_NULL;
PFNGLGETTEXTUREIMAGEEXTPROC glGetTextureImageEXT = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERFVEXTPROC glGetTextureParameterfvEXT = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERIVEXTPROC glGetTextureParameterivEXT = SOGL_NULL;
PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glGetTextureLevelParameterfvEXT = SOGL_NULL;
PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glGetTextureLevelParameterivEXT = SOGL_NULL;
PFNGLTEXTUREIMAGE3DEXTPROC glTextureImage3DEXT = SOGL_NULL;
PFNGLTEXTURESUBIMAGE3DEXTPROC glTextureSubImage3DEXT = SOGL_NULL;
PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glCopyTextureSubImage3DEXT = SOGL_NULL;
PFNGLBINDMULTITEXTUREEXTPROC glBindMultiTextureEXT = SOGL_NULL;
PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT = SOGL_NULL;
PFNGLMULTITEXENVFEXTPROC glMultiTexEnvfEXT = SOGL_NULL;
PFNGLMULTITEXENVFVEXTPROC glMultiTexEnvfvEXT = SOGL_NULL;
PFNGLMULTITEXENVIEXTPROC glMultiTexEnviEXT = SOGL_NULL;
PFNGLMULTITEXENVIVEXTPROC glMultiTexEnvivEXT = SOGL_NULL;
PFNGLMULTITEXGENDEXTPROC glMultiTexGendEXT = SOGL_NULL;
PFNGLMULTITEXGENDVEXTPROC glMultiTexGendvEXT = SOGL_NULL;
PFNGLMULTITEXGENFEXTPROC glMultiTexGenfEXT = SOGL_NULL;
PFNGLMULTITEXGENFVEXTPROC glMultiTexGenfvEXT = SOGL_NULL;
PFNGLMULTITEXGENIEXTPROC glMultiTexGeniEXT = SOGL_NULL;
PFNGLMULTITEXGENIVEXTPROC glMultiTexGenivEXT = SOGL_NULL;
PFNGLGETMULTITEXENVFVEXTPROC glGetMultiTexEnvfvEXT = SOGL_NULL;
PFNGLGETMULTITEXENVIVEXTPROC glGetMultiTexEnvivEXT = SOGL_NULL;
PFNGLGETMULTITEXGENDVEXTPROC glGetMultiTexGendvEXT = SOGL_NULL;
PFNGLGETMULTITEXGENFVEXTPROC glGetMultiTexGenfvEXT = SOGL_NULL;
PFNGLGETMULTITEXGENIVEXTPROC glGetMultiTexGenivEXT = SOGL_NULL;
PFNGLMULTITEXPARAMETERIEXTPROC glMultiTexParameteriEXT = SOGL_NULL;
PFNGLMULTITEXPARAMETERIVEXTPROC glMultiTexParameterivEXT = SOGL_NULL;
PFNGLMULTITEXPARAMETERFEXTPROC glMultiTexParameterfEXT = SOGL_NULL;
PFNGLMULTITEXPARAMETERFVEXTPROC glMultiTexParameterfvEXT = SOGL_NULL;
PFNGLMULTITEXIMAGE1DEXTPROC glMultiTexImage1DEXT = SOGL_NULL;
PFNGLMULTITEXIMAGE2DEXTPROC glMultiTexImage2DEXT = SOGL_NULL;
PFNGLMULTITEXSUBIMAGE1DEXTPROC glMultiTexSubImage1DEXT = SOGL_NULL;
PFNGLMULTITEXSUBIMAGE2DEXTPROC glMultiTexSubImage2DEXT = SOGL_NULL;
PFNGLCOPYMULTITEXIMAGE1DEXTPROC glCopyMultiTexImage1DEXT = SOGL_NULL;
PFNGLCOPYMULTITEXIMAGE2DEXTPROC glCopyMultiTexImage2DEXT = SOGL_NULL;
PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glCopyMultiTexSubImage1DEXT = SOGL_NULL;
PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glCopyMultiTexSubImage2DEXT = SOGL_NULL;
PFNGLGETMULTITEXIMAGEEXTPROC glGetMultiTexImageEXT = SOGL_NULL;
PFNGLGETMULTITEXPARAMETERFVEXTPROC glGetMultiTexParameterfvEXT = SOGL_NULL;
PFNGLGETMULTITEXPARAMETERIVEXTPROC glGetMultiTexParameterivEXT = SOGL_NULL;
PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glGetMultiTexLevelParameterfvEXT = SOGL_NULL;
PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glGetMultiTexLevelParameterivEXT = SOGL_NULL;
PFNGLMULTITEXIMAGE3DEXTPROC glMultiTexImage3DEXT = SOGL_NULL;
PFNGLMULTITEXSUBIMAGE3DEXTPROC glMultiTexSubImage3DEXT = SOGL_NULL;
PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glCopyMultiTexSubImage3DEXT = SOGL_NULL;
PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT = SOGL_NULL;
PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT = SOGL_NULL;
PFNGLGETFLOATINDEXEDVEXTPROC glGetFloatIndexedvEXT = SOGL_NULL;
PFNGLGETDOUBLEINDEXEDVEXTPROC glGetDoubleIndexedvEXT = SOGL_NULL;
PFNGLGETPOINTERINDEXEDVEXTPROC glGetPointerIndexedvEXT = SOGL_NULL;
PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT = SOGL_NULL;
PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT = SOGL_NULL;
PFNGLISENABLEDINDEXEDEXTPROC glIsEnabledIndexedEXT = SOGL_NULL;
PFNGLGETINTEGERINDEXEDVEXTPROC glGetIntegerIndexedvEXT = SOGL_NULL;
PFNGLGETBOOLEANINDEXEDVEXTPROC glGetBooleanIndexedvEXT = SOGL_NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glCompressedTextureImage3DEXT = SOGL_NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glCompressedTextureImage2DEXT = SOGL_NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glCompressedTextureImage1DEXT = SOGL_NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glCompressedTextureSubImage3DEXT = SOGL_NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glCompressedTextureSubImage2DEXT = SOGL_NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glCompressedTextureSubImage1DEXT = SOGL_NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glGetCompressedTextureImageEXT = SOGL_NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glCompressedMultiTexImage3DEXT = SOGL_NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glCompressedMultiTexImage2DEXT = SOGL_NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glCompressedMultiTexImage1DEXT = SOGL_NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glCompressedMultiTexSubImage3DEXT = SOGL_NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glCompressedMultiTexSubImage2DEXT = SOGL_NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glCompressedMultiTexSubImage1DEXT = SOGL_NULL;
PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glGetCompressedMultiTexImageEXT = SOGL_NULL;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT = SOGL_NULL;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT = SOGL_NULL;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT = SOGL_NULL;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT = SOGL_NULL;
PFNGLNAMEDBUFFERDATAEXTPROC glNamedBufferDataEXT = SOGL_NULL;
PFNGLNAMEDBUFFERSUBDATAEXTPROC glNamedBufferSubDataEXT = SOGL_NULL;
PFNGLMAPNAMEDBUFFEREXTPROC glMapNamedBufferEXT = SOGL_NULL;
PFNGLUNMAPNAMEDBUFFEREXTPROC glUnmapNamedBufferEXT = SOGL_NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glGetNamedBufferParameterivEXT = SOGL_NULL;
PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glGetNamedBufferPointervEXT = SOGL_NULL;
PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glGetNamedBufferSubDataEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT = SOGL_NULL;
PFNGLTEXTUREBUFFEREXTPROC glTextureBufferEXT = SOGL_NULL;
PFNGLMULTITEXBUFFEREXTPROC glMultiTexBufferEXT = SOGL_NULL;
PFNGLTEXTUREPARAMETERIIVEXTPROC glTextureParameterIivEXT = SOGL_NULL;
PFNGLTEXTUREPARAMETERIUIVEXTPROC glTextureParameterIuivEXT = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERIIVEXTPROC glGetTextureParameterIivEXT = SOGL_NULL;
PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glGetTextureParameterIuivEXT = SOGL_NULL;
PFNGLMULTITEXPARAMETERIIVEXTPROC glMultiTexParameterIivEXT = SOGL_NULL;
PFNGLMULTITEXPARAMETERIUIVEXTPROC glMultiTexParameterIuivEXT = SOGL_NULL;
PFNGLGETMULTITEXPARAMETERIIVEXTPROC glGetMultiTexParameterIivEXT = SOGL_NULL;
PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glGetMultiTexParameterIuivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glNamedProgramLocalParameters4fvEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glNamedProgramLocalParameterI4iEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glNamedProgramLocalParameterI4ivEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glNamedProgramLocalParametersI4ivEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glNamedProgramLocalParameterI4uiEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glNamedProgramLocalParameterI4uivEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glNamedProgramLocalParametersI4uivEXT = SOGL_NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glGetNamedProgramLocalParameterIivEXT = SOGL_NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glGetNamedProgramLocalParameterIuivEXT = SOGL_NULL;
PFNGLENABLECLIENTSTATEIEXTPROC glEnableClientStateiEXT = SOGL_NULL;
PFNGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT = SOGL_NULL;
PFNGLGETFLOATI_VEXTPROC glGetFloati_vEXT = SOGL_NULL;
PFNGLGETDOUBLEI_VEXTPROC glGetDoublei_vEXT = SOGL_NULL;
PFNGLGETPOINTERI_VEXTPROC glGetPointeri_vEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMSTRINGEXTPROC glNamedProgramStringEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glNamedProgramLocalParameter4dEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glNamedProgramLocalParameter4dvEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glNamedProgramLocalParameter4fEXT = SOGL_NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glNamedProgramLocalParameter4fvEXT = SOGL_NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glGetNamedProgramLocalParameterdvEXT = SOGL_NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glGetNamedProgramLocalParameterfvEXT = SOGL_NULL;
PFNGLGETNAMEDPROGRAMIVEXTPROC glGetNamedProgramivEXT = SOGL_NULL;
PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glGetNamedProgramStringEXT = SOGL_NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glNamedRenderbufferStorageEXT = SOGL_NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glGetNamedRenderbufferParameterivEXT = SOGL_NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glNamedRenderbufferStorageMultisampleEXT = SOGL_NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glNamedRenderbufferStorageMultisampleCoverageEXT = SOGL_NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glCheckNamedFramebufferStatusEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glNamedFramebufferTexture1DEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glNamedFramebufferTexture2DEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glNamedFramebufferTexture3DEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glNamedFramebufferRenderbufferEXT = SOGL_NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetNamedFramebufferAttachmentParameterivEXT = SOGL_NULL;
PFNGLGENERATETEXTUREMIPMAPEXTPROC glGenerateTextureMipmapEXT = SOGL_NULL;
PFNGLGENERATEMULTITEXMIPMAPEXTPROC glGenerateMultiTexMipmapEXT = SOGL_NULL;
PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glFramebufferDrawBufferEXT = SOGL_NULL;
PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glFramebufferDrawBuffersEXT = SOGL_NULL;
PFNGLFRAMEBUFFERREADBUFFEREXTPROC glFramebufferReadBufferEXT = SOGL_NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glGetFramebufferParameterivEXT = SOGL_NULL;
PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glNamedCopyBufferSubDataEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glNamedFramebufferTextureEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glNamedFramebufferTextureLayerEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glNamedFramebufferTextureFaceEXT = SOGL_NULL;
PFNGLTEXTURERENDERBUFFEREXTPROC glTextureRenderbufferEXT = SOGL_NULL;
PFNGLMULTITEXRENDERBUFFEREXTPROC glMultiTexRenderbufferEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glVertexArrayVertexOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glVertexArrayColorOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glVertexArrayEdgeFlagOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glVertexArrayIndexOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glVertexArrayNormalOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glVertexArrayTexCoordOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glVertexArrayMultiTexCoordOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glVertexArrayFogCoordOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glVertexArraySecondaryColorOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glVertexArrayVertexAttribOffsetEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glVertexArrayVertexAttribIOffsetEXT = SOGL_NULL;
PFNGLENABLEVERTEXARRAYEXTPROC glEnableVertexArrayEXT = SOGL_NULL;
PFNGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT = SOGL_NULL;
PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glEnableVertexArrayAttribEXT = SOGL_NULL;
PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT = SOGL_NULL;
PFNGLGETVERTEXARRAYINTEGERVEXTPROC glGetVertexArrayIntegervEXT = SOGL_NULL;
PFNGLGETVERTEXARRAYPOINTERVEXTPROC glGetVertexArrayPointervEXT = SOGL_NULL;
PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC glGetVertexArrayIntegeri_vEXT = SOGL_NULL;
PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC glGetVertexArrayPointeri_vEXT = SOGL_NULL;
PFNGLMAPNAMEDBUFFERRANGEEXTPROC glMapNamedBufferRangeEXT = SOGL_NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glFlushMappedNamedBufferRangeEXT = SOGL_NULL;
PFNGLNAMEDBUFFERSTORAGEEXTPROC glNamedBufferStorageEXT = SOGL_NULL;
PFNGLCLEARNAMEDBUFFERDATAEXTPROC glClearNamedBufferDataEXT = SOGL_NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC glClearNamedBufferSubDataEXT = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC glNamedFramebufferParameteriEXT = SOGL_NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC glGetNamedFramebufferParameterivEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1DEXTPROC glProgramUniform1dEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2DEXTPROC glProgramUniform2dEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3DEXTPROC glProgramUniform3dEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4DEXTPROC glProgramUniform4dEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM1DVEXTPROC glProgramUniform1dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM2DVEXTPROC glProgramUniform2dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM3DVEXTPROC glProgramUniform3dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORM4DVEXTPROC glProgramUniform4dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glProgramUniformMatrix2dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glProgramUniformMatrix3dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glProgramUniformMatrix4dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glProgramUniformMatrix2x3dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glProgramUniformMatrix2x4dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glProgramUniformMatrix3x2dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glProgramUniformMatrix3x4dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glProgramUniformMatrix4x2dvEXT = SOGL_NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glProgramUniformMatrix4x3dvEXT = SOGL_NULL;
PFNGLTEXTUREBUFFERRANGEEXTPROC glTextureBufferRangeEXT = SOGL_NULL;
PFNGLTEXTURESTORAGE1DEXTPROC glTextureStorage1DEXT = SOGL_NULL;
PFNGLTEXTURESTORAGE2DEXTPROC glTextureStorage2DEXT = SOGL_NULL;
PFNGLTEXTURESTORAGE3DEXTPROC glTextureStorage3DEXT = SOGL_NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC glTextureStorage2DMultisampleEXT = SOGL_NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC glTextureStorage3DMultisampleEXT = SOGL_NULL;
PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC glVertexArrayBindVertexBufferEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC glVertexArrayVertexAttribFormatEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC glVertexArrayVertexAttribIFormatEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC glVertexArrayVertexAttribLFormatEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC glVertexArrayVertexAttribBindingEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC glVertexArrayVertexBindingDivisorEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glVertexArrayVertexAttribLOffsetEXT = SOGL_NULL;
PFNGLTEXTUREPAGECOMMITMENTEXTPROC glTexturePageCommitmentEXT = SOGL_NULL;
PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC glVertexArrayVertexAttribDivisorEXT = SOGL_NULL;
#endif /* SOGL_EXT_direct_state_access */

#ifdef SOGL_EXT_draw_instanced
PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT = SOGL_NULL;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT = SOGL_NULL;
#endif /* SOGL_EXT_draw_instanced */

#ifdef SOGL_EXT_polygon_offset_clamp
PFNGLPOLYGONOFFSETCLAMPEXTPROC glPolygonOffsetClampEXT = SOGL_NULL;
#endif /* SOGL_EXT_polygon_offset_clamp */

#ifdef SOGL_EXT_raster_multisample
PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT = SOGL_NULL;
#endif /* SOGL_EXT_raster_multisample */

#ifdef SOGL_EXT_separate_shader_objects
PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT = SOGL_NULL;
PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT = SOGL_NULL;
PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT = SOGL_NULL;
#endif /* SOGL_EXT_separate_shader_objects */

#ifdef SOGL_EXT_shader_framebuffer_fetch_non_coherent
PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glFramebufferFetchBarrierEXT = SOGL_NULL;
#endif /* SOGL_EXT_shader_framebuffer_fetch_non_coherent */

#ifdef SOGL_EXT_window_rectangles
PFNGLWINDOWRECTANGLESEXTPROC glWindowRectanglesEXT = SOGL_NULL;
#endif /* SOGL_EXT_window_rectangles */

#ifdef SOGL_INTEL_framebuffer_CMAA
PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC glApplyFramebufferAttachmentCMAAINTEL = SOGL_NULL;
#endif /* SOGL_INTEL_framebuffer_CMAA */

#ifdef SOGL_INTEL_performance_query
PFNGLBEGINPERFQUERYINTELPROC glBeginPerfQueryINTEL = SOGL_NULL;
PFNGLCREATEPERFQUERYINTELPROC glCreatePerfQueryINTEL = SOGL_NULL;
PFNGLDELETEPERFQUERYINTELPROC glDeletePerfQueryINTEL = SOGL_NULL;
PFNGLENDPERFQUERYINTELPROC glEndPerfQueryINTEL = SOGL_NULL;
PFNGLGETFIRSTPERFQUERYIDINTELPROC glGetFirstPerfQueryIdINTEL = SOGL_NULL;
PFNGLGETNEXTPERFQUERYIDINTELPROC glGetNextPerfQueryIdINTEL = SOGL_NULL;
PFNGLGETPERFCOUNTERINFOINTELPROC glGetPerfCounterInfoINTEL = SOGL_NULL;
PFNGLGETPERFQUERYDATAINTELPROC glGetPerfQueryDataINTEL = SOGL_NULL;
PFNGLGETPERFQUERYIDBYNAMEINTELPROC glGetPerfQueryIdByNameINTEL = SOGL_NULL;
PFNGLGETPERFQUERYINFOINTELPROC glGetPerfQueryInfoINTEL = SOGL_NULL;
#endif /* SOGL_INTEL_performance_query */

#ifdef SOGL_MESA_framebuffer_flip_y
PFNGLFRAMEBUFFERPARAMETERIMESAPROC glFramebufferParameteriMESA = SOGL_NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glGetFramebufferParameterivMESA = SOGL_NULL;
#endif /* SOGL_MESA_framebuffer_flip_y */

#ifdef SOGL_NV_bindless_multi_draw_indirect
PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC glMultiDrawArraysIndirectBindlessNV = SOGL_NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC glMultiDrawElementsIndirectBindlessNV = SOGL_NULL;
#endif /* SOGL_NV_bindless_multi_draw_indirect */

#ifdef SOGL_NV_bindless_multi_draw_indirect_count
PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC glMultiDrawArraysIndirectBindlessCountNV = SOGL_NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC glMultiDrawElementsIndirectBindlessCountNV = SOGL_NULL;
#endif /* SOGL_NV_bindless_multi_draw_indirect_count */

#ifdef SOGL_NV_bindless_texture
PFNGLGETTEXTUREHANDLENVPROC glGetTextureHandleNV = SOGL_NULL;
PFNGLGETTEXTURESAMPLERHANDLENVPROC glGetTextureSamplerHandleNV = SOGL_NULL;
PFNGLMAKETEXTUREHANDLERESIDENTNVPROC glMakeTextureHandleResidentNV = SOGL_NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glMakeTextureHandleNonResidentNV = SOGL_NULL;
PFNGLGETIMAGEHANDLENVPROC glGetImageHandleNV = SOGL_NULL;
PFNGLMAKEIMAGEHANDLERESIDENTNVPROC glMakeImageHandleResidentNV = SOGL_NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC glMakeImageHandleNonResidentNV = SOGL_NULL;
PFNGLUNIFORMHANDLEUI64NVPROC glUniformHandleui64NV = SOGL_NULL;
PFNGLUNIFORMHANDLEUI64VNVPROC glUniformHandleui64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC glProgramUniformHandleui64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC glProgramUniformHandleui64vNV = SOGL_NULL;
PFNGLISTEXTUREHANDLERESIDENTNVPROC glIsTextureHandleResidentNV = SOGL_NULL;
PFNGLISIMAGEHANDLERESIDENTNVPROC glIsImageHandleResidentNV = SOGL_NULL;
#endif /* SOGL_NV_bindless_texture */

#ifdef SOGL_NV_blend_equation_advanced
PFNGLBLENDPARAMETERINVPROC glBlendParameteriNV = SOGL_NULL;
PFNGLBLENDBARRIERNVPROC glBlendBarrierNV = SOGL_NULL;
#endif /* SOGL_NV_blend_equation_advanced */

#ifdef SOGL_NV_clip_space_w_scaling
PFNGLVIEWPORTPOSITIONWSCALENVPROC glViewportPositionWScaleNV = SOGL_NULL;
#endif /* SOGL_NV_clip_space_w_scaling */

#ifdef SOGL_NV_command_list
PFNGLCREATESTATESNVPROC glCreateStatesNV = SOGL_NULL;
PFNGLDELETESTATESNVPROC glDeleteStatesNV = SOGL_NULL;
PFNGLISSTATENVPROC glIsStateNV = SOGL_NULL;
PFNGLSTATECAPTURENVPROC glStateCaptureNV = SOGL_NULL;
PFNGLGETCOMMANDHEADERNVPROC glGetCommandHeaderNV = SOGL_NULL;
PFNGLGETSTAGEINDEXNVPROC glGetStageIndexNV = SOGL_NULL;
PFNGLDRAWCOMMANDSNVPROC glDrawCommandsNV = SOGL_NULL;
PFNGLDRAWCOMMANDSADDRESSNVPROC glDrawCommandsAddressNV = SOGL_NULL;
PFNGLDRAWCOMMANDSSTATESNVPROC glDrawCommandsStatesNV = SOGL_NULL;
PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC glDrawCommandsStatesAddressNV = SOGL_NULL;
PFNGLCREATECOMMANDLISTSNVPROC glCreateCommandListsNV = SOGL_NULL;
PFNGLDELETECOMMANDLISTSNVPROC glDeleteCommandListsNV = SOGL_NULL;
PFNGLISCOMMANDLISTNVPROC glIsCommandListNV = SOGL_NULL;
PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC glListDrawCommandsStatesClientNV = SOGL_NULL;
PFNGLCOMMANDLISTSEGMENTSNVPROC glCommandListSegmentsNV = SOGL_NULL;
PFNGLCOMPILECOMMANDLISTNVPROC glCompileCommandListNV = SOGL_NULL;
PFNGLCALLCOMMANDLISTNVPROC glCallCommandListNV = SOGL_NULL;
#endif /* SOGL_NV_command_list */

#ifdef SOGL_NV_conditional_render
PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV = SOGL_NULL;
PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV = SOGL_NULL;
#endif /* SOGL_NV_conditional_render */

#ifdef SOGL_NV_conservative_raster
PFNGLSUBPIXELPRECISIONBIASNVPROC glSubpixelPrecisionBiasNV = SOGL_NULL;
#endif /* SOGL_NV_conservative_raster */

#ifdef SOGL_NV_conservative_raster_dilate
PFNGLCONSERVATIVERASTERPARAMETERFNVPROC glConservativeRasterParameterfNV = SOGL_NULL;
#endif /* SOGL_NV_conservative_raster_dilate */

#ifdef SOGL_NV_conservative_raster_pre_snap_triangles
PFNGLCONSERVATIVERASTERPARAMETERINVPROC glConservativeRasterParameteriNV = SOGL_NULL;
#endif /* SOGL_NV_conservative_raster_pre_snap_triangles */

#ifdef SOGL_NV_depth_buffer_float
PFNGLDEPTHRANGEDNVPROC glDepthRangedNV = SOGL_NULL;
PFNGLCLEARDEPTHDNVPROC glClearDepthdNV = SOGL_NULL;
PFNGLDEPTHBOUNDSDNVPROC glDepthBoundsdNV = SOGL_NULL;
#endif /* SOGL_NV_depth_buffer_float */

#ifdef SOGL_NV_draw_vulkan_image
PFNGLDRAWVKIMAGENVPROC glDrawVkImageNV = SOGL_NULL;
PFNGLGETVKPROCADDRNVPROC glGetVkProcAddrNV = SOGL_NULL;
PFNGLWAITVKSEMAPHORENVPROC glWaitVkSemaphoreNV = SOGL_NULL;
PFNGLSIGNALVKSEMAPHORENVPROC glSignalVkSemaphoreNV = SOGL_NULL;
PFNGLSIGNALVKFENCENVPROC glSignalVkFenceNV = SOGL_NULL;
#endif /* SOGL_NV_draw_vulkan_image */

#ifdef SOGL_NV_fragment_coverage_to_color
PFNGLFRAGMENTCOVERAGECOLORNVPROC glFragmentCoverageColorNV = SOGL_NULL;
#endif /* SOGL_NV_fragment_coverage_to_color */

#ifdef SOGL_NV_framebuffer_mixed_samples
PFNGLCOVERAGEMODULATIONTABLENVPROC glCoverageModulationTableNV = SOGL_NULL;
PFNGLGETCOVERAGEMODULATIONTABLENVPROC glGetCoverageModulationTableNV = SOGL_NULL;
PFNGLCOVERAGEMODULATIONNVPROC glCoverageModulationNV = SOGL_NULL;
#endif /* SOGL_NV_framebuffer_mixed_samples */

#ifdef SOGL_NV_framebuffer_multisample_coverage
PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glRenderbufferStorageMultisampleCoverageNV = SOGL_NULL;
#endif /* SOGL_NV_framebuffer_multisample_coverage */

#ifdef SOGL_NV_gpu_shader5
PFNGLUNIFORM1I64NVPROC glUniform1i64NV = SOGL_NULL;
PFNGLUNIFORM2I64NVPROC glUniform2i64NV = SOGL_NULL;
PFNGLUNIFORM3I64NVPROC glUniform3i64NV = SOGL_NULL;
PFNGLUNIFORM4I64NVPROC glUniform4i64NV = SOGL_NULL;
PFNGLUNIFORM1I64VNVPROC glUniform1i64vNV = SOGL_NULL;
PFNGLUNIFORM2I64VNVPROC glUniform2i64vNV = SOGL_NULL;
PFNGLUNIFORM3I64VNVPROC glUniform3i64vNV = SOGL_NULL;
PFNGLUNIFORM4I64VNVPROC glUniform4i64vNV = SOGL_NULL;
PFNGLUNIFORM1UI64NVPROC glUniform1ui64NV = SOGL_NULL;
PFNGLUNIFORM2UI64NVPROC glUniform2ui64NV = SOGL_NULL;
PFNGLUNIFORM3UI64NVPROC glUniform3ui64NV = SOGL_NULL;
PFNGLUNIFORM4UI64NVPROC glUniform4ui64NV = SOGL_NULL;
PFNGLUNIFORM1UI64VNVPROC glUniform1ui64vNV = SOGL_NULL;
PFNGLUNIFORM2UI64VNVPROC glUniform2ui64vNV = SOGL_NULL;
PFNGLUNIFORM3UI64VNVPROC glUniform3ui64vNV = SOGL_NULL;
PFNGLUNIFORM4UI64VNVPROC glUniform4ui64vNV = SOGL_NULL;
PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV = SOGL_NULL;
#endif /* SOGL_NV_gpu_shader5 */

#ifdef SOGL_NV_internalformat_sample_query
PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glGetInternalformatSampleivNV = SOGL_NULL;
#endif /* SOGL_NV_internalformat_sample_query */

#ifdef SOGL_NV_memory_attachment
PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC glGetMemoryObjectDetachedResourcesuivNV = SOGL_NULL;
PFNGLRESETMEMORYOBJECTPARAMETERNVPROC glResetMemoryObjectParameterNV = SOGL_NULL;
PFNGLTEXATTACHMEMORYNVPROC glTexAttachMemoryNV = SOGL_NULL;
PFNGLBUFFERATTACHMEMORYNVPROC glBufferAttachMemoryNV = SOGL_NULL;
PFNGLTEXTUREATTACHMEMORYNVPROC glTextureAttachMemoryNV = SOGL_NULL;
PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glNamedBufferAttachMemoryNV = SOGL_NULL;
#endif /* SOGL_NV_memory_attachment */

#ifdef SOGL_NV_memory_object_sparse
PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glBufferPageCommitmentMemNV = SOGL_NULL;
PFNGLTEXPAGECOMMITMENTMEMNVPROC glTexPageCommitmentMemNV = SOGL_NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glNamedBufferPageCommitmentMemNV = SOGL_NULL;
PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC glTexturePageCommitmentMemNV = SOGL_NULL;
#endif /* SOGL_NV_memory_object_sparse */

#ifdef SOGL_NV_mesh_shader
PFNGLDRAWMESHTASKSNVPROC glDrawMeshTasksNV = SOGL_NULL;
PFNGLDRAWMESHTASKSINDIRECTNVPROC glDrawMeshTasksIndirectNV = SOGL_NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC glMultiDrawMeshTasksIndirectNV = SOGL_NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC glMultiDrawMeshTasksIndirectCountNV = SOGL_NULL;
#endif /* SOGL_NV_mesh_shader */

#ifdef SOGL_NV_path_rendering
PFNGLGENPATHSNVPROC glGenPathsNV = SOGL_NULL;
PFNGLDELETEPATHSNVPROC glDeletePathsNV = SOGL_NULL;
PFNGLISPATHNVPROC glIsPathNV = SOGL_NULL;
PFNGLPATHCOMMANDSNVPROC glPathCommandsNV = SOGL_NULL;
PFNGLPATHCOORDSNVPROC glPathCoordsNV = SOGL_NULL;
PFNGLPATHSUBCOMMANDSNVPROC glPathSubCommandsNV = SOGL_NULL;
PFNGLPATHSUBCOORDSNVPROC glPathSubCoordsNV = SOGL_NULL;
PFNGLPATHSTRINGNVPROC glPathStringNV = SOGL_NULL;
PFNGLPATHGLYPHSNVPROC glPathGlyphsNV = SOGL_NULL;
PFNGLPATHGLYPHRANGENVPROC glPathGlyphRangeNV = SOGL_NULL;
PFNGLWEIGHTPATHSNVPROC glWeightPathsNV = SOGL_NULL;
PFNGLCOPYPATHNVPROC glCopyPathNV = SOGL_NULL;
PFNGLINTERPOLATEPATHSNVPROC glInterpolatePathsNV = SOGL_NULL;
PFNGLTRANSFORMPATHNVPROC glTransformPathNV = SOGL_NULL;
PFNGLPATHPARAMETERIVNVPROC glPathParameterivNV = SOGL_NULL;
PFNGLPATHPARAMETERINVPROC glPathParameteriNV = SOGL_NULL;
PFNGLPATHPARAMETERFVNVPROC glPathParameterfvNV = SOGL_NULL;
PFNGLPATHPARAMETERFNVPROC glPathParameterfNV = SOGL_NULL;
PFNGLPATHDASHARRAYNVPROC glPathDashArrayNV = SOGL_NULL;
PFNGLPATHSTENCILFUNCNVPROC glPathStencilFuncNV = SOGL_NULL;
PFNGLPATHSTENCILDEPTHOFFSETNVPROC glPathStencilDepthOffsetNV = SOGL_NULL;
PFNGLSTENCILFILLPATHNVPROC glStencilFillPathNV = SOGL_NULL;
PFNGLSTENCILSTROKEPATHNVPROC glStencilStrokePathNV = SOGL_NULL;
PFNGLSTENCILFILLPATHINSTANCEDNVPROC glStencilFillPathInstancedNV = SOGL_NULL;
PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glStencilStrokePathInstancedNV = SOGL_NULL;
PFNGLPATHCOVERDEPTHFUNCNVPROC glPathCoverDepthFuncNV = SOGL_NULL;
PFNGLCOVERFILLPATHNVPROC glCoverFillPathNV = SOGL_NULL;
PFNGLCOVERSTROKEPATHNVPROC glCoverStrokePathNV = SOGL_NULL;
PFNGLCOVERFILLPATHINSTANCEDNVPROC glCoverFillPathInstancedNV = SOGL_NULL;
PFNGLCOVERSTROKEPATHINSTANCEDNVPROC glCoverStrokePathInstancedNV = SOGL_NULL;
PFNGLGETPATHPARAMETERIVNVPROC glGetPathParameterivNV = SOGL_NULL;
PFNGLGETPATHPARAMETERFVNVPROC glGetPathParameterfvNV = SOGL_NULL;
PFNGLGETPATHCOMMANDSNVPROC glGetPathCommandsNV = SOGL_NULL;
PFNGLGETPATHCOORDSNVPROC glGetPathCoordsNV = SOGL_NULL;
PFNGLGETPATHDASHARRAYNVPROC glGetPathDashArrayNV = SOGL_NULL;
PFNGLGETPATHMETRICSNVPROC glGetPathMetricsNV = SOGL_NULL;
PFNGLGETPATHMETRICRANGENVPROC glGetPathMetricRangeNV = SOGL_NULL;
PFNGLGETPATHSPACINGNVPROC glGetPathSpacingNV = SOGL_NULL;
PFNGLISPOINTINFILLPATHNVPROC glIsPointInFillPathNV = SOGL_NULL;
PFNGLISPOINTINSTROKEPATHNVPROC glIsPointInStrokePathNV = SOGL_NULL;
PFNGLGETPATHLENGTHNVPROC glGetPathLengthNV = SOGL_NULL;
PFNGLPOINTALONGPATHNVPROC glPointAlongPathNV = SOGL_NULL;
PFNGLMATRIXLOAD3X2FNVPROC glMatrixLoad3x2fNV = SOGL_NULL;
PFNGLMATRIXLOAD3X3FNVPROC glMatrixLoad3x3fNV = SOGL_NULL;
PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC glMatrixLoadTranspose3x3fNV = SOGL_NULL;
PFNGLMATRIXMULT3X2FNVPROC glMatrixMult3x2fNV = SOGL_NULL;
PFNGLMATRIXMULT3X3FNVPROC glMatrixMult3x3fNV = SOGL_NULL;
PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC glMatrixMultTranspose3x3fNV = SOGL_NULL;
PFNGLSTENCILTHENCOVERFILLPATHNVPROC glStencilThenCoverFillPathNV = SOGL_NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC glStencilThenCoverStrokePathNV = SOGL_NULL;
PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC glStencilThenCoverFillPathInstancedNV = SOGL_NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glStencilThenCoverStrokePathInstancedNV = SOGL_NULL;
PFNGLPATHGLYPHINDEXRANGENVPROC glPathGlyphIndexRangeNV = SOGL_NULL;
PFNGLPATHGLYPHINDEXARRAYNVPROC glPathGlyphIndexArrayNV = SOGL_NULL;
PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC glPathMemoryGlyphIndexArrayNV = SOGL_NULL;
PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glProgramPathFragmentInputGenNV = SOGL_NULL;
PFNGLGETPROGRAMRESOURCEFVNVPROC glGetProgramResourcefvNV = SOGL_NULL;
#endif /* SOGL_NV_path_rendering */

#ifdef SOGL_NV_sample_locations
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glFramebufferSampleLocationsfvNV = SOGL_NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glNamedFramebufferSampleLocationsfvNV = SOGL_NULL;
PFNGLRESOLVEDEPTHVALUESNVPROC glResolveDepthValuesNV = SOGL_NULL;
#endif /* SOGL_NV_sample_locations */

#ifdef SOGL_NV_scissor_exclusive
PFNGLSCISSOREXCLUSIVENVPROC glScissorExclusiveNV = SOGL_NULL;
PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glScissorExclusiveArrayvNV = SOGL_NULL;
#endif /* SOGL_NV_scissor_exclusive */

#ifdef SOGL_NV_shader_buffer_load
PFNGLMAKEBUFFERRESIDENTNVPROC glMakeBufferResidentNV = SOGL_NULL;
PFNGLMAKEBUFFERNONRESIDENTNVPROC glMakeBufferNonResidentNV = SOGL_NULL;
PFNGLISBUFFERRESIDENTNVPROC glIsBufferResidentNV = SOGL_NULL;
PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glMakeNamedBufferResidentNV = SOGL_NULL;
PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glMakeNamedBufferNonResidentNV = SOGL_NULL;
PFNGLISNAMEDBUFFERRESIDENTNVPROC glIsNamedBufferResidentNV = SOGL_NULL;
PFNGLGETBUFFERPARAMETERUI64VNVPROC glGetBufferParameterui64vNV = SOGL_NULL;
PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glGetNamedBufferParameterui64vNV = SOGL_NULL;
PFNGLGETINTEGERUI64VNVPROC glGetIntegerui64vNV = SOGL_NULL;
PFNGLUNIFORMUI64NVPROC glUniformui64NV = SOGL_NULL;
PFNGLUNIFORMUI64VNVPROC glUniformui64vNV = SOGL_NULL;
PFNGLGETUNIFORMUI64VNVPROC glGetUniformui64vNV = SOGL_NULL;
PFNGLPROGRAMUNIFORMUI64NVPROC glProgramUniformui64NV = SOGL_NULL;
PFNGLPROGRAMUNIFORMUI64VNVPROC glProgramUniformui64vNV = SOGL_NULL;
#endif /* SOGL_NV_shader_buffer_load */

#ifdef SOGL_NV_shading_rate_image
PFNGLBINDSHADINGRATEIMAGENVPROC glBindShadingRateImageNV = SOGL_NULL;
PFNGLGETSHADINGRATEIMAGEPALETTENVPROC glGetShadingRateImagePaletteNV = SOGL_NULL;
PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC glGetShadingRateSampleLocationivNV = SOGL_NULL;
PFNGLSHADINGRATEIMAGEBARRIERNVPROC glShadingRateImageBarrierNV = SOGL_NULL;
PFNGLSHADINGRATEIMAGEPALETTENVPROC glShadingRateImagePaletteNV = SOGL_NULL;
PFNGLSHADINGRATESAMPLEORDERNVPROC glShadingRateSampleOrderNV = SOGL_NULL;
PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC glShadingRateSampleOrderCustomNV = SOGL_NULL;
#endif /* SOGL_NV_shading_rate_image */

#ifdef SOGL_NV_texture_barrier
PFNGLTEXTUREBARRIERNVPROC glTextureBarrierNV = SOGL_NULL;
#endif /* SOGL_NV_texture_barrier */

#ifdef SOGL_NV_vertex_attrib_integer_64bit
PFNGLVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV = SOGL_NULL;
PFNGLVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV = SOGL_NULL;
PFNGLGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV = SOGL_NULL;
PFNGLGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV = SOGL_NULL;
PFNGLVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV = SOGL_NULL;
#endif /* SOGL_NV_vertex_attrib_integer_64bit */

#ifdef SOGL_NV_vertex_buffer_unified_memory
PFNGLBUFFERADDRESSRANGENVPROC glBufferAddressRangeNV = SOGL_NULL;
PFNGLVERTEXFORMATNVPROC glVertexFormatNV = SOGL_NULL;
PFNGLNORMALFORMATNVPROC glNormalFormatNV = SOGL_NULL;
PFNGLCOLORFORMATNVPROC glColorFormatNV = SOGL_NULL;
PFNGLINDEXFORMATNVPROC glIndexFormatNV = SOGL_NULL;
PFNGLTEXCOORDFORMATNVPROC glTexCoordFormatNV = SOGL_NULL;
PFNGLEDGEFLAGFORMATNVPROC glEdgeFlagFormatNV = SOGL_NULL;
PFNGLSECONDARYCOLORFORMATNVPROC glSecondaryColorFormatNV = SOGL_NULL;
PFNGLFOGCOORDFORMATNVPROC glFogCoordFormatNV = SOGL_NULL;
PFNGLVERTEXATTRIBFORMATNVPROC glVertexAttribFormatNV = SOGL_NULL;
PFNGLVERTEXATTRIBIFORMATNVPROC glVertexAttribIFormatNV = SOGL_NULL;
PFNGLGETINTEGERUI64I_VNVPROC glGetIntegerui64i_vNV = SOGL_NULL;
#endif /* SOGL_NV_vertex_buffer_unified_memory */

#ifdef SOGL_NV_viewport_swizzle
PFNGLVIEWPORTSWIZZLENVPROC glViewportSwizzleNV = SOGL_NULL;
#endif /* SOGL_NV_viewport_swizzle */

#ifdef SOGL_OVR_multiview
PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glFramebufferTextureMultiviewOVR = SOGL_NULL;
#endif /* SOGL_OVR_multiview */

#undef SOGL_NULL

void sogl_loadOpenGL() {

#if SOGL_TEST_VERSION(1, 0)
    glCullFace = (PFNGLCULLFACEPROC) sogl_loadOpenGLFunction("glCullFace");
    glFrontFace = (PFNGLFRONTFACEPROC) sogl_loadOpenGLFunction("glFrontFace");
    glHint = (PFNGLHINTPROC) sogl_loadOpenGLFunction("glHint");
    glLineWidth = (PFNGLLINEWIDTHPROC) sogl_loadOpenGLFunction("glLineWidth");
    glPointSize = (PFNGLPOINTSIZEPROC) sogl_loadOpenGLFunction("glPointSize");
    glPolygonMode = (PFNGLPOLYGONMODEPROC) sogl_loadOpenGLFunction("glPolygonMode");
    glScissor = (PFNGLSCISSORPROC) sogl_loadOpenGLFunction("glScissor");
    glTexParameterf = (PFNGLTEXPARAMETERFPROC) sogl_loadOpenGLFunction("glTexParameterf");
    glTexParameterfv = (PFNGLTEXPARAMETERFVPROC) sogl_loadOpenGLFunction("glTexParameterfv");
    glTexParameteri = (PFNGLTEXPARAMETERIPROC) sogl_loadOpenGLFunction("glTexParameteri");
    glTexParameteriv = (PFNGLTEXPARAMETERIVPROC) sogl_loadOpenGLFunction("glTexParameteriv");
    glTexImage1D = (PFNGLTEXIMAGE1DPROC) sogl_loadOpenGLFunction("glTexImage1D");
    glTexImage2D = (PFNGLTEXIMAGE2DPROC) sogl_loadOpenGLFunction("glTexImage2D");
    glDrawBuffer = (PFNGLDRAWBUFFERPROC) sogl_loadOpenGLFunction("glDrawBuffer");
    glClear = (PFNGLCLEARPROC) sogl_loadOpenGLFunction("glClear");
    glClearColor = (PFNGLCLEARCOLORPROC) sogl_loadOpenGLFunction("glClearColor");
    glClearStencil = (PFNGLCLEARSTENCILPROC) sogl_loadOpenGLFunction("glClearStencil");
    glClearDepth = (PFNGLCLEARDEPTHPROC) sogl_loadOpenGLFunction("glClearDepth");
    glStencilMask = (PFNGLSTENCILMASKPROC) sogl_loadOpenGLFunction("glStencilMask");
    glColorMask = (PFNGLCOLORMASKPROC) sogl_loadOpenGLFunction("glColorMask");
    glDepthMask = (PFNGLDEPTHMASKPROC) sogl_loadOpenGLFunction("glDepthMask");
    glDisable = (PFNGLDISABLEPROC) sogl_loadOpenGLFunction("glDisable");
    glEnable = (PFNGLENABLEPROC) sogl_loadOpenGLFunction("glEnable");
    glFinish = (PFNGLFINISHPROC) sogl_loadOpenGLFunction("glFinish");
    glFlush = (PFNGLFLUSHPROC) sogl_loadOpenGLFunction("glFlush");
    glBlendFunc = (PFNGLBLENDFUNCPROC) sogl_loadOpenGLFunction("glBlendFunc");
    glLogicOp = (PFNGLLOGICOPPROC) sogl_loadOpenGLFunction("glLogicOp");
    glStencilFunc = (PFNGLSTENCILFUNCPROC) sogl_loadOpenGLFunction("glStencilFunc");
    glStencilOp = (PFNGLSTENCILOPPROC) sogl_loadOpenGLFunction("glStencilOp");
    glDepthFunc = (PFNGLDEPTHFUNCPROC) sogl_loadOpenGLFunction("glDepthFunc");
    glPixelStoref = (PFNGLPIXELSTOREFPROC) sogl_loadOpenGLFunction("glPixelStoref");
    glPixelStorei = (PFNGLPIXELSTOREIPROC) sogl_loadOpenGLFunction("glPixelStorei");
    glReadBuffer = (PFNGLREADBUFFERPROC) sogl_loadOpenGLFunction("glReadBuffer");
    glReadPixels = (PFNGLREADPIXELSPROC) sogl_loadOpenGLFunction("glReadPixels");
    glGetBooleanv = (PFNGLGETBOOLEANVPROC) sogl_loadOpenGLFunction("glGetBooleanv");
    glGetDoublev = (PFNGLGETDOUBLEVPROC) sogl_loadOpenGLFunction("glGetDoublev");
    glGetError = (PFNGLGETERRORPROC) sogl_loadOpenGLFunction("glGetError");
    glGetFloatv = (PFNGLGETFLOATVPROC) sogl_loadOpenGLFunction("glGetFloatv");
    glGetIntegerv = (PFNGLGETINTEGERVPROC) sogl_loadOpenGLFunction("glGetIntegerv");
    glGetString = (PFNGLGETSTRINGPROC) sogl_loadOpenGLFunction("glGetString");
    glGetTexImage = (PFNGLGETTEXIMAGEPROC) sogl_loadOpenGLFunction("glGetTexImage");
    glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) sogl_loadOpenGLFunction("glGetTexParameterfv");
    glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetTexParameteriv");
    glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC) sogl_loadOpenGLFunction("glGetTexLevelParameterfv");
    glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetTexLevelParameteriv");
    glIsEnabled = (PFNGLISENABLEDPROC) sogl_loadOpenGLFunction("glIsEnabled");
    glDepthRange = (PFNGLDEPTHRANGEPROC) sogl_loadOpenGLFunction("glDepthRange");
    glViewport = (PFNGLVIEWPORTPROC) sogl_loadOpenGLFunction("glViewport");
#endif /* GL_VERSION_1_0 */

#if SOGL_TEST_VERSION(1, 1)
    glDrawArrays = (PFNGLDRAWARRAYSPROC) sogl_loadOpenGLFunction("glDrawArrays");
    glDrawElements = (PFNGLDRAWELEMENTSPROC) sogl_loadOpenGLFunction("glDrawElements");
    glGetPointerv = (PFNGLGETPOINTERVPROC) sogl_loadOpenGLFunction("glGetPointerv");
    glPolygonOffset = (PFNGLPOLYGONOFFSETPROC) sogl_loadOpenGLFunction("glPolygonOffset");
    glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC) sogl_loadOpenGLFunction("glCopyTexImage1D");
    glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) sogl_loadOpenGLFunction("glCopyTexImage2D");
    glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC) sogl_loadOpenGLFunction("glCopyTexSubImage1D");
    glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) sogl_loadOpenGLFunction("glCopyTexSubImage2D");
    glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC) sogl_loadOpenGLFunction("glTexSubImage1D");
    glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) sogl_loadOpenGLFunction("glTexSubImage2D");
    glBindTexture = (PFNGLBINDTEXTUREPROC) sogl_loadOpenGLFunction("glBindTexture");
    glDeleteTextures = (PFNGLDELETETEXTURESPROC) sogl_loadOpenGLFunction("glDeleteTextures");
    glGenTextures = (PFNGLGENTEXTURESPROC) sogl_loadOpenGLFunction("glGenTextures");
    glIsTexture = (PFNGLISTEXTUREPROC) sogl_loadOpenGLFunction("glIsTexture");
#endif /* GL_VERSION_1_1 */

#if SOGL_TEST_VERSION(1, 2)
    glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) sogl_loadOpenGLFunction("glDrawRangeElements");
    glTexImage3D = (PFNGLTEXIMAGE3DPROC) sogl_loadOpenGLFunction("glTexImage3D");
    glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) sogl_loadOpenGLFunction("glTexSubImage3D");
    glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) sogl_loadOpenGLFunction("glCopyTexSubImage3D");
#endif /* GL_VERSION_1_2 */

#if SOGL_TEST_VERSION(1, 3)
    glActiveTexture = (PFNGLACTIVETEXTUREPROC) sogl_loadOpenGLFunction("glActiveTexture");
    glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) sogl_loadOpenGLFunction("glSampleCoverage");
    glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) sogl_loadOpenGLFunction("glCompressedTexImage3D");
    glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) sogl_loadOpenGLFunction("glCompressedTexImage2D");
    glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) sogl_loadOpenGLFunction("glCompressedTexImage1D");
    glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) sogl_loadOpenGLFunction("glCompressedTexSubImage3D");
    glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) sogl_loadOpenGLFunction("glCompressedTexSubImage2D");
    glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) sogl_loadOpenGLFunction("glCompressedTexSubImage1D");
    glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) sogl_loadOpenGLFunction("glGetCompressedTexImage");
#endif /* GL_VERSION_1_3 */

#if SOGL_TEST_VERSION(1, 4)
    glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) sogl_loadOpenGLFunction("glBlendFuncSeparate");
    glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC) sogl_loadOpenGLFunction("glMultiDrawArrays");
    glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC) sogl_loadOpenGLFunction("glMultiDrawElements");
    glPointParameterf = (PFNGLPOINTPARAMETERFPROC) sogl_loadOpenGLFunction("glPointParameterf");
    glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC) sogl_loadOpenGLFunction("glPointParameterfv");
    glPointParameteri = (PFNGLPOINTPARAMETERIPROC) sogl_loadOpenGLFunction("glPointParameteri");
    glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC) sogl_loadOpenGLFunction("glPointParameteriv");
    glBlendColor = (PFNGLBLENDCOLORPROC) sogl_loadOpenGLFunction("glBlendColor");
    glBlendEquation = (PFNGLBLENDEQUATIONPROC) sogl_loadOpenGLFunction("glBlendEquation");
#endif /* GL_VERSION_1_4 */

#if SOGL_TEST_VERSION(1, 5)
    glGenQueries = (PFNGLGENQUERIESPROC) sogl_loadOpenGLFunction("glGenQueries");
    glDeleteQueries = (PFNGLDELETEQUERIESPROC) sogl_loadOpenGLFunction("glDeleteQueries");
    glIsQuery = (PFNGLISQUERYPROC) sogl_loadOpenGLFunction("glIsQuery");
    glBeginQuery = (PFNGLBEGINQUERYPROC) sogl_loadOpenGLFunction("glBeginQuery");
    glEndQuery = (PFNGLENDQUERYPROC) sogl_loadOpenGLFunction("glEndQuery");
    glGetQueryiv = (PFNGLGETQUERYIVPROC) sogl_loadOpenGLFunction("glGetQueryiv");
    glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC) sogl_loadOpenGLFunction("glGetQueryObjectiv");
    glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) sogl_loadOpenGLFunction("glGetQueryObjectuiv");
    glBindBuffer = (PFNGLBINDBUFFERPROC) sogl_loadOpenGLFunction("glBindBuffer");
    glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) sogl_loadOpenGLFunction("glDeleteBuffers");
    glGenBuffers = (PFNGLGENBUFFERSPROC) sogl_loadOpenGLFunction("glGenBuffers");
    glIsBuffer = (PFNGLISBUFFERPROC) sogl_loadOpenGLFunction("glIsBuffer");
    glBufferData = (PFNGLBUFFERDATAPROC) sogl_loadOpenGLFunction("glBufferData");
    glBufferSubData = (PFNGLBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glBufferSubData");
    glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glGetBufferSubData");
    glMapBuffer = (PFNGLMAPBUFFERPROC) sogl_loadOpenGLFunction("glMapBuffer");
    glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) sogl_loadOpenGLFunction("glUnmapBuffer");
    glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetBufferParameteriv");
    glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) sogl_loadOpenGLFunction("glGetBufferPointerv");
#endif /* GL_VERSION_1_5 */

#if SOGL_TEST_VERSION(2, 0)
    glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) sogl_loadOpenGLFunction("glBlendEquationSeparate");
    glDrawBuffers = (PFNGLDRAWBUFFERSPROC) sogl_loadOpenGLFunction("glDrawBuffers");
    glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) sogl_loadOpenGLFunction("glStencilOpSeparate");
    glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) sogl_loadOpenGLFunction("glStencilFuncSeparate");
    glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) sogl_loadOpenGLFunction("glStencilMaskSeparate");
    glAttachShader = (PFNGLATTACHSHADERPROC) sogl_loadOpenGLFunction("glAttachShader");
    glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) sogl_loadOpenGLFunction("glBindAttribLocation");
    glCompileShader = (PFNGLCOMPILESHADERPROC) sogl_loadOpenGLFunction("glCompileShader");
    glCreateProgram = (PFNGLCREATEPROGRAMPROC) sogl_loadOpenGLFunction("glCreateProgram");
    glCreateShader = (PFNGLCREATESHADERPROC) sogl_loadOpenGLFunction("glCreateShader");
    glDeleteProgram = (PFNGLDELETEPROGRAMPROC) sogl_loadOpenGLFunction("glDeleteProgram");
    glDeleteShader = (PFNGLDELETESHADERPROC) sogl_loadOpenGLFunction("glDeleteShader");
    glDetachShader = (PFNGLDETACHSHADERPROC) sogl_loadOpenGLFunction("glDetachShader");
    glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) sogl_loadOpenGLFunction("glDisableVertexAttribArray");
    glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) sogl_loadOpenGLFunction("glEnableVertexAttribArray");
    glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) sogl_loadOpenGLFunction("glGetActiveAttrib");
    glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) sogl_loadOpenGLFunction("glGetActiveUniform");
    glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) sogl_loadOpenGLFunction("glGetAttachedShaders");
    glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) sogl_loadOpenGLFunction("glGetAttribLocation");
    glGetProgramiv = (PFNGLGETPROGRAMIVPROC) sogl_loadOpenGLFunction("glGetProgramiv");
    glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) sogl_loadOpenGLFunction("glGetProgramInfoLog");
    glGetShaderiv = (PFNGLGETSHADERIVPROC) sogl_loadOpenGLFunction("glGetShaderiv");
    glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) sogl_loadOpenGLFunction("glGetShaderInfoLog");
    glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) sogl_loadOpenGLFunction("glGetShaderSource");
    glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) sogl_loadOpenGLFunction("glGetUniformLocation");
    glGetUniformfv = (PFNGLGETUNIFORMFVPROC) sogl_loadOpenGLFunction("glGetUniformfv");
    glGetUniformiv = (PFNGLGETUNIFORMIVPROC) sogl_loadOpenGLFunction("glGetUniformiv");
    glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC) sogl_loadOpenGLFunction("glGetVertexAttribdv");
    glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) sogl_loadOpenGLFunction("glGetVertexAttribfv");
    glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) sogl_loadOpenGLFunction("glGetVertexAttribiv");
    glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) sogl_loadOpenGLFunction("glGetVertexAttribPointerv");
    glIsProgram = (PFNGLISPROGRAMPROC) sogl_loadOpenGLFunction("glIsProgram");
    glIsShader = (PFNGLISSHADERPROC) sogl_loadOpenGLFunction("glIsShader");
    glLinkProgram = (PFNGLLINKPROGRAMPROC) sogl_loadOpenGLFunction("glLinkProgram");
    glShaderSource = (PFNGLSHADERSOURCEPROC) sogl_loadOpenGLFunction("glShaderSource");
    glUseProgram = (PFNGLUSEPROGRAMPROC) sogl_loadOpenGLFunction("glUseProgram");
    glUniform1f = (PFNGLUNIFORM1FPROC) sogl_loadOpenGLFunction("glUniform1f");
    glUniform2f = (PFNGLUNIFORM2FPROC) sogl_loadOpenGLFunction("glUniform2f");
    glUniform3f = (PFNGLUNIFORM3FPROC) sogl_loadOpenGLFunction("glUniform3f");
    glUniform4f = (PFNGLUNIFORM4FPROC) sogl_loadOpenGLFunction("glUniform4f");
    glUniform1i = (PFNGLUNIFORM1IPROC) sogl_loadOpenGLFunction("glUniform1i");
    glUniform2i = (PFNGLUNIFORM2IPROC) sogl_loadOpenGLFunction("glUniform2i");
    glUniform3i = (PFNGLUNIFORM3IPROC) sogl_loadOpenGLFunction("glUniform3i");
    glUniform4i = (PFNGLUNIFORM4IPROC) sogl_loadOpenGLFunction("glUniform4i");
    glUniform1fv = (PFNGLUNIFORM1FVPROC) sogl_loadOpenGLFunction("glUniform1fv");
    glUniform2fv = (PFNGLUNIFORM2FVPROC) sogl_loadOpenGLFunction("glUniform2fv");
    glUniform3fv = (PFNGLUNIFORM3FVPROC) sogl_loadOpenGLFunction("glUniform3fv");
    glUniform4fv = (PFNGLUNIFORM4FVPROC) sogl_loadOpenGLFunction("glUniform4fv");
    glUniform1iv = (PFNGLUNIFORM1IVPROC) sogl_loadOpenGLFunction("glUniform1iv");
    glUniform2iv = (PFNGLUNIFORM2IVPROC) sogl_loadOpenGLFunction("glUniform2iv");
    glUniform3iv = (PFNGLUNIFORM3IVPROC) sogl_loadOpenGLFunction("glUniform3iv");
    glUniform4iv = (PFNGLUNIFORM4IVPROC) sogl_loadOpenGLFunction("glUniform4iv");
    glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) sogl_loadOpenGLFunction("glUniformMatrix2fv");
    glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) sogl_loadOpenGLFunction("glUniformMatrix3fv");
    glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) sogl_loadOpenGLFunction("glUniformMatrix4fv");
    glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) sogl_loadOpenGLFunction("glValidateProgram");
    glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC) sogl_loadOpenGLFunction("glVertexAttrib1d");
    glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC) sogl_loadOpenGLFunction("glVertexAttrib1dv");
    glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) sogl_loadOpenGLFunction("glVertexAttrib1f");
    glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) sogl_loadOpenGLFunction("glVertexAttrib1fv");
    glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC) sogl_loadOpenGLFunction("glVertexAttrib1s");
    glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC) sogl_loadOpenGLFunction("glVertexAttrib1sv");
    glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC) sogl_loadOpenGLFunction("glVertexAttrib2d");
    glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC) sogl_loadOpenGLFunction("glVertexAttrib2dv");
    glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) sogl_loadOpenGLFunction("glVertexAttrib2f");
    glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) sogl_loadOpenGLFunction("glVertexAttrib2fv");
    glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC) sogl_loadOpenGLFunction("glVertexAttrib2s");
    glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC) sogl_loadOpenGLFunction("glVertexAttrib2sv");
    glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC) sogl_loadOpenGLFunction("glVertexAttrib3d");
    glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC) sogl_loadOpenGLFunction("glVertexAttrib3dv");
    glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) sogl_loadOpenGLFunction("glVertexAttrib3f");
    glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) sogl_loadOpenGLFunction("glVertexAttrib3fv");
    glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC) sogl_loadOpenGLFunction("glVertexAttrib3s");
    glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC) sogl_loadOpenGLFunction("glVertexAttrib3sv");
    glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC) sogl_loadOpenGLFunction("glVertexAttrib4Nbv");
    glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC) sogl_loadOpenGLFunction("glVertexAttrib4Niv");
    glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC) sogl_loadOpenGLFunction("glVertexAttrib4Nsv");
    glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC) sogl_loadOpenGLFunction("glVertexAttrib4Nub");
    glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC) sogl_loadOpenGLFunction("glVertexAttrib4Nubv");
    glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC) sogl_loadOpenGLFunction("glVertexAttrib4Nuiv");
    glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC) sogl_loadOpenGLFunction("glVertexAttrib4Nusv");
    glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC) sogl_loadOpenGLFunction("glVertexAttrib4bv");
    glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC) sogl_loadOpenGLFunction("glVertexAttrib4d");
    glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC) sogl_loadOpenGLFunction("glVertexAttrib4dv");
    glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) sogl_loadOpenGLFunction("glVertexAttrib4f");
    glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) sogl_loadOpenGLFunction("glVertexAttrib4fv");
    glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC) sogl_loadOpenGLFunction("glVertexAttrib4iv");
    glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC) sogl_loadOpenGLFunction("glVertexAttrib4s");
    glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC) sogl_loadOpenGLFunction("glVertexAttrib4sv");
    glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC) sogl_loadOpenGLFunction("glVertexAttrib4ubv");
    glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC) sogl_loadOpenGLFunction("glVertexAttrib4uiv");
    glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC) sogl_loadOpenGLFunction("glVertexAttrib4usv");
    glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) sogl_loadOpenGLFunction("glVertexAttribPointer");
#endif /* GL_VERSION_2_0 */

#if SOGL_TEST_VERSION(2, 1)
    glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) sogl_loadOpenGLFunction("glUniformMatrix2x3fv");
    glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) sogl_loadOpenGLFunction("glUniformMatrix3x2fv");
    glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) sogl_loadOpenGLFunction("glUniformMatrix2x4fv");
    glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) sogl_loadOpenGLFunction("glUniformMatrix4x2fv");
    glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) sogl_loadOpenGLFunction("glUniformMatrix3x4fv");
    glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) sogl_loadOpenGLFunction("glUniformMatrix4x3fv");
#endif /* GL_VERSION_2_1 */

#if SOGL_TEST_VERSION(3, 0)
    glColorMaski = (PFNGLCOLORMASKIPROC) sogl_loadOpenGLFunction("glColorMaski");
    glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC) sogl_loadOpenGLFunction("glGetBooleani_v");
    glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) sogl_loadOpenGLFunction("glGetIntegeri_v");
    glEnablei = (PFNGLENABLEIPROC) sogl_loadOpenGLFunction("glEnablei");
    glDisablei = (PFNGLDISABLEIPROC) sogl_loadOpenGLFunction("glDisablei");
    glIsEnabledi = (PFNGLISENABLEDIPROC) sogl_loadOpenGLFunction("glIsEnabledi");
    glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) sogl_loadOpenGLFunction("glBeginTransformFeedback");
    glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) sogl_loadOpenGLFunction("glEndTransformFeedback");
    glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) sogl_loadOpenGLFunction("glBindBufferRange");
    glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) sogl_loadOpenGLFunction("glBindBufferBase");
    glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) sogl_loadOpenGLFunction("glTransformFeedbackVaryings");
    glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) sogl_loadOpenGLFunction("glGetTransformFeedbackVarying");
    glClampColor = (PFNGLCLAMPCOLORPROC) sogl_loadOpenGLFunction("glClampColor");
    glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC) sogl_loadOpenGLFunction("glBeginConditionalRender");
    glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC) sogl_loadOpenGLFunction("glEndConditionalRender");
    glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) sogl_loadOpenGLFunction("glVertexAttribIPointer");
    glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) sogl_loadOpenGLFunction("glGetVertexAttribIiv");
    glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) sogl_loadOpenGLFunction("glGetVertexAttribIuiv");
    glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC) sogl_loadOpenGLFunction("glVertexAttribI1i");
    glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC) sogl_loadOpenGLFunction("glVertexAttribI2i");
    glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC) sogl_loadOpenGLFunction("glVertexAttribI3i");
    glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) sogl_loadOpenGLFunction("glVertexAttribI4i");
    glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC) sogl_loadOpenGLFunction("glVertexAttribI1ui");
    glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC) sogl_loadOpenGLFunction("glVertexAttribI2ui");
    glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC) sogl_loadOpenGLFunction("glVertexAttribI3ui");
    glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) sogl_loadOpenGLFunction("glVertexAttribI4ui");
    glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC) sogl_loadOpenGLFunction("glVertexAttribI1iv");
    glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC) sogl_loadOpenGLFunction("glVertexAttribI2iv");
    glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC) sogl_loadOpenGLFunction("glVertexAttribI3iv");
    glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) sogl_loadOpenGLFunction("glVertexAttribI4iv");
    glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC) sogl_loadOpenGLFunction("glVertexAttribI1uiv");
    glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC) sogl_loadOpenGLFunction("glVertexAttribI2uiv");
    glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC) sogl_loadOpenGLFunction("glVertexAttribI3uiv");
    glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) sogl_loadOpenGLFunction("glVertexAttribI4uiv");
    glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC) sogl_loadOpenGLFunction("glVertexAttribI4bv");
    glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC) sogl_loadOpenGLFunction("glVertexAttribI4sv");
    glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC) sogl_loadOpenGLFunction("glVertexAttribI4ubv");
    glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC) sogl_loadOpenGLFunction("glVertexAttribI4usv");
    glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) sogl_loadOpenGLFunction("glGetUniformuiv");
    glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC) sogl_loadOpenGLFunction("glBindFragDataLocation");
    glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) sogl_loadOpenGLFunction("glGetFragDataLocation");
    glUniform1ui = (PFNGLUNIFORM1UIPROC) sogl_loadOpenGLFunction("glUniform1ui");
    glUniform2ui = (PFNGLUNIFORM2UIPROC) sogl_loadOpenGLFunction("glUniform2ui");
    glUniform3ui = (PFNGLUNIFORM3UIPROC) sogl_loadOpenGLFunction("glUniform3ui");
    glUniform4ui = (PFNGLUNIFORM4UIPROC) sogl_loadOpenGLFunction("glUniform4ui");
    glUniform1uiv = (PFNGLUNIFORM1UIVPROC) sogl_loadOpenGLFunction("glUniform1uiv");
    glUniform2uiv = (PFNGLUNIFORM2UIVPROC) sogl_loadOpenGLFunction("glUniform2uiv");
    glUniform3uiv = (PFNGLUNIFORM3UIVPROC) sogl_loadOpenGLFunction("glUniform3uiv");
    glUniform4uiv = (PFNGLUNIFORM4UIVPROC) sogl_loadOpenGLFunction("glUniform4uiv");
    glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) sogl_loadOpenGLFunction("glTexParameterIiv");
    glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) sogl_loadOpenGLFunction("glTexParameterIuiv");
    glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) sogl_loadOpenGLFunction("glGetTexParameterIiv");
    glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) sogl_loadOpenGLFunction("glGetTexParameterIuiv");
    glClearBufferiv = (PFNGLCLEARBUFFERIVPROC) sogl_loadOpenGLFunction("glClearBufferiv");
    glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) sogl_loadOpenGLFunction("glClearBufferuiv");
    glClearBufferfv = (PFNGLCLEARBUFFERFVPROC) sogl_loadOpenGLFunction("glClearBufferfv");
    glClearBufferfi = (PFNGLCLEARBUFFERFIPROC) sogl_loadOpenGLFunction("glClearBufferfi");
    glGetStringi = (PFNGLGETSTRINGIPROC) sogl_loadOpenGLFunction("glGetStringi");
    glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) sogl_loadOpenGLFunction("glIsRenderbuffer");
    glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) sogl_loadOpenGLFunction("glBindRenderbuffer");
    glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) sogl_loadOpenGLFunction("glDeleteRenderbuffers");
    glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) sogl_loadOpenGLFunction("glGenRenderbuffers");
    glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) sogl_loadOpenGLFunction("glRenderbufferStorage");
    glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetRenderbufferParameteriv");
    glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) sogl_loadOpenGLFunction("glIsFramebuffer");
    glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) sogl_loadOpenGLFunction("glBindFramebuffer");
    glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) sogl_loadOpenGLFunction("glDeleteFramebuffers");
    glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) sogl_loadOpenGLFunction("glGenFramebuffers");
    glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) sogl_loadOpenGLFunction("glCheckFramebufferStatus");
    glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) sogl_loadOpenGLFunction("glFramebufferTexture1D");
    glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) sogl_loadOpenGLFunction("glFramebufferTexture2D");
    glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) sogl_loadOpenGLFunction("glFramebufferTexture3D");
    glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) sogl_loadOpenGLFunction("glFramebufferRenderbuffer");
    glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetFramebufferAttachmentParameteriv");
    glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) sogl_loadOpenGLFunction("glGenerateMipmap");
    glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) sogl_loadOpenGLFunction("glBlitFramebuffer");
    glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) sogl_loadOpenGLFunction("glRenderbufferStorageMultisample");
    glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) sogl_loadOpenGLFunction("glFramebufferTextureLayer");
    glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) sogl_loadOpenGLFunction("glMapBufferRange");
    glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) sogl_loadOpenGLFunction("glFlushMappedBufferRange");
    glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) sogl_loadOpenGLFunction("glBindVertexArray");
    glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) sogl_loadOpenGLFunction("glDeleteVertexArrays");
    glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) sogl_loadOpenGLFunction("glGenVertexArrays");
    glIsVertexArray = (PFNGLISVERTEXARRAYPROC) sogl_loadOpenGLFunction("glIsVertexArray");
#endif /* GL_VERSION_3_0 */

#if SOGL_TEST_VERSION(3, 1)
    glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) sogl_loadOpenGLFunction("glDrawArraysInstanced");
    glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) sogl_loadOpenGLFunction("glDrawElementsInstanced");
    glTexBuffer = (PFNGLTEXBUFFERPROC) sogl_loadOpenGLFunction("glTexBuffer");
    glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC) sogl_loadOpenGLFunction("glPrimitiveRestartIndex");
    glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glCopyBufferSubData");
    glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) sogl_loadOpenGLFunction("glGetUniformIndices");
    glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) sogl_loadOpenGLFunction("glGetActiveUniformsiv");
    glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) sogl_loadOpenGLFunction("glGetActiveUniformName");
    glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) sogl_loadOpenGLFunction("glGetUniformBlockIndex");
    glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) sogl_loadOpenGLFunction("glGetActiveUniformBlockiv");
    glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) sogl_loadOpenGLFunction("glGetActiveUniformBlockName");
    glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) sogl_loadOpenGLFunction("glUniformBlockBinding");
#endif /* GL_VERSION_3_1 */

#if SOGL_TEST_VERSION(3, 2)
    glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) sogl_loadOpenGLFunction("glDrawElementsBaseVertex");
    glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) sogl_loadOpenGLFunction("glDrawRangeElementsBaseVertex");
    glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) sogl_loadOpenGLFunction("glDrawElementsInstancedBaseVertex");
    glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) sogl_loadOpenGLFunction("glMultiDrawElementsBaseVertex");
    glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) sogl_loadOpenGLFunction("glProvokingVertex");
    glFenceSync = (PFNGLFENCESYNCPROC) sogl_loadOpenGLFunction("glFenceSync");
    glIsSync = (PFNGLISSYNCPROC) sogl_loadOpenGLFunction("glIsSync");
    glDeleteSync = (PFNGLDELETESYNCPROC) sogl_loadOpenGLFunction("glDeleteSync");
    glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) sogl_loadOpenGLFunction("glClientWaitSync");
    glWaitSync = (PFNGLWAITSYNCPROC) sogl_loadOpenGLFunction("glWaitSync");
    glGetInteger64v = (PFNGLGETINTEGER64VPROC) sogl_loadOpenGLFunction("glGetInteger64v");
    glGetSynciv = (PFNGLGETSYNCIVPROC) sogl_loadOpenGLFunction("glGetSynciv");
    glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) sogl_loadOpenGLFunction("glGetInteger64i_v");
    glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) sogl_loadOpenGLFunction("glGetBufferParameteri64v");
    glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC) sogl_loadOpenGLFunction("glFramebufferTexture");
    glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) sogl_loadOpenGLFunction("glTexImage2DMultisample");
    glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) sogl_loadOpenGLFunction("glTexImage3DMultisample");
    glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) sogl_loadOpenGLFunction("glGetMultisamplefv");
    glSampleMaski = (PFNGLSAMPLEMASKIPROC) sogl_loadOpenGLFunction("glSampleMaski");
#endif /* GL_VERSION_3_2 */

#if SOGL_TEST_VERSION(3, 3)
    glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) sogl_loadOpenGLFunction("glBindFragDataLocationIndexed");
    glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) sogl_loadOpenGLFunction("glGetFragDataIndex");
    glGenSamplers = (PFNGLGENSAMPLERSPROC) sogl_loadOpenGLFunction("glGenSamplers");
    glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) sogl_loadOpenGLFunction("glDeleteSamplers");
    glIsSampler = (PFNGLISSAMPLERPROC) sogl_loadOpenGLFunction("glIsSampler");
    glBindSampler = (PFNGLBINDSAMPLERPROC) sogl_loadOpenGLFunction("glBindSampler");
    glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) sogl_loadOpenGLFunction("glSamplerParameteri");
    glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) sogl_loadOpenGLFunction("glSamplerParameteriv");
    glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) sogl_loadOpenGLFunction("glSamplerParameterf");
    glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) sogl_loadOpenGLFunction("glSamplerParameterfv");
    glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) sogl_loadOpenGLFunction("glSamplerParameterIiv");
    glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) sogl_loadOpenGLFunction("glSamplerParameterIuiv");
    glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetSamplerParameteriv");
    glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) sogl_loadOpenGLFunction("glGetSamplerParameterIiv");
    glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) sogl_loadOpenGLFunction("glGetSamplerParameterfv");
    glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) sogl_loadOpenGLFunction("glGetSamplerParameterIuiv");
    glQueryCounter = (PFNGLQUERYCOUNTERPROC) sogl_loadOpenGLFunction("glQueryCounter");
    glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) sogl_loadOpenGLFunction("glGetQueryObjecti64v");
    glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) sogl_loadOpenGLFunction("glGetQueryObjectui64v");
    glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) sogl_loadOpenGLFunction("glVertexAttribDivisor");
    glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) sogl_loadOpenGLFunction("glVertexAttribP1ui");
    glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) sogl_loadOpenGLFunction("glVertexAttribP1uiv");
    glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) sogl_loadOpenGLFunction("glVertexAttribP2ui");
    glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) sogl_loadOpenGLFunction("glVertexAttribP2uiv");
    glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) sogl_loadOpenGLFunction("glVertexAttribP3ui");
    glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) sogl_loadOpenGLFunction("glVertexAttribP3uiv");
    glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) sogl_loadOpenGLFunction("glVertexAttribP4ui");
    glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) sogl_loadOpenGLFunction("glVertexAttribP4uiv");
#endif /* GL_VERSION_3_3 */

#if SOGL_TEST_VERSION(4, 0)
    glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC) sogl_loadOpenGLFunction("glMinSampleShading");
    glBlendEquationi = (PFNGLBLENDEQUATIONIPROC) sogl_loadOpenGLFunction("glBlendEquationi");
    glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC) sogl_loadOpenGLFunction("glBlendEquationSeparatei");
    glBlendFunci = (PFNGLBLENDFUNCIPROC) sogl_loadOpenGLFunction("glBlendFunci");
    glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC) sogl_loadOpenGLFunction("glBlendFuncSeparatei");
    glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) sogl_loadOpenGLFunction("glDrawArraysIndirect");
    glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) sogl_loadOpenGLFunction("glDrawElementsIndirect");
    glUniform1d = (PFNGLUNIFORM1DPROC) sogl_loadOpenGLFunction("glUniform1d");
    glUniform2d = (PFNGLUNIFORM2DPROC) sogl_loadOpenGLFunction("glUniform2d");
    glUniform3d = (PFNGLUNIFORM3DPROC) sogl_loadOpenGLFunction("glUniform3d");
    glUniform4d = (PFNGLUNIFORM4DPROC) sogl_loadOpenGLFunction("glUniform4d");
    glUniform1dv = (PFNGLUNIFORM1DVPROC) sogl_loadOpenGLFunction("glUniform1dv");
    glUniform2dv = (PFNGLUNIFORM2DVPROC) sogl_loadOpenGLFunction("glUniform2dv");
    glUniform3dv = (PFNGLUNIFORM3DVPROC) sogl_loadOpenGLFunction("glUniform3dv");
    glUniform4dv = (PFNGLUNIFORM4DVPROC) sogl_loadOpenGLFunction("glUniform4dv");
    glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) sogl_loadOpenGLFunction("glUniformMatrix2dv");
    glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) sogl_loadOpenGLFunction("glUniformMatrix3dv");
    glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) sogl_loadOpenGLFunction("glUniformMatrix4dv");
    glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) sogl_loadOpenGLFunction("glUniformMatrix2x3dv");
    glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) sogl_loadOpenGLFunction("glUniformMatrix2x4dv");
    glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) sogl_loadOpenGLFunction("glUniformMatrix3x2dv");
    glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) sogl_loadOpenGLFunction("glUniformMatrix3x4dv");
    glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) sogl_loadOpenGLFunction("glUniformMatrix4x2dv");
    glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) sogl_loadOpenGLFunction("glUniformMatrix4x3dv");
    glGetUniformdv = (PFNGLGETUNIFORMDVPROC) sogl_loadOpenGLFunction("glGetUniformdv");
    glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) sogl_loadOpenGLFunction("glGetSubroutineUniformLocation");
    glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) sogl_loadOpenGLFunction("glGetSubroutineIndex");
    glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) sogl_loadOpenGLFunction("glGetActiveSubroutineUniformiv");
    glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) sogl_loadOpenGLFunction("glGetActiveSubroutineUniformName");
    glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) sogl_loadOpenGLFunction("glGetActiveSubroutineName");
    glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) sogl_loadOpenGLFunction("glUniformSubroutinesuiv");
    glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) sogl_loadOpenGLFunction("glGetUniformSubroutineuiv");
    glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) sogl_loadOpenGLFunction("glGetProgramStageiv");
    glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) sogl_loadOpenGLFunction("glPatchParameteri");
    glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) sogl_loadOpenGLFunction("glPatchParameterfv");
    glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) sogl_loadOpenGLFunction("glBindTransformFeedback");
    glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) sogl_loadOpenGLFunction("glDeleteTransformFeedbacks");
    glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) sogl_loadOpenGLFunction("glGenTransformFeedbacks");
    glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) sogl_loadOpenGLFunction("glIsTransformFeedback");
    glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) sogl_loadOpenGLFunction("glPauseTransformFeedback");
    glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) sogl_loadOpenGLFunction("glResumeTransformFeedback");
    glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) sogl_loadOpenGLFunction("glDrawTransformFeedback");
    glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) sogl_loadOpenGLFunction("glDrawTransformFeedbackStream");
    glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) sogl_loadOpenGLFunction("glBeginQueryIndexed");
    glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) sogl_loadOpenGLFunction("glEndQueryIndexed");
    glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) sogl_loadOpenGLFunction("glGetQueryIndexediv");
#endif /* GL_VERSION_4_0 */

#if SOGL_TEST_VERSION(4, 1)
    glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) sogl_loadOpenGLFunction("glReleaseShaderCompiler");
    glShaderBinary = (PFNGLSHADERBINARYPROC) sogl_loadOpenGLFunction("glShaderBinary");
    glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) sogl_loadOpenGLFunction("glGetShaderPrecisionFormat");
    glDepthRangef = (PFNGLDEPTHRANGEFPROC) sogl_loadOpenGLFunction("glDepthRangef");
    glClearDepthf = (PFNGLCLEARDEPTHFPROC) sogl_loadOpenGLFunction("glClearDepthf");
    glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) sogl_loadOpenGLFunction("glGetProgramBinary");
    glProgramBinary = (PFNGLPROGRAMBINARYPROC) sogl_loadOpenGLFunction("glProgramBinary");
    glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) sogl_loadOpenGLFunction("glProgramParameteri");
    glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) sogl_loadOpenGLFunction("glUseProgramStages");
    glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) sogl_loadOpenGLFunction("glActiveShaderProgram");
    glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) sogl_loadOpenGLFunction("glCreateShaderProgramv");
    glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) sogl_loadOpenGLFunction("glBindProgramPipeline");
    glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) sogl_loadOpenGLFunction("glDeleteProgramPipelines");
    glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) sogl_loadOpenGLFunction("glGenProgramPipelines");
    glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) sogl_loadOpenGLFunction("glIsProgramPipeline");
    glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) sogl_loadOpenGLFunction("glGetProgramPipelineiv");
    glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) sogl_loadOpenGLFunction("glProgramUniform1i");
    glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) sogl_loadOpenGLFunction("glProgramUniform1iv");
    glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) sogl_loadOpenGLFunction("glProgramUniform1f");
    glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) sogl_loadOpenGLFunction("glProgramUniform1fv");
    glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) sogl_loadOpenGLFunction("glProgramUniform1d");
    glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) sogl_loadOpenGLFunction("glProgramUniform1dv");
    glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) sogl_loadOpenGLFunction("glProgramUniform1ui");
    glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) sogl_loadOpenGLFunction("glProgramUniform1uiv");
    glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) sogl_loadOpenGLFunction("glProgramUniform2i");
    glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) sogl_loadOpenGLFunction("glProgramUniform2iv");
    glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) sogl_loadOpenGLFunction("glProgramUniform2f");
    glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) sogl_loadOpenGLFunction("glProgramUniform2fv");
    glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) sogl_loadOpenGLFunction("glProgramUniform2d");
    glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) sogl_loadOpenGLFunction("glProgramUniform2dv");
    glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) sogl_loadOpenGLFunction("glProgramUniform2ui");
    glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) sogl_loadOpenGLFunction("glProgramUniform2uiv");
    glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) sogl_loadOpenGLFunction("glProgramUniform3i");
    glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) sogl_loadOpenGLFunction("glProgramUniform3iv");
    glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) sogl_loadOpenGLFunction("glProgramUniform3f");
    glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) sogl_loadOpenGLFunction("glProgramUniform3fv");
    glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) sogl_loadOpenGLFunction("glProgramUniform3d");
    glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) sogl_loadOpenGLFunction("glProgramUniform3dv");
    glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) sogl_loadOpenGLFunction("glProgramUniform3ui");
    glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) sogl_loadOpenGLFunction("glProgramUniform3uiv");
    glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) sogl_loadOpenGLFunction("glProgramUniform4i");
    glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) sogl_loadOpenGLFunction("glProgramUniform4iv");
    glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) sogl_loadOpenGLFunction("glProgramUniform4f");
    glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) sogl_loadOpenGLFunction("glProgramUniform4fv");
    glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) sogl_loadOpenGLFunction("glProgramUniform4d");
    glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) sogl_loadOpenGLFunction("glProgramUniform4dv");
    glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) sogl_loadOpenGLFunction("glProgramUniform4ui");
    glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) sogl_loadOpenGLFunction("glProgramUniform4uiv");
    glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2fv");
    glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3fv");
    glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4fv");
    glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2dv");
    glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3dv");
    glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4dv");
    glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x3fv");
    glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x2fv");
    glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x4fv");
    glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x2fv");
    glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x4fv");
    glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x3fv");
    glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x3dv");
    glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x2dv");
    glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x4dv");
    glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x2dv");
    glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x4dv");
    glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x3dv");
    glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) sogl_loadOpenGLFunction("glValidateProgramPipeline");
    glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) sogl_loadOpenGLFunction("glGetProgramPipelineInfoLog");
    glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) sogl_loadOpenGLFunction("glVertexAttribL1d");
    glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) sogl_loadOpenGLFunction("glVertexAttribL2d");
    glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) sogl_loadOpenGLFunction("glVertexAttribL3d");
    glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) sogl_loadOpenGLFunction("glVertexAttribL4d");
    glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) sogl_loadOpenGLFunction("glVertexAttribL1dv");
    glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) sogl_loadOpenGLFunction("glVertexAttribL2dv");
    glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) sogl_loadOpenGLFunction("glVertexAttribL3dv");
    glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) sogl_loadOpenGLFunction("glVertexAttribL4dv");
    glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) sogl_loadOpenGLFunction("glVertexAttribLPointer");
    glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) sogl_loadOpenGLFunction("glGetVertexAttribLdv");
    glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) sogl_loadOpenGLFunction("glViewportArrayv");
    glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) sogl_loadOpenGLFunction("glViewportIndexedf");
    glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) sogl_loadOpenGLFunction("glViewportIndexedfv");
    glScissorArrayv = (PFNGLSCISSORARRAYVPROC) sogl_loadOpenGLFunction("glScissorArrayv");
    glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) sogl_loadOpenGLFunction("glScissorIndexed");
    glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) sogl_loadOpenGLFunction("glScissorIndexedv");
    glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) sogl_loadOpenGLFunction("glDepthRangeArrayv");
    glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) sogl_loadOpenGLFunction("glDepthRangeIndexed");
    glGetFloati_v = (PFNGLGETFLOATI_VPROC) sogl_loadOpenGLFunction("glGetFloati_v");
    glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) sogl_loadOpenGLFunction("glGetDoublei_v");
#endif /* GL_VERSION_4_1 */

#if SOGL_TEST_VERSION(4, 2)
    glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) sogl_loadOpenGLFunction("glDrawArraysInstancedBaseInstance");
    glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) sogl_loadOpenGLFunction("glDrawElementsInstancedBaseInstance");
    glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) sogl_loadOpenGLFunction("glDrawElementsInstancedBaseVertexBaseInstance");
    glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) sogl_loadOpenGLFunction("glGetInternalformativ");
    glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) sogl_loadOpenGLFunction("glGetActiveAtomicCounterBufferiv");
    glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) sogl_loadOpenGLFunction("glBindImageTexture");
    glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) sogl_loadOpenGLFunction("glMemoryBarrier");
    glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) sogl_loadOpenGLFunction("glTexStorage1D");
    glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) sogl_loadOpenGLFunction("glTexStorage2D");
    glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) sogl_loadOpenGLFunction("glTexStorage3D");
    glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) sogl_loadOpenGLFunction("glDrawTransformFeedbackInstanced");
    glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) sogl_loadOpenGLFunction("glDrawTransformFeedbackStreamInstanced");
#endif /* GL_VERSION_4_2 */

#if SOGL_TEST_VERSION(4, 3)
    glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) sogl_loadOpenGLFunction("glClearBufferData");
    glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glClearBufferSubData");
    glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) sogl_loadOpenGLFunction("glDispatchCompute");
    glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) sogl_loadOpenGLFunction("glDispatchComputeIndirect");
    glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) sogl_loadOpenGLFunction("glCopyImageSubData");
    glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) sogl_loadOpenGLFunction("glFramebufferParameteri");
    glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetFramebufferParameteriv");
    glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) sogl_loadOpenGLFunction("glGetInternalformati64v");
    glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) sogl_loadOpenGLFunction("glInvalidateTexSubImage");
    glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) sogl_loadOpenGLFunction("glInvalidateTexImage");
    glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glInvalidateBufferSubData");
    glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) sogl_loadOpenGLFunction("glInvalidateBufferData");
    glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) sogl_loadOpenGLFunction("glInvalidateFramebuffer");
    glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) sogl_loadOpenGLFunction("glInvalidateSubFramebuffer");
    glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) sogl_loadOpenGLFunction("glMultiDrawArraysIndirect");
    glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) sogl_loadOpenGLFunction("glMultiDrawElementsIndirect");
    glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) sogl_loadOpenGLFunction("glGetProgramInterfaceiv");
    glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) sogl_loadOpenGLFunction("glGetProgramResourceIndex");
    glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) sogl_loadOpenGLFunction("glGetProgramResourceName");
    glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) sogl_loadOpenGLFunction("glGetProgramResourceiv");
    glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) sogl_loadOpenGLFunction("glGetProgramResourceLocation");
    glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) sogl_loadOpenGLFunction("glGetProgramResourceLocationIndex");
    glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) sogl_loadOpenGLFunction("glShaderStorageBlockBinding");
    glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) sogl_loadOpenGLFunction("glTexBufferRange");
    glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) sogl_loadOpenGLFunction("glTexStorage2DMultisample");
    glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) sogl_loadOpenGLFunction("glTexStorage3DMultisample");
    glTextureView = (PFNGLTEXTUREVIEWPROC) sogl_loadOpenGLFunction("glTextureView");
    glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) sogl_loadOpenGLFunction("glBindVertexBuffer");
    glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) sogl_loadOpenGLFunction("glVertexAttribFormat");
    glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) sogl_loadOpenGLFunction("glVertexAttribIFormat");
    glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) sogl_loadOpenGLFunction("glVertexAttribLFormat");
    glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) sogl_loadOpenGLFunction("glVertexAttribBinding");
    glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) sogl_loadOpenGLFunction("glVertexBindingDivisor");
    glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC) sogl_loadOpenGLFunction("glDebugMessageControl");
    glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC) sogl_loadOpenGLFunction("glDebugMessageInsert");
    glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC) sogl_loadOpenGLFunction("glDebugMessageCallback");
    glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC) sogl_loadOpenGLFunction("glGetDebugMessageLog");
    glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC) sogl_loadOpenGLFunction("glPushDebugGroup");
    glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC) sogl_loadOpenGLFunction("glPopDebugGroup");
    glObjectLabel = (PFNGLOBJECTLABELPROC) sogl_loadOpenGLFunction("glObjectLabel");
    glGetObjectLabel = (PFNGLGETOBJECTLABELPROC) sogl_loadOpenGLFunction("glGetObjectLabel");
    glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC) sogl_loadOpenGLFunction("glObjectPtrLabel");
    glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC) sogl_loadOpenGLFunction("glGetObjectPtrLabel");
#endif /* GL_VERSION_4_3 */

#if SOGL_TEST_VERSION(4, 4)
    glBufferStorage = (PFNGLBUFFERSTORAGEPROC) sogl_loadOpenGLFunction("glBufferStorage");
    glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) sogl_loadOpenGLFunction("glClearTexImage");
    glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) sogl_loadOpenGLFunction("glClearTexSubImage");
    glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) sogl_loadOpenGLFunction("glBindBuffersBase");
    glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) sogl_loadOpenGLFunction("glBindBuffersRange");
    glBindTextures = (PFNGLBINDTEXTURESPROC) sogl_loadOpenGLFunction("glBindTextures");
    glBindSamplers = (PFNGLBINDSAMPLERSPROC) sogl_loadOpenGLFunction("glBindSamplers");
    glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) sogl_loadOpenGLFunction("glBindImageTextures");
    glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) sogl_loadOpenGLFunction("glBindVertexBuffers");
#endif /* GL_VERSION_4_4 */

#if SOGL_TEST_VERSION(4, 5)
    glClipControl = (PFNGLCLIPCONTROLPROC) sogl_loadOpenGLFunction("glClipControl");
    glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) sogl_loadOpenGLFunction("glCreateTransformFeedbacks");
    glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) sogl_loadOpenGLFunction("glTransformFeedbackBufferBase");
    glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) sogl_loadOpenGLFunction("glTransformFeedbackBufferRange");
    glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) sogl_loadOpenGLFunction("glGetTransformFeedbackiv");
    glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) sogl_loadOpenGLFunction("glGetTransformFeedbacki_v");
    glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) sogl_loadOpenGLFunction("glGetTransformFeedbacki64_v");
    glCreateBuffers = (PFNGLCREATEBUFFERSPROC) sogl_loadOpenGLFunction("glCreateBuffers");
    glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) sogl_loadOpenGLFunction("glNamedBufferStorage");
    glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) sogl_loadOpenGLFunction("glNamedBufferData");
    glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glNamedBufferSubData");
    glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glCopyNamedBufferSubData");
    glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) sogl_loadOpenGLFunction("glClearNamedBufferData");
    glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glClearNamedBufferSubData");
    glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) sogl_loadOpenGLFunction("glMapNamedBuffer");
    glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) sogl_loadOpenGLFunction("glMapNamedBufferRange");
    glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) sogl_loadOpenGLFunction("glUnmapNamedBuffer");
    glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) sogl_loadOpenGLFunction("glFlushMappedNamedBufferRange");
    glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetNamedBufferParameteriv");
    glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) sogl_loadOpenGLFunction("glGetNamedBufferParameteri64v");
    glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) sogl_loadOpenGLFunction("glGetNamedBufferPointerv");
    glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glGetNamedBufferSubData");
    glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) sogl_loadOpenGLFunction("glCreateFramebuffers");
    glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) sogl_loadOpenGLFunction("glNamedFramebufferRenderbuffer");
    glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) sogl_loadOpenGLFunction("glNamedFramebufferParameteri");
    glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) sogl_loadOpenGLFunction("glNamedFramebufferTexture");
    glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) sogl_loadOpenGLFunction("glNamedFramebufferTextureLayer");
    glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) sogl_loadOpenGLFunction("glNamedFramebufferDrawBuffer");
    glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) sogl_loadOpenGLFunction("glNamedFramebufferDrawBuffers");
    glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) sogl_loadOpenGLFunction("glNamedFramebufferReadBuffer");
    glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) sogl_loadOpenGLFunction("glInvalidateNamedFramebufferData");
    glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) sogl_loadOpenGLFunction("glInvalidateNamedFramebufferSubData");
    glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) sogl_loadOpenGLFunction("glClearNamedFramebufferiv");
    glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) sogl_loadOpenGLFunction("glClearNamedFramebufferuiv");
    glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) sogl_loadOpenGLFunction("glClearNamedFramebufferfv");
    glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) sogl_loadOpenGLFunction("glClearNamedFramebufferfi");
    glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) sogl_loadOpenGLFunction("glBlitNamedFramebuffer");
    glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) sogl_loadOpenGLFunction("glCheckNamedFramebufferStatus");
    glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetNamedFramebufferParameteriv");
    glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetNamedFramebufferAttachmentParameteriv");
    glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) sogl_loadOpenGLFunction("glCreateRenderbuffers");
    glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) sogl_loadOpenGLFunction("glNamedRenderbufferStorage");
    glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) sogl_loadOpenGLFunction("glNamedRenderbufferStorageMultisample");
    glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetNamedRenderbufferParameteriv");
    glCreateTextures = (PFNGLCREATETEXTURESPROC) sogl_loadOpenGLFunction("glCreateTextures");
    glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) sogl_loadOpenGLFunction("glTextureBuffer");
    glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) sogl_loadOpenGLFunction("glTextureBufferRange");
    glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) sogl_loadOpenGLFunction("glTextureStorage1D");
    glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) sogl_loadOpenGLFunction("glTextureStorage2D");
    glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) sogl_loadOpenGLFunction("glTextureStorage3D");
    glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) sogl_loadOpenGLFunction("glTextureStorage2DMultisample");
    glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) sogl_loadOpenGLFunction("glTextureStorage3DMultisample");
    glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) sogl_loadOpenGLFunction("glTextureSubImage1D");
    glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) sogl_loadOpenGLFunction("glTextureSubImage2D");
    glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) sogl_loadOpenGLFunction("glTextureSubImage3D");
    glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) sogl_loadOpenGLFunction("glCompressedTextureSubImage1D");
    glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) sogl_loadOpenGLFunction("glCompressedTextureSubImage2D");
    glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) sogl_loadOpenGLFunction("glCompressedTextureSubImage3D");
    glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) sogl_loadOpenGLFunction("glCopyTextureSubImage1D");
    glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) sogl_loadOpenGLFunction("glCopyTextureSubImage2D");
    glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) sogl_loadOpenGLFunction("glCopyTextureSubImage3D");
    glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) sogl_loadOpenGLFunction("glTextureParameterf");
    glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) sogl_loadOpenGLFunction("glTextureParameterfv");
    glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) sogl_loadOpenGLFunction("glTextureParameteri");
    glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) sogl_loadOpenGLFunction("glTextureParameterIiv");
    glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) sogl_loadOpenGLFunction("glTextureParameterIuiv");
    glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) sogl_loadOpenGLFunction("glTextureParameteriv");
    glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) sogl_loadOpenGLFunction("glGenerateTextureMipmap");
    glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) sogl_loadOpenGLFunction("glBindTextureUnit");
    glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) sogl_loadOpenGLFunction("glGetTextureImage");
    glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) sogl_loadOpenGLFunction("glGetCompressedTextureImage");
    glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) sogl_loadOpenGLFunction("glGetTextureLevelParameterfv");
    glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetTextureLevelParameteriv");
    glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) sogl_loadOpenGLFunction("glGetTextureParameterfv");
    glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) sogl_loadOpenGLFunction("glGetTextureParameterIiv");
    glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) sogl_loadOpenGLFunction("glGetTextureParameterIuiv");
    glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) sogl_loadOpenGLFunction("glGetTextureParameteriv");
    glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) sogl_loadOpenGLFunction("glCreateVertexArrays");
    glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) sogl_loadOpenGLFunction("glDisableVertexArrayAttrib");
    glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) sogl_loadOpenGLFunction("glEnableVertexArrayAttrib");
    glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) sogl_loadOpenGLFunction("glVertexArrayElementBuffer");
    glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) sogl_loadOpenGLFunction("glVertexArrayVertexBuffer");
    glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) sogl_loadOpenGLFunction("glVertexArrayVertexBuffers");
    glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) sogl_loadOpenGLFunction("glVertexArrayAttribBinding");
    glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) sogl_loadOpenGLFunction("glVertexArrayAttribFormat");
    glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) sogl_loadOpenGLFunction("glVertexArrayAttribIFormat");
    glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) sogl_loadOpenGLFunction("glVertexArrayAttribLFormat");
    glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) sogl_loadOpenGLFunction("glVertexArrayBindingDivisor");
    glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) sogl_loadOpenGLFunction("glGetVertexArrayiv");
    glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) sogl_loadOpenGLFunction("glGetVertexArrayIndexediv");
    glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) sogl_loadOpenGLFunction("glGetVertexArrayIndexed64iv");
    glCreateSamplers = (PFNGLCREATESAMPLERSPROC) sogl_loadOpenGLFunction("glCreateSamplers");
    glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) sogl_loadOpenGLFunction("glCreateProgramPipelines");
    glCreateQueries = (PFNGLCREATEQUERIESPROC) sogl_loadOpenGLFunction("glCreateQueries");
    glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) sogl_loadOpenGLFunction("glGetQueryBufferObjecti64v");
    glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) sogl_loadOpenGLFunction("glGetQueryBufferObjectiv");
    glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) sogl_loadOpenGLFunction("glGetQueryBufferObjectui64v");
    glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) sogl_loadOpenGLFunction("glGetQueryBufferObjectuiv");
    glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) sogl_loadOpenGLFunction("glMemoryBarrierByRegion");
    glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) sogl_loadOpenGLFunction("glGetTextureSubImage");
    glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) sogl_loadOpenGLFunction("glGetCompressedTextureSubImage");
    glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) sogl_loadOpenGLFunction("glGetGraphicsResetStatus");
    glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC) sogl_loadOpenGLFunction("glGetnCompressedTexImage");
    glGetnTexImage = (PFNGLGETNTEXIMAGEPROC) sogl_loadOpenGLFunction("glGetnTexImage");
    glGetnUniformdv = (PFNGLGETNUNIFORMDVPROC) sogl_loadOpenGLFunction("glGetnUniformdv");
    glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) sogl_loadOpenGLFunction("glGetnUniformfv");
    glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) sogl_loadOpenGLFunction("glGetnUniformiv");
    glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) sogl_loadOpenGLFunction("glGetnUniformuiv");
    glReadnPixels = (PFNGLREADNPIXELSPROC) sogl_loadOpenGLFunction("glReadnPixels");
    glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) sogl_loadOpenGLFunction("glTextureBarrier");
#endif /* GL_VERSION_4_5 */

#if SOGL_TEST_VERSION(4, 6)
    glSpecializeShader = (PFNGLSPECIALIZESHADERPROC) sogl_loadOpenGLFunction("glSpecializeShader");
    glMultiDrawArraysIndirectCount = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) sogl_loadOpenGLFunction("glMultiDrawArraysIndirectCount");
    glMultiDrawElementsIndirectCount = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) sogl_loadOpenGLFunction("glMultiDrawElementsIndirectCount");
    glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC) sogl_loadOpenGLFunction("glPolygonOffsetClamp");
#endif /* GL_VERSION_4_6 */	

    /* LOAD EXTENSIONS */

#ifdef SOGL_ARB_ES3_2_compatibility
    glPrimitiveBoundingBoxARB = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) sogl_loadOpenGLFunction("glPrimitiveBoundingBoxARB");
#endif /* SOGL_ARB_ES3_2_compatibility */

#ifdef SOGL_ARB_bindless_texture
    glGetTextureHandleARB = (PFNGLGETTEXTUREHANDLEARBPROC) sogl_loadOpenGLFunction("glGetTextureHandleARB");
    glGetTextureSamplerHandleARB = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) sogl_loadOpenGLFunction("glGetTextureSamplerHandleARB");
    glMakeTextureHandleResidentARB = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) sogl_loadOpenGLFunction("glMakeTextureHandleResidentARB");
    glMakeTextureHandleNonResidentARB = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) sogl_loadOpenGLFunction("glMakeTextureHandleNonResidentARB");
    glGetImageHandleARB = (PFNGLGETIMAGEHANDLEARBPROC) sogl_loadOpenGLFunction("glGetImageHandleARB");
    glMakeImageHandleResidentARB = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) sogl_loadOpenGLFunction("glMakeImageHandleResidentARB");
    glMakeImageHandleNonResidentARB = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) sogl_loadOpenGLFunction("glMakeImageHandleNonResidentARB");
    glUniformHandleui64ARB = (PFNGLUNIFORMHANDLEUI64ARBPROC) sogl_loadOpenGLFunction("glUniformHandleui64ARB");
    glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC) sogl_loadOpenGLFunction("glUniformHandleui64vARB");
    glProgramUniformHandleui64ARB = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) sogl_loadOpenGLFunction("glProgramUniformHandleui64ARB");
    glProgramUniformHandleui64vARB = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) sogl_loadOpenGLFunction("glProgramUniformHandleui64vARB");
    glIsTextureHandleResidentARB = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) sogl_loadOpenGLFunction("glIsTextureHandleResidentARB");
    glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC) sogl_loadOpenGLFunction("glIsImageHandleResidentARB");
    glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC) sogl_loadOpenGLFunction("glVertexAttribL1ui64ARB");
    glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC) sogl_loadOpenGLFunction("glVertexAttribL1ui64vARB");
    glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) sogl_loadOpenGLFunction("glGetVertexAttribLui64vARB");
#endif /* SOGL_ARB_bindless_texture */

#ifdef SOGL_ARB_cl_event
    glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC) sogl_loadOpenGLFunction("glCreateSyncFromCLeventARB");
#endif /* SOGL_ARB_cl_event */

#ifdef SOGL_ARB_compute_variable_group_size
    glDispatchComputeGroupSizeARB = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) sogl_loadOpenGLFunction("glDispatchComputeGroupSizeARB");
#endif /* SOGL_ARB_compute_variable_group_size */

#ifdef SOGL_ARB_debug_output
    glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC) sogl_loadOpenGLFunction("glDebugMessageControlARB");
    glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC) sogl_loadOpenGLFunction("glDebugMessageInsertARB");
    glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC) sogl_loadOpenGLFunction("glDebugMessageCallbackARB");
    glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC) sogl_loadOpenGLFunction("glGetDebugMessageLogARB");
#endif /* SOGL_ARB_debug_output */

#ifdef SOGL_ARB_draw_buffers_blend
    glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC) sogl_loadOpenGLFunction("glBlendEquationiARB");
    glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) sogl_loadOpenGLFunction("glBlendEquationSeparateiARB");
    glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC) sogl_loadOpenGLFunction("glBlendFunciARB");
    glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC) sogl_loadOpenGLFunction("glBlendFuncSeparateiARB");
#endif /* SOGL_ARB_draw_buffers_blend */

#ifdef SOGL_ARB_draw_instanced
    glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC) sogl_loadOpenGLFunction("glDrawArraysInstancedARB");
    glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) sogl_loadOpenGLFunction("glDrawElementsInstancedARB");
#endif /* SOGL_ARB_draw_instanced */

#ifdef SOGL_ARB_geometry_shader4
    glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC) sogl_loadOpenGLFunction("glProgramParameteriARB");
    glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC) sogl_loadOpenGLFunction("glFramebufferTextureARB");
    glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) sogl_loadOpenGLFunction("glFramebufferTextureLayerARB");
    glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) sogl_loadOpenGLFunction("glFramebufferTextureFaceARB");
#endif /* SOGL_ARB_geometry_shader4 */

#ifdef SOGL_ARB_gl_spirv
    glSpecializeShaderARB = (PFNGLSPECIALIZESHADERARBPROC) sogl_loadOpenGLFunction("glSpecializeShaderARB");
#endif /* SOGL_ARB_gl_spirv */

#ifdef SOGL_ARB_gpu_shader_int64
    glUniform1i64ARB = (PFNGLUNIFORM1I64ARBPROC) sogl_loadOpenGLFunction("glUniform1i64ARB");
    glUniform2i64ARB = (PFNGLUNIFORM2I64ARBPROC) sogl_loadOpenGLFunction("glUniform2i64ARB");
    glUniform3i64ARB = (PFNGLUNIFORM3I64ARBPROC) sogl_loadOpenGLFunction("glUniform3i64ARB");
    glUniform4i64ARB = (PFNGLUNIFORM4I64ARBPROC) sogl_loadOpenGLFunction("glUniform4i64ARB");
    glUniform1i64vARB = (PFNGLUNIFORM1I64VARBPROC) sogl_loadOpenGLFunction("glUniform1i64vARB");
    glUniform2i64vARB = (PFNGLUNIFORM2I64VARBPROC) sogl_loadOpenGLFunction("glUniform2i64vARB");
    glUniform3i64vARB = (PFNGLUNIFORM3I64VARBPROC) sogl_loadOpenGLFunction("glUniform3i64vARB");
    glUniform4i64vARB = (PFNGLUNIFORM4I64VARBPROC) sogl_loadOpenGLFunction("glUniform4i64vARB");
    glUniform1ui64ARB = (PFNGLUNIFORM1UI64ARBPROC) sogl_loadOpenGLFunction("glUniform1ui64ARB");
    glUniform2ui64ARB = (PFNGLUNIFORM2UI64ARBPROC) sogl_loadOpenGLFunction("glUniform2ui64ARB");
    glUniform3ui64ARB = (PFNGLUNIFORM3UI64ARBPROC) sogl_loadOpenGLFunction("glUniform3ui64ARB");
    glUniform4ui64ARB = (PFNGLUNIFORM4UI64ARBPROC) sogl_loadOpenGLFunction("glUniform4ui64ARB");
    glUniform1ui64vARB = (PFNGLUNIFORM1UI64VARBPROC) sogl_loadOpenGLFunction("glUniform1ui64vARB");
    glUniform2ui64vARB = (PFNGLUNIFORM2UI64VARBPROC) sogl_loadOpenGLFunction("glUniform2ui64vARB");
    glUniform3ui64vARB = (PFNGLUNIFORM3UI64VARBPROC) sogl_loadOpenGLFunction("glUniform3ui64vARB");
    glUniform4ui64vARB = (PFNGLUNIFORM4UI64VARBPROC) sogl_loadOpenGLFunction("glUniform4ui64vARB");
    glGetUniformi64vARB = (PFNGLGETUNIFORMI64VARBPROC) sogl_loadOpenGLFunction("glGetUniformi64vARB");
    glGetUniformui64vARB = (PFNGLGETUNIFORMUI64VARBPROC) sogl_loadOpenGLFunction("glGetUniformui64vARB");
    glGetnUniformi64vARB = (PFNGLGETNUNIFORMI64VARBPROC) sogl_loadOpenGLFunction("glGetnUniformi64vARB");
    glGetnUniformui64vARB = (PFNGLGETNUNIFORMUI64VARBPROC) sogl_loadOpenGLFunction("glGetnUniformui64vARB");
    glProgramUniform1i64ARB = (PFNGLPROGRAMUNIFORM1I64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform1i64ARB");
    glProgramUniform2i64ARB = (PFNGLPROGRAMUNIFORM2I64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform2i64ARB");
    glProgramUniform3i64ARB = (PFNGLPROGRAMUNIFORM3I64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform3i64ARB");
    glProgramUniform4i64ARB = (PFNGLPROGRAMUNIFORM4I64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform4i64ARB");
    glProgramUniform1i64vARB = (PFNGLPROGRAMUNIFORM1I64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform1i64vARB");
    glProgramUniform2i64vARB = (PFNGLPROGRAMUNIFORM2I64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform2i64vARB");
    glProgramUniform3i64vARB = (PFNGLPROGRAMUNIFORM3I64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform3i64vARB");
    glProgramUniform4i64vARB = (PFNGLPROGRAMUNIFORM4I64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform4i64vARB");
    glProgramUniform1ui64ARB = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform1ui64ARB");
    glProgramUniform2ui64ARB = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform2ui64ARB");
    glProgramUniform3ui64ARB = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform3ui64ARB");
    glProgramUniform4ui64ARB = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) sogl_loadOpenGLFunction("glProgramUniform4ui64ARB");
    glProgramUniform1ui64vARB = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform1ui64vARB");
    glProgramUniform2ui64vARB = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform2ui64vARB");
    glProgramUniform3ui64vARB = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform3ui64vARB");
    glProgramUniform4ui64vARB = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) sogl_loadOpenGLFunction("glProgramUniform4ui64vARB");
#endif /* SOGL_ARB_gpu_shader_int64 */

#ifdef SOGL_ARB_indirect_parameters
    glMultiDrawArraysIndirectCountARB = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) sogl_loadOpenGLFunction("glMultiDrawArraysIndirectCountARB");
    glMultiDrawElementsIndirectCountARB = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) sogl_loadOpenGLFunction("glMultiDrawElementsIndirectCountARB");
#endif /* SOGL_ARB_indirect_parameters */

#ifdef SOGL_ARB_instanced_arrays
    glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC) sogl_loadOpenGLFunction("glVertexAttribDivisorARB");
#endif /* SOGL_ARB_instanced_arrays */

#ifdef SOGL_ARB_parallel_shader_compile
    glMaxShaderCompilerThreadsARB = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) sogl_loadOpenGLFunction("glMaxShaderCompilerThreadsARB");
#endif /* SOGL_ARB_parallel_shader_compile */

#ifdef SOGL_ARB_robustness
    glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) sogl_loadOpenGLFunction("glGetGraphicsResetStatusARB");
    glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC) sogl_loadOpenGLFunction("glGetnTexImageARB");
    glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC) sogl_loadOpenGLFunction("glReadnPixelsARB");
    glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) sogl_loadOpenGLFunction("glGetnCompressedTexImageARB");
    glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC) sogl_loadOpenGLFunction("glGetnUniformfvARB");
    glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC) sogl_loadOpenGLFunction("glGetnUniformivARB");
    glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC) sogl_loadOpenGLFunction("glGetnUniformuivARB");
    glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC) sogl_loadOpenGLFunction("glGetnUniformdvARB");
#endif /* SOGL_ARB_robustness */

#ifdef SOGL_ARB_sample_locations
    glFramebufferSampleLocationsfvARB = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) sogl_loadOpenGLFunction("glFramebufferSampleLocationsfvARB");
    glNamedFramebufferSampleLocationsfvARB = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) sogl_loadOpenGLFunction("glNamedFramebufferSampleLocationsfvARB");
    glEvaluateDepthValuesARB = (PFNGLEVALUATEDEPTHVALUESARBPROC) sogl_loadOpenGLFunction("glEvaluateDepthValuesARB");
#endif /* SOGL_ARB_sample_locations */

#ifdef SOGL_ARB_sample_shading
    glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC) sogl_loadOpenGLFunction("glMinSampleShadingARB");
#endif /* SOGL_ARB_sample_shading */

#ifdef SOGL_ARB_shading_language_include
    glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC) sogl_loadOpenGLFunction("glNamedStringARB");
    glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC) sogl_loadOpenGLFunction("glDeleteNamedStringARB");
    glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC) sogl_loadOpenGLFunction("glCompileShaderIncludeARB");
    glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC) sogl_loadOpenGLFunction("glIsNamedStringARB");
    glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC) sogl_loadOpenGLFunction("glGetNamedStringARB");
    glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC) sogl_loadOpenGLFunction("glGetNamedStringivARB");
#endif /* SOGL_ARB_shading_language_include */

#ifdef SOGL_ARB_sparse_buffer
    glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC) sogl_loadOpenGLFunction("glBufferPageCommitmentARB");
    glNamedBufferPageCommitmentEXT = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) sogl_loadOpenGLFunction("glNamedBufferPageCommitmentEXT");
    glNamedBufferPageCommitmentARB = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) sogl_loadOpenGLFunction("glNamedBufferPageCommitmentARB");
#endif /* SOGL_ARB_sparse_buffer */

#ifdef SOGL_ARB_sparse_texture
    glTexPageCommitmentARB = (PFNGLTEXPAGECOMMITMENTARBPROC) sogl_loadOpenGLFunction("glTexPageCommitmentARB");
#endif /* SOGL_ARB_sparse_texture */

#ifdef SOGL_ARB_texture_buffer_object
    glTexBufferARB = (PFNGLTEXBUFFERARBPROC) sogl_loadOpenGLFunction("glTexBufferARB");
#endif /* SOGL_ARB_texture_buffer_object */

#ifdef SOGL_ARB_viewport_array
    glDepthRangeArraydvNV = (PFNGLDEPTHRANGEARRAYDVNVPROC) sogl_loadOpenGLFunction("glDepthRangeArraydvNV");
    glDepthRangeIndexeddNV = (PFNGLDEPTHRANGEINDEXEDDNVPROC) sogl_loadOpenGLFunction("glDepthRangeIndexeddNV");
#endif /* SOGL_ARB_viewport_array */

#ifdef SOGL_KHR_blend_equation_advanced
    glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC) sogl_loadOpenGLFunction("glBlendBarrierKHR");
#endif /* SOGL_KHR_blend_equation_advanced */

#ifdef SOGL_KHR_parallel_shader_compile
    glMaxShaderCompilerThreadsKHR = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) sogl_loadOpenGLFunction("glMaxShaderCompilerThreadsKHR");
#endif /* SOGL_KHR_parallel_shader_compile */

#ifdef SOGL_AMD_framebuffer_multisample_advanced
    glRenderbufferStorageMultisampleAdvancedAMD = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) sogl_loadOpenGLFunction("glRenderbufferStorageMultisampleAdvancedAMD");
    glNamedRenderbufferStorageMultisampleAdvancedAMD = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) sogl_loadOpenGLFunction("glNamedRenderbufferStorageMultisampleAdvancedAMD");
#endif /* SOGL_AMD_framebuffer_multisample_advanced */

#ifdef SOGL_AMD_performance_monitor
    glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC) sogl_loadOpenGLFunction("glGetPerfMonitorGroupsAMD");
    glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) sogl_loadOpenGLFunction("glGetPerfMonitorCountersAMD");
    glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) sogl_loadOpenGLFunction("glGetPerfMonitorGroupStringAMD");
    glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) sogl_loadOpenGLFunction("glGetPerfMonitorCounterStringAMD");
    glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) sogl_loadOpenGLFunction("glGetPerfMonitorCounterInfoAMD");
    glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC) sogl_loadOpenGLFunction("glGenPerfMonitorsAMD");
    glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC) sogl_loadOpenGLFunction("glDeletePerfMonitorsAMD");
    glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) sogl_loadOpenGLFunction("glSelectPerfMonitorCountersAMD");
    glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC) sogl_loadOpenGLFunction("glBeginPerfMonitorAMD");
    glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC) sogl_loadOpenGLFunction("glEndPerfMonitorAMD");
    glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) sogl_loadOpenGLFunction("glGetPerfMonitorCounterDataAMD");
#endif /* SOGL_AMD_performance_monitor */

#ifdef SOGL_EXT_EGL_image_storage
    glEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) sogl_loadOpenGLFunction("glEGLImageTargetTexStorageEXT");
    glEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) sogl_loadOpenGLFunction("glEGLImageTargetTextureStorageEXT");
#endif /* SOGL_EXT_EGL_image_storage */

#ifdef SOGL_EXT_debug_label
    glLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC) sogl_loadOpenGLFunction("glLabelObjectEXT");
    glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC) sogl_loadOpenGLFunction("glGetObjectLabelEXT");
#endif /* SOGL_EXT_debug_label */

#ifdef SOGL_EXT_debug_marker
    glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC) sogl_loadOpenGLFunction("glInsertEventMarkerEXT");
    glPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC) sogl_loadOpenGLFunction("glPushGroupMarkerEXT");
    glPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC) sogl_loadOpenGLFunction("glPopGroupMarkerEXT");
#endif /* SOGL_EXT_debug_marker */

#ifdef SOGL_EXT_direct_state_access
    glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) sogl_loadOpenGLFunction("glMatrixLoadfEXT");
    glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) sogl_loadOpenGLFunction("glMatrixLoaddEXT");
    glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) sogl_loadOpenGLFunction("glMatrixMultfEXT");
    glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) sogl_loadOpenGLFunction("glMatrixMultdEXT");
    glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) sogl_loadOpenGLFunction("glMatrixLoadIdentityEXT");
    glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) sogl_loadOpenGLFunction("glMatrixRotatefEXT");
    glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) sogl_loadOpenGLFunction("glMatrixRotatedEXT");
    glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) sogl_loadOpenGLFunction("glMatrixScalefEXT");
    glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) sogl_loadOpenGLFunction("glMatrixScaledEXT");
    glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) sogl_loadOpenGLFunction("glMatrixTranslatefEXT");
    glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) sogl_loadOpenGLFunction("glMatrixTranslatedEXT");
    glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) sogl_loadOpenGLFunction("glMatrixFrustumEXT");
    glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) sogl_loadOpenGLFunction("glMatrixOrthoEXT");
    glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) sogl_loadOpenGLFunction("glMatrixPopEXT");
    glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) sogl_loadOpenGLFunction("glMatrixPushEXT");
    glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) sogl_loadOpenGLFunction("glClientAttribDefaultEXT");
    glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) sogl_loadOpenGLFunction("glPushClientAttribDefaultEXT");
    glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC) sogl_loadOpenGLFunction("glTextureParameterfEXT");
    glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC) sogl_loadOpenGLFunction("glTextureParameterfvEXT");
    glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC) sogl_loadOpenGLFunction("glTextureParameteriEXT");
    glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glTextureParameterivEXT");
    glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glTextureImage1DEXT");
    glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glTextureImage2DEXT");
    glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glTextureSubImage1DEXT");
    glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glTextureSubImage2DEXT");
    glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCopyTextureImage1DEXT");
    glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCopyTextureImage2DEXT");
    glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCopyTextureSubImage1DEXT");
    glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCopyTextureSubImage2DEXT");
    glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC) sogl_loadOpenGLFunction("glGetTextureImageEXT");
    glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) sogl_loadOpenGLFunction("glGetTextureParameterfvEXT");
    glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetTextureParameterivEXT");
    glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) sogl_loadOpenGLFunction("glGetTextureLevelParameterfvEXT");
    glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetTextureLevelParameterivEXT");
    glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glTextureImage3DEXT");
    glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glTextureSubImage3DEXT");
    glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glCopyTextureSubImage3DEXT");
    glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC) sogl_loadOpenGLFunction("glBindMultiTextureEXT");
    glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC) sogl_loadOpenGLFunction("glMultiTexCoordPointerEXT");
    glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC) sogl_loadOpenGLFunction("glMultiTexEnvfEXT");
    glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC) sogl_loadOpenGLFunction("glMultiTexEnvfvEXT");
    glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC) sogl_loadOpenGLFunction("glMultiTexEnviEXT");
    glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC) sogl_loadOpenGLFunction("glMultiTexEnvivEXT");
    glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC) sogl_loadOpenGLFunction("glMultiTexGendEXT");
    glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC) sogl_loadOpenGLFunction("glMultiTexGendvEXT");
    glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC) sogl_loadOpenGLFunction("glMultiTexGenfEXT");
    glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC) sogl_loadOpenGLFunction("glMultiTexGenfvEXT");
    glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC) sogl_loadOpenGLFunction("glMultiTexGeniEXT");
    glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC) sogl_loadOpenGLFunction("glMultiTexGenivEXT");
    glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexEnvfvEXT");
    glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexEnvivEXT");
    glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexGendvEXT");
    glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexGenfvEXT");
    glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexGenivEXT");
    glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC) sogl_loadOpenGLFunction("glMultiTexParameteriEXT");
    glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glMultiTexParameterivEXT");
    glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC) sogl_loadOpenGLFunction("glMultiTexParameterfEXT");
    glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC) sogl_loadOpenGLFunction("glMultiTexParameterfvEXT");
    glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glMultiTexImage1DEXT");
    glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glMultiTexImage2DEXT");
    glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glMultiTexSubImage1DEXT");
    glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glMultiTexSubImage2DEXT");
    glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCopyMultiTexImage1DEXT");
    glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCopyMultiTexImage2DEXT");
    glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCopyMultiTexSubImage1DEXT");
    glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCopyMultiTexSubImage2DEXT");
    glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexImageEXT");
    glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexParameterfvEXT");
    glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexParameterivEXT");
    glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexLevelParameterfvEXT");
    glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexLevelParameterivEXT");
    glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glMultiTexImage3DEXT");
    glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glMultiTexSubImage3DEXT");
    glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glCopyMultiTexSubImage3DEXT");
    glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) sogl_loadOpenGLFunction("glEnableClientStateIndexedEXT");
    glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) sogl_loadOpenGLFunction("glDisableClientStateIndexedEXT");
    glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC) sogl_loadOpenGLFunction("glGetFloatIndexedvEXT");
    glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC) sogl_loadOpenGLFunction("glGetDoubleIndexedvEXT");
    glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC) sogl_loadOpenGLFunction("glGetPointerIndexedvEXT");
    glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) sogl_loadOpenGLFunction("glEnableIndexedEXT");
    glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) sogl_loadOpenGLFunction("glDisableIndexedEXT");
    glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) sogl_loadOpenGLFunction("glIsEnabledIndexedEXT");
    glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) sogl_loadOpenGLFunction("glGetIntegerIndexedvEXT");
    glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) sogl_loadOpenGLFunction("glGetBooleanIndexedvEXT");
    glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glCompressedTextureImage3DEXT");
    glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCompressedTextureImage2DEXT");
    glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCompressedTextureImage1DEXT");
    glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glCompressedTextureSubImage3DEXT");
    glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCompressedTextureSubImage2DEXT");
    glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCompressedTextureSubImage1DEXT");
    glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) sogl_loadOpenGLFunction("glGetCompressedTextureImageEXT");
    glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glCompressedMultiTexImage3DEXT");
    glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCompressedMultiTexImage2DEXT");
    glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCompressedMultiTexImage1DEXT");
    glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) sogl_loadOpenGLFunction("glCompressedMultiTexSubImage3DEXT");
    glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) sogl_loadOpenGLFunction("glCompressedMultiTexSubImage2DEXT");
    glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) sogl_loadOpenGLFunction("glCompressedMultiTexSubImage1DEXT");
    glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) sogl_loadOpenGLFunction("glGetCompressedMultiTexImageEXT");
    glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) sogl_loadOpenGLFunction("glMatrixLoadTransposefEXT");
    glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) sogl_loadOpenGLFunction("glMatrixLoadTransposedEXT");
    glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) sogl_loadOpenGLFunction("glMatrixMultTransposefEXT");
    glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) sogl_loadOpenGLFunction("glMatrixMultTransposedEXT");
    glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC) sogl_loadOpenGLFunction("glNamedBufferDataEXT");
    glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) sogl_loadOpenGLFunction("glNamedBufferSubDataEXT");
    glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC) sogl_loadOpenGLFunction("glMapNamedBufferEXT");
    glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC) sogl_loadOpenGLFunction("glUnmapNamedBufferEXT");
    glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetNamedBufferParameterivEXT");
    glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) sogl_loadOpenGLFunction("glGetNamedBufferPointervEXT");
    glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) sogl_loadOpenGLFunction("glGetNamedBufferSubDataEXT");
    glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1fEXT");
    glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2fEXT");
    glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3fEXT");
    glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4fEXT");
    glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1iEXT");
    glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2iEXT");
    glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3iEXT");
    glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4iEXT");
    glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1fvEXT");
    glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2fvEXT");
    glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3fvEXT");
    glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4fvEXT");
    glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1ivEXT");
    glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2ivEXT");
    glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3ivEXT");
    glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4ivEXT");
    glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2fvEXT");
    glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3fvEXT");
    glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4fvEXT");
    glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x3fvEXT");
    glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x2fvEXT");
    glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x4fvEXT");
    glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x2fvEXT");
    glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x4fvEXT");
    glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x3fvEXT");
    glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC) sogl_loadOpenGLFunction("glTextureBufferEXT");
    glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC) sogl_loadOpenGLFunction("glMultiTexBufferEXT");
    glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC) sogl_loadOpenGLFunction("glTextureParameterIivEXT");
    glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) sogl_loadOpenGLFunction("glTextureParameterIuivEXT");
    glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) sogl_loadOpenGLFunction("glGetTextureParameterIivEXT");
    glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) sogl_loadOpenGLFunction("glGetTextureParameterIuivEXT");
    glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC) sogl_loadOpenGLFunction("glMultiTexParameterIivEXT");
    glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) sogl_loadOpenGLFunction("glMultiTexParameterIuivEXT");
    glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexParameterIivEXT");
    glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) sogl_loadOpenGLFunction("glGetMultiTexParameterIuivEXT");
    glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1uiEXT");
    glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2uiEXT");
    glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3uiEXT");
    glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4uiEXT");
    glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1uivEXT");
    glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2uivEXT");
    glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3uivEXT");
    glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4uivEXT");
    glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameters4fvEXT");
    glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameterI4iEXT");
    glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameterI4ivEXT");
    glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParametersI4ivEXT");
    glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameterI4uiEXT");
    glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameterI4uivEXT");
    glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParametersI4uivEXT");
    glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) sogl_loadOpenGLFunction("glGetNamedProgramLocalParameterIivEXT");
    glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) sogl_loadOpenGLFunction("glGetNamedProgramLocalParameterIuivEXT");
    glEnableClientStateiEXT = (PFNGLENABLECLIENTSTATEIEXTPROC) sogl_loadOpenGLFunction("glEnableClientStateiEXT");
    glDisableClientStateiEXT = (PFNGLDISABLECLIENTSTATEIEXTPROC) sogl_loadOpenGLFunction("glDisableClientStateiEXT");
    glGetFloati_vEXT = (PFNGLGETFLOATI_VEXTPROC) sogl_loadOpenGLFunction("glGetFloati_vEXT");
    glGetDoublei_vEXT = (PFNGLGETDOUBLEI_VEXTPROC) sogl_loadOpenGLFunction("glGetDoublei_vEXT");
    glGetPointeri_vEXT = (PFNGLGETPOINTERI_VEXTPROC) sogl_loadOpenGLFunction("glGetPointeri_vEXT");
    glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) sogl_loadOpenGLFunction("glNamedProgramStringEXT");
    glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameter4dEXT");
    glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameter4dvEXT");
    glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameter4fEXT");
    glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) sogl_loadOpenGLFunction("glNamedProgramLocalParameter4fvEXT");
    glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) sogl_loadOpenGLFunction("glGetNamedProgramLocalParameterdvEXT");
    glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) sogl_loadOpenGLFunction("glGetNamedProgramLocalParameterfvEXT");
    glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC) sogl_loadOpenGLFunction("glGetNamedProgramivEXT");
    glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) sogl_loadOpenGLFunction("glGetNamedProgramStringEXT");
    glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) sogl_loadOpenGLFunction("glNamedRenderbufferStorageEXT");
    glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetNamedRenderbufferParameterivEXT");
    glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) sogl_loadOpenGLFunction("glNamedRenderbufferStorageMultisampleEXT");
    glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) sogl_loadOpenGLFunction("glNamedRenderbufferStorageMultisampleCoverageEXT");
    glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) sogl_loadOpenGLFunction("glCheckNamedFramebufferStatusEXT");
    glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferTexture1DEXT");
    glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferTexture2DEXT");
    glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferTexture3DEXT");
    glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferRenderbufferEXT");
    glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetNamedFramebufferAttachmentParameterivEXT");
    glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) sogl_loadOpenGLFunction("glGenerateTextureMipmapEXT");
    glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) sogl_loadOpenGLFunction("glGenerateMultiTexMipmapEXT");
    glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) sogl_loadOpenGLFunction("glFramebufferDrawBufferEXT");
    glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) sogl_loadOpenGLFunction("glFramebufferDrawBuffersEXT");
    glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) sogl_loadOpenGLFunction("glFramebufferReadBufferEXT");
    glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetFramebufferParameterivEXT");
    glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) sogl_loadOpenGLFunction("glNamedCopyBufferSubDataEXT");
    glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferTextureEXT");
    glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferTextureLayerEXT");
    glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferTextureFaceEXT");
    glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC) sogl_loadOpenGLFunction("glTextureRenderbufferEXT");
    glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC) sogl_loadOpenGLFunction("glMultiTexRenderbufferEXT");
    glVertexArrayVertexOffsetEXT = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexOffsetEXT");
    glVertexArrayColorOffsetEXT = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayColorOffsetEXT");
    glVertexArrayEdgeFlagOffsetEXT = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayEdgeFlagOffsetEXT");
    glVertexArrayIndexOffsetEXT = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayIndexOffsetEXT");
    glVertexArrayNormalOffsetEXT = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayNormalOffsetEXT");
    glVertexArrayTexCoordOffsetEXT = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayTexCoordOffsetEXT");
    glVertexArrayMultiTexCoordOffsetEXT = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayMultiTexCoordOffsetEXT");
    glVertexArrayFogCoordOffsetEXT = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayFogCoordOffsetEXT");
    glVertexArraySecondaryColorOffsetEXT = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArraySecondaryColorOffsetEXT");
    glVertexArrayVertexAttribOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribOffsetEXT");
    glVertexArrayVertexAttribIOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribIOffsetEXT");
    glEnableVertexArrayEXT = (PFNGLENABLEVERTEXARRAYEXTPROC) sogl_loadOpenGLFunction("glEnableVertexArrayEXT");
    glDisableVertexArrayEXT = (PFNGLDISABLEVERTEXARRAYEXTPROC) sogl_loadOpenGLFunction("glDisableVertexArrayEXT");
    glEnableVertexArrayAttribEXT = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) sogl_loadOpenGLFunction("glEnableVertexArrayAttribEXT");
    glDisableVertexArrayAttribEXT = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) sogl_loadOpenGLFunction("glDisableVertexArrayAttribEXT");
    glGetVertexArrayIntegervEXT = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) sogl_loadOpenGLFunction("glGetVertexArrayIntegervEXT");
    glGetVertexArrayPointervEXT = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) sogl_loadOpenGLFunction("glGetVertexArrayPointervEXT");
    glGetVertexArrayIntegeri_vEXT = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) sogl_loadOpenGLFunction("glGetVertexArrayIntegeri_vEXT");
    glGetVertexArrayPointeri_vEXT = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) sogl_loadOpenGLFunction("glGetVertexArrayPointeri_vEXT");
    glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) sogl_loadOpenGLFunction("glMapNamedBufferRangeEXT");
    glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) sogl_loadOpenGLFunction("glFlushMappedNamedBufferRangeEXT");
    glNamedBufferStorageEXT = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) sogl_loadOpenGLFunction("glNamedBufferStorageEXT");
    glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) sogl_loadOpenGLFunction("glClearNamedBufferDataEXT");
    glClearNamedBufferSubDataEXT = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) sogl_loadOpenGLFunction("glClearNamedBufferSubDataEXT");
    glNamedFramebufferParameteriEXT = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) sogl_loadOpenGLFunction("glNamedFramebufferParameteriEXT");
    glGetNamedFramebufferParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) sogl_loadOpenGLFunction("glGetNamedFramebufferParameterivEXT");
    glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1dEXT");
    glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2dEXT");
    glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3dEXT");
    glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4dEXT");
    glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform1dvEXT");
    glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform2dvEXT");
    glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform3dvEXT");
    glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniform4dvEXT");
    glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2dvEXT");
    glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3dvEXT");
    glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4dvEXT");
    glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x3dvEXT");
    glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix2x4dvEXT");
    glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x2dvEXT");
    glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix3x4dvEXT");
    glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x2dvEXT");
    glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) sogl_loadOpenGLFunction("glProgramUniformMatrix4x3dvEXT");
    glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC) sogl_loadOpenGLFunction("glTextureBufferRangeEXT");
    glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) sogl_loadOpenGLFunction("glTextureStorage1DEXT");
    glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) sogl_loadOpenGLFunction("glTextureStorage2DEXT");
    glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) sogl_loadOpenGLFunction("glTextureStorage3DEXT");
    glTextureStorage2DMultisampleEXT = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) sogl_loadOpenGLFunction("glTextureStorage2DMultisampleEXT");
    glTextureStorage3DMultisampleEXT = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) sogl_loadOpenGLFunction("glTextureStorage3DMultisampleEXT");
    glVertexArrayBindVertexBufferEXT = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) sogl_loadOpenGLFunction("glVertexArrayBindVertexBufferEXT");
    glVertexArrayVertexAttribFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribFormatEXT");
    glVertexArrayVertexAttribIFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribIFormatEXT");
    glVertexArrayVertexAttribLFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribLFormatEXT");
    glVertexArrayVertexAttribBindingEXT = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribBindingEXT");
    glVertexArrayVertexBindingDivisorEXT = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexBindingDivisorEXT");
    glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribLOffsetEXT");
    glTexturePageCommitmentEXT = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) sogl_loadOpenGLFunction("glTexturePageCommitmentEXT");
    glVertexArrayVertexAttribDivisorEXT = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) sogl_loadOpenGLFunction("glVertexArrayVertexAttribDivisorEXT");
#endif /* SOGL_EXT_direct_state_access */

#ifdef SOGL_EXT_draw_instanced
    glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) sogl_loadOpenGLFunction("glDrawArraysInstancedEXT");
    glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) sogl_loadOpenGLFunction("glDrawElementsInstancedEXT");
#endif /* SOGL_EXT_draw_instanced */

#ifdef SOGL_EXT_polygon_offset_clamp
    glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) sogl_loadOpenGLFunction("glPolygonOffsetClampEXT");
#endif /* SOGL_EXT_polygon_offset_clamp */

#ifdef SOGL_EXT_raster_multisample
    glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) sogl_loadOpenGLFunction("glRasterSamplesEXT");
#endif /* SOGL_EXT_raster_multisample */

#ifdef SOGL_EXT_separate_shader_objects
    glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC) sogl_loadOpenGLFunction("glUseShaderProgramEXT");
    glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC) sogl_loadOpenGLFunction("glActiveProgramEXT");
    glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC) sogl_loadOpenGLFunction("glCreateShaderProgramEXT");
#endif /* SOGL_EXT_separate_shader_objects */

#ifdef SOGL_EXT_shader_framebuffer_fetch_non_coherent
    glFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) sogl_loadOpenGLFunction("glFramebufferFetchBarrierEXT");
#endif /* SOGL_EXT_shader_framebuffer_fetch_non_coherent */

#ifdef SOGL_EXT_window_rectangles
    glWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC) sogl_loadOpenGLFunction("glWindowRectanglesEXT");
#endif /* SOGL_EXT_window_rectangles */

#ifdef SOGL_INTEL_framebuffer_CMAA
    glApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) sogl_loadOpenGLFunction("glApplyFramebufferAttachmentCMAAINTEL");
#endif /* SOGL_INTEL_framebuffer_CMAA */

#ifdef SOGL_INTEL_performance_query
    glBeginPerfQueryINTEL = (PFNGLBEGINPERFQUERYINTELPROC) sogl_loadOpenGLFunction("glBeginPerfQueryINTEL");
    glCreatePerfQueryINTEL = (PFNGLCREATEPERFQUERYINTELPROC) sogl_loadOpenGLFunction("glCreatePerfQueryINTEL");
    glDeletePerfQueryINTEL = (PFNGLDELETEPERFQUERYINTELPROC) sogl_loadOpenGLFunction("glDeletePerfQueryINTEL");
    glEndPerfQueryINTEL = (PFNGLENDPERFQUERYINTELPROC) sogl_loadOpenGLFunction("glEndPerfQueryINTEL");
    glGetFirstPerfQueryIdINTEL = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) sogl_loadOpenGLFunction("glGetFirstPerfQueryIdINTEL");
    glGetNextPerfQueryIdINTEL = (PFNGLGETNEXTPERFQUERYIDINTELPROC) sogl_loadOpenGLFunction("glGetNextPerfQueryIdINTEL");
    glGetPerfCounterInfoINTEL = (PFNGLGETPERFCOUNTERINFOINTELPROC) sogl_loadOpenGLFunction("glGetPerfCounterInfoINTEL");
    glGetPerfQueryDataINTEL = (PFNGLGETPERFQUERYDATAINTELPROC) sogl_loadOpenGLFunction("glGetPerfQueryDataINTEL");
    glGetPerfQueryIdByNameINTEL = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) sogl_loadOpenGLFunction("glGetPerfQueryIdByNameINTEL");
    glGetPerfQueryInfoINTEL = (PFNGLGETPERFQUERYINFOINTELPROC) sogl_loadOpenGLFunction("glGetPerfQueryInfoINTEL");
#endif /* SOGL_INTEL_performance_query */

#ifdef SOGL_MESA_framebuffer_flip_y
    glFramebufferParameteriMESA = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) sogl_loadOpenGLFunction("glFramebufferParameteriMESA");
    glGetFramebufferParameterivMESA = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) sogl_loadOpenGLFunction("glGetFramebufferParameterivMESA");
#endif /* SOGL_MESA_framebuffer_flip_y */

#ifdef SOGL_NV_bindless_multi_draw_indirect
    glMultiDrawArraysIndirectBindlessNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) sogl_loadOpenGLFunction("glMultiDrawArraysIndirectBindlessNV");
    glMultiDrawElementsIndirectBindlessNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) sogl_loadOpenGLFunction("glMultiDrawElementsIndirectBindlessNV");
#endif /* SOGL_NV_bindless_multi_draw_indirect */

#ifdef SOGL_NV_bindless_multi_draw_indirect_count
    glMultiDrawArraysIndirectBindlessCountNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) sogl_loadOpenGLFunction("glMultiDrawArraysIndirectBindlessCountNV");
    glMultiDrawElementsIndirectBindlessCountNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) sogl_loadOpenGLFunction("glMultiDrawElementsIndirectBindlessCountNV");
#endif /* SOGL_NV_bindless_multi_draw_indirect_count */

#ifdef SOGL_NV_bindless_texture
    glGetTextureHandleNV = (PFNGLGETTEXTUREHANDLENVPROC) sogl_loadOpenGLFunction("glGetTextureHandleNV");
    glGetTextureSamplerHandleNV = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) sogl_loadOpenGLFunction("glGetTextureSamplerHandleNV");
    glMakeTextureHandleResidentNV = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeTextureHandleResidentNV");
    glMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeTextureHandleNonResidentNV");
    glGetImageHandleNV = (PFNGLGETIMAGEHANDLENVPROC) sogl_loadOpenGLFunction("glGetImageHandleNV");
    glMakeImageHandleResidentNV = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeImageHandleResidentNV");
    glMakeImageHandleNonResidentNV = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeImageHandleNonResidentNV");
    glUniformHandleui64NV = (PFNGLUNIFORMHANDLEUI64NVPROC) sogl_loadOpenGLFunction("glUniformHandleui64NV");
    glUniformHandleui64vNV = (PFNGLUNIFORMHANDLEUI64VNVPROC) sogl_loadOpenGLFunction("glUniformHandleui64vNV");
    glProgramUniformHandleui64NV = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) sogl_loadOpenGLFunction("glProgramUniformHandleui64NV");
    glProgramUniformHandleui64vNV = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) sogl_loadOpenGLFunction("glProgramUniformHandleui64vNV");
    glIsTextureHandleResidentNV = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) sogl_loadOpenGLFunction("glIsTextureHandleResidentNV");
    glIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC) sogl_loadOpenGLFunction("glIsImageHandleResidentNV");
#endif /* SOGL_NV_bindless_texture */

#ifdef SOGL_NV_blend_equation_advanced
    glBlendParameteriNV = (PFNGLBLENDPARAMETERINVPROC) sogl_loadOpenGLFunction("glBlendParameteriNV");
    glBlendBarrierNV = (PFNGLBLENDBARRIERNVPROC) sogl_loadOpenGLFunction("glBlendBarrierNV");
#endif /* SOGL_NV_blend_equation_advanced */

#ifdef SOGL_NV_clip_space_w_scaling
    glViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) sogl_loadOpenGLFunction("glViewportPositionWScaleNV");
#endif /* SOGL_NV_clip_space_w_scaling */

#ifdef SOGL_NV_command_list
    glCreateStatesNV = (PFNGLCREATESTATESNVPROC) sogl_loadOpenGLFunction("glCreateStatesNV");
    glDeleteStatesNV = (PFNGLDELETESTATESNVPROC) sogl_loadOpenGLFunction("glDeleteStatesNV");
    glIsStateNV = (PFNGLISSTATENVPROC) sogl_loadOpenGLFunction("glIsStateNV");
    glStateCaptureNV = (PFNGLSTATECAPTURENVPROC) sogl_loadOpenGLFunction("glStateCaptureNV");
    glGetCommandHeaderNV = (PFNGLGETCOMMANDHEADERNVPROC) sogl_loadOpenGLFunction("glGetCommandHeaderNV");
    glGetStageIndexNV = (PFNGLGETSTAGEINDEXNVPROC) sogl_loadOpenGLFunction("glGetStageIndexNV");
    glDrawCommandsNV = (PFNGLDRAWCOMMANDSNVPROC) sogl_loadOpenGLFunction("glDrawCommandsNV");
    glDrawCommandsAddressNV = (PFNGLDRAWCOMMANDSADDRESSNVPROC) sogl_loadOpenGLFunction("glDrawCommandsAddressNV");
    glDrawCommandsStatesNV = (PFNGLDRAWCOMMANDSSTATESNVPROC) sogl_loadOpenGLFunction("glDrawCommandsStatesNV");
    glDrawCommandsStatesAddressNV = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) sogl_loadOpenGLFunction("glDrawCommandsStatesAddressNV");
    glCreateCommandListsNV = (PFNGLCREATECOMMANDLISTSNVPROC) sogl_loadOpenGLFunction("glCreateCommandListsNV");
    glDeleteCommandListsNV = (PFNGLDELETECOMMANDLISTSNVPROC) sogl_loadOpenGLFunction("glDeleteCommandListsNV");
    glIsCommandListNV = (PFNGLISCOMMANDLISTNVPROC) sogl_loadOpenGLFunction("glIsCommandListNV");
    glListDrawCommandsStatesClientNV = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) sogl_loadOpenGLFunction("glListDrawCommandsStatesClientNV");
    glCommandListSegmentsNV = (PFNGLCOMMANDLISTSEGMENTSNVPROC) sogl_loadOpenGLFunction("glCommandListSegmentsNV");
    glCompileCommandListNV = (PFNGLCOMPILECOMMANDLISTNVPROC) sogl_loadOpenGLFunction("glCompileCommandListNV");
    glCallCommandListNV = (PFNGLCALLCOMMANDLISTNVPROC) sogl_loadOpenGLFunction("glCallCommandListNV");
#endif /* SOGL_NV_command_list */

#ifdef SOGL_NV_conditional_render
    glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC) sogl_loadOpenGLFunction("glBeginConditionalRenderNV");
    glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC) sogl_loadOpenGLFunction("glEndConditionalRenderNV");
#endif /* SOGL_NV_conditional_render */

#ifdef SOGL_NV_conservative_raster
    glSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC) sogl_loadOpenGLFunction("glSubpixelPrecisionBiasNV");
#endif /* SOGL_NV_conservative_raster */

#ifdef SOGL_NV_conservative_raster_dilate
    glConservativeRasterParameterfNV = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) sogl_loadOpenGLFunction("glConservativeRasterParameterfNV");
#endif /* SOGL_NV_conservative_raster_dilate */

#ifdef SOGL_NV_conservative_raster_pre_snap_triangles
    glConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) sogl_loadOpenGLFunction("glConservativeRasterParameteriNV");
#endif /* SOGL_NV_conservative_raster_pre_snap_triangles */

#ifdef SOGL_NV_depth_buffer_float
    glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC) sogl_loadOpenGLFunction("glDepthRangedNV");
    glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC) sogl_loadOpenGLFunction("glClearDepthdNV");
    glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC) sogl_loadOpenGLFunction("glDepthBoundsdNV");
#endif /* SOGL_NV_depth_buffer_float */

#ifdef SOGL_NV_draw_vulkan_image
    glDrawVkImageNV = (PFNGLDRAWVKIMAGENVPROC) sogl_loadOpenGLFunction("glDrawVkImageNV");
    glGetVkProcAddrNV = (PFNGLGETVKPROCADDRNVPROC) sogl_loadOpenGLFunction("glGetVkProcAddrNV");
    glWaitVkSemaphoreNV = (PFNGLWAITVKSEMAPHORENVPROC) sogl_loadOpenGLFunction("glWaitVkSemaphoreNV");
    glSignalVkSemaphoreNV = (PFNGLSIGNALVKSEMAPHORENVPROC) sogl_loadOpenGLFunction("glSignalVkSemaphoreNV");
    glSignalVkFenceNV = (PFNGLSIGNALVKFENCENVPROC) sogl_loadOpenGLFunction("glSignalVkFenceNV");
#endif /* SOGL_NV_draw_vulkan_image */

#ifdef SOGL_NV_fragment_coverage_to_color
    glFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) sogl_loadOpenGLFunction("glFragmentCoverageColorNV");
#endif /* SOGL_NV_fragment_coverage_to_color */

#ifdef SOGL_NV_framebuffer_mixed_samples
    glCoverageModulationTableNV = (PFNGLCOVERAGEMODULATIONTABLENVPROC) sogl_loadOpenGLFunction("glCoverageModulationTableNV");
    glGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) sogl_loadOpenGLFunction("glGetCoverageModulationTableNV");
    glCoverageModulationNV = (PFNGLCOVERAGEMODULATIONNVPROC) sogl_loadOpenGLFunction("glCoverageModulationNV");
#endif /* SOGL_NV_framebuffer_mixed_samples */

#ifdef SOGL_NV_framebuffer_multisample_coverage
    glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) sogl_loadOpenGLFunction("glRenderbufferStorageMultisampleCoverageNV");
#endif /* SOGL_NV_framebuffer_multisample_coverage */

#ifdef SOGL_NV_gpu_shader5
    glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC) sogl_loadOpenGLFunction("glUniform1i64NV");
    glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC) sogl_loadOpenGLFunction("glUniform2i64NV");
    glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC) sogl_loadOpenGLFunction("glUniform3i64NV");
    glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC) sogl_loadOpenGLFunction("glUniform4i64NV");
    glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC) sogl_loadOpenGLFunction("glUniform1i64vNV");
    glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC) sogl_loadOpenGLFunction("glUniform2i64vNV");
    glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC) sogl_loadOpenGLFunction("glUniform3i64vNV");
    glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC) sogl_loadOpenGLFunction("glUniform4i64vNV");
    glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC) sogl_loadOpenGLFunction("glUniform1ui64NV");
    glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC) sogl_loadOpenGLFunction("glUniform2ui64NV");
    glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC) sogl_loadOpenGLFunction("glUniform3ui64NV");
    glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC) sogl_loadOpenGLFunction("glUniform4ui64NV");
    glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC) sogl_loadOpenGLFunction("glUniform1ui64vNV");
    glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC) sogl_loadOpenGLFunction("glUniform2ui64vNV");
    glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC) sogl_loadOpenGLFunction("glUniform3ui64vNV");
    glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC) sogl_loadOpenGLFunction("glUniform4ui64vNV");
    glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC) sogl_loadOpenGLFunction("glGetUniformi64vNV");
    glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC) sogl_loadOpenGLFunction("glProgramUniform1i64NV");
    glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC) sogl_loadOpenGLFunction("glProgramUniform2i64NV");
    glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC) sogl_loadOpenGLFunction("glProgramUniform3i64NV");
    glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC) sogl_loadOpenGLFunction("glProgramUniform4i64NV");
    glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform1i64vNV");
    glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform2i64vNV");
    glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform3i64vNV");
    glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform4i64vNV");
    glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC) sogl_loadOpenGLFunction("glProgramUniform1ui64NV");
    glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC) sogl_loadOpenGLFunction("glProgramUniform2ui64NV");
    glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC) sogl_loadOpenGLFunction("glProgramUniform3ui64NV");
    glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC) sogl_loadOpenGLFunction("glProgramUniform4ui64NV");
    glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform1ui64vNV");
    glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform2ui64vNV");
    glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform3ui64vNV");
    glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) sogl_loadOpenGLFunction("glProgramUniform4ui64vNV");
#endif /* SOGL_NV_gpu_shader5 */

#ifdef SOGL_NV_internalformat_sample_query
    glGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) sogl_loadOpenGLFunction("glGetInternalformatSampleivNV");
#endif /* SOGL_NV_internalformat_sample_query */

#ifdef SOGL_NV_memory_attachment
    glGetMemoryObjectDetachedResourcesuivNV = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) sogl_loadOpenGLFunction("glGetMemoryObjectDetachedResourcesuivNV");
    glResetMemoryObjectParameterNV = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) sogl_loadOpenGLFunction("glResetMemoryObjectParameterNV");
    glTexAttachMemoryNV = (PFNGLTEXATTACHMEMORYNVPROC) sogl_loadOpenGLFunction("glTexAttachMemoryNV");
    glBufferAttachMemoryNV = (PFNGLBUFFERATTACHMEMORYNVPROC) sogl_loadOpenGLFunction("glBufferAttachMemoryNV");
    glTextureAttachMemoryNV = (PFNGLTEXTUREATTACHMEMORYNVPROC) sogl_loadOpenGLFunction("glTextureAttachMemoryNV");
    glNamedBufferAttachMemoryNV = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) sogl_loadOpenGLFunction("glNamedBufferAttachMemoryNV");
#endif /* SOGL_NV_memory_attachment */

#ifdef SOGL_NV_memory_object_sparse
    glBufferPageCommitmentMemNV = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) sogl_loadOpenGLFunction("glBufferPageCommitmentMemNV");
    glTexPageCommitmentMemNV = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) sogl_loadOpenGLFunction("glTexPageCommitmentMemNV");
    glNamedBufferPageCommitmentMemNV = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) sogl_loadOpenGLFunction("glNamedBufferPageCommitmentMemNV");
    glTexturePageCommitmentMemNV = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) sogl_loadOpenGLFunction("glTexturePageCommitmentMemNV");
#endif /* SOGL_NV_memory_object_sparse */

#ifdef SOGL_NV_mesh_shader
    glDrawMeshTasksNV = (PFNGLDRAWMESHTASKSNVPROC) sogl_loadOpenGLFunction("glDrawMeshTasksNV");
    glDrawMeshTasksIndirectNV = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) sogl_loadOpenGLFunction("glDrawMeshTasksIndirectNV");
    glMultiDrawMeshTasksIndirectNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) sogl_loadOpenGLFunction("glMultiDrawMeshTasksIndirectNV");
    glMultiDrawMeshTasksIndirectCountNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) sogl_loadOpenGLFunction("glMultiDrawMeshTasksIndirectCountNV");
#endif /* SOGL_NV_mesh_shader */

#ifdef SOGL_NV_path_rendering
    glGenPathsNV = (PFNGLGENPATHSNVPROC) sogl_loadOpenGLFunction("glGenPathsNV");
    glDeletePathsNV = (PFNGLDELETEPATHSNVPROC) sogl_loadOpenGLFunction("glDeletePathsNV");
    glIsPathNV = (PFNGLISPATHNVPROC) sogl_loadOpenGLFunction("glIsPathNV");
    glPathCommandsNV = (PFNGLPATHCOMMANDSNVPROC) sogl_loadOpenGLFunction("glPathCommandsNV");
    glPathCoordsNV = (PFNGLPATHCOORDSNVPROC) sogl_loadOpenGLFunction("glPathCoordsNV");
    glPathSubCommandsNV = (PFNGLPATHSUBCOMMANDSNVPROC) sogl_loadOpenGLFunction("glPathSubCommandsNV");
    glPathSubCoordsNV = (PFNGLPATHSUBCOORDSNVPROC) sogl_loadOpenGLFunction("glPathSubCoordsNV");
    glPathStringNV = (PFNGLPATHSTRINGNVPROC) sogl_loadOpenGLFunction("glPathStringNV");
    glPathGlyphsNV = (PFNGLPATHGLYPHSNVPROC) sogl_loadOpenGLFunction("glPathGlyphsNV");
    glPathGlyphRangeNV = (PFNGLPATHGLYPHRANGENVPROC) sogl_loadOpenGLFunction("glPathGlyphRangeNV");
    glWeightPathsNV = (PFNGLWEIGHTPATHSNVPROC) sogl_loadOpenGLFunction("glWeightPathsNV");
    glCopyPathNV = (PFNGLCOPYPATHNVPROC) sogl_loadOpenGLFunction("glCopyPathNV");
    glInterpolatePathsNV = (PFNGLINTERPOLATEPATHSNVPROC) sogl_loadOpenGLFunction("glInterpolatePathsNV");
    glTransformPathNV = (PFNGLTRANSFORMPATHNVPROC) sogl_loadOpenGLFunction("glTransformPathNV");
    glPathParameterivNV = (PFNGLPATHPARAMETERIVNVPROC) sogl_loadOpenGLFunction("glPathParameterivNV");
    glPathParameteriNV = (PFNGLPATHPARAMETERINVPROC) sogl_loadOpenGLFunction("glPathParameteriNV");
    glPathParameterfvNV = (PFNGLPATHPARAMETERFVNVPROC) sogl_loadOpenGLFunction("glPathParameterfvNV");
    glPathParameterfNV = (PFNGLPATHPARAMETERFNVPROC) sogl_loadOpenGLFunction("glPathParameterfNV");
    glPathDashArrayNV = (PFNGLPATHDASHARRAYNVPROC) sogl_loadOpenGLFunction("glPathDashArrayNV");
    glPathStencilFuncNV = (PFNGLPATHSTENCILFUNCNVPROC) sogl_loadOpenGLFunction("glPathStencilFuncNV");
    glPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) sogl_loadOpenGLFunction("glPathStencilDepthOffsetNV");
    glStencilFillPathNV = (PFNGLSTENCILFILLPATHNVPROC) sogl_loadOpenGLFunction("glStencilFillPathNV");
    glStencilStrokePathNV = (PFNGLSTENCILSTROKEPATHNVPROC) sogl_loadOpenGLFunction("glStencilStrokePathNV");
    glStencilFillPathInstancedNV = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) sogl_loadOpenGLFunction("glStencilFillPathInstancedNV");
    glStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) sogl_loadOpenGLFunction("glStencilStrokePathInstancedNV");
    glPathCoverDepthFuncNV = (PFNGLPATHCOVERDEPTHFUNCNVPROC) sogl_loadOpenGLFunction("glPathCoverDepthFuncNV");
    glCoverFillPathNV = (PFNGLCOVERFILLPATHNVPROC) sogl_loadOpenGLFunction("glCoverFillPathNV");
    glCoverStrokePathNV = (PFNGLCOVERSTROKEPATHNVPROC) sogl_loadOpenGLFunction("glCoverStrokePathNV");
    glCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) sogl_loadOpenGLFunction("glCoverFillPathInstancedNV");
    glCoverStrokePathInstancedNV = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) sogl_loadOpenGLFunction("glCoverStrokePathInstancedNV");
    glGetPathParameterivNV = (PFNGLGETPATHPARAMETERIVNVPROC) sogl_loadOpenGLFunction("glGetPathParameterivNV");
    glGetPathParameterfvNV = (PFNGLGETPATHPARAMETERFVNVPROC) sogl_loadOpenGLFunction("glGetPathParameterfvNV");
    glGetPathCommandsNV = (PFNGLGETPATHCOMMANDSNVPROC) sogl_loadOpenGLFunction("glGetPathCommandsNV");
    glGetPathCoordsNV = (PFNGLGETPATHCOORDSNVPROC) sogl_loadOpenGLFunction("glGetPathCoordsNV");
    glGetPathDashArrayNV = (PFNGLGETPATHDASHARRAYNVPROC) sogl_loadOpenGLFunction("glGetPathDashArrayNV");
    glGetPathMetricsNV = (PFNGLGETPATHMETRICSNVPROC) sogl_loadOpenGLFunction("glGetPathMetricsNV");
    glGetPathMetricRangeNV = (PFNGLGETPATHMETRICRANGENVPROC) sogl_loadOpenGLFunction("glGetPathMetricRangeNV");
    glGetPathSpacingNV = (PFNGLGETPATHSPACINGNVPROC) sogl_loadOpenGLFunction("glGetPathSpacingNV");
    glIsPointInFillPathNV = (PFNGLISPOINTINFILLPATHNVPROC) sogl_loadOpenGLFunction("glIsPointInFillPathNV");
    glIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC) sogl_loadOpenGLFunction("glIsPointInStrokePathNV");
    glGetPathLengthNV = (PFNGLGETPATHLENGTHNVPROC) sogl_loadOpenGLFunction("glGetPathLengthNV");
    glPointAlongPathNV = (PFNGLPOINTALONGPATHNVPROC) sogl_loadOpenGLFunction("glPointAlongPathNV");
    glMatrixLoad3x2fNV = (PFNGLMATRIXLOAD3X2FNVPROC) sogl_loadOpenGLFunction("glMatrixLoad3x2fNV");
    glMatrixLoad3x3fNV = (PFNGLMATRIXLOAD3X3FNVPROC) sogl_loadOpenGLFunction("glMatrixLoad3x3fNV");
    glMatrixLoadTranspose3x3fNV = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) sogl_loadOpenGLFunction("glMatrixLoadTranspose3x3fNV");
    glMatrixMult3x2fNV = (PFNGLMATRIXMULT3X2FNVPROC) sogl_loadOpenGLFunction("glMatrixMult3x2fNV");
    glMatrixMult3x3fNV = (PFNGLMATRIXMULT3X3FNVPROC) sogl_loadOpenGLFunction("glMatrixMult3x3fNV");
    glMatrixMultTranspose3x3fNV = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) sogl_loadOpenGLFunction("glMatrixMultTranspose3x3fNV");
    glStencilThenCoverFillPathNV = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) sogl_loadOpenGLFunction("glStencilThenCoverFillPathNV");
    glStencilThenCoverStrokePathNV = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) sogl_loadOpenGLFunction("glStencilThenCoverStrokePathNV");
    glStencilThenCoverFillPathInstancedNV = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) sogl_loadOpenGLFunction("glStencilThenCoverFillPathInstancedNV");
    glStencilThenCoverStrokePathInstancedNV = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) sogl_loadOpenGLFunction("glStencilThenCoverStrokePathInstancedNV");
    glPathGlyphIndexRangeNV = (PFNGLPATHGLYPHINDEXRANGENVPROC) sogl_loadOpenGLFunction("glPathGlyphIndexRangeNV");
    glPathGlyphIndexArrayNV = (PFNGLPATHGLYPHINDEXARRAYNVPROC) sogl_loadOpenGLFunction("glPathGlyphIndexArrayNV");
    glPathMemoryGlyphIndexArrayNV = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) sogl_loadOpenGLFunction("glPathMemoryGlyphIndexArrayNV");
    glProgramPathFragmentInputGenNV = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) sogl_loadOpenGLFunction("glProgramPathFragmentInputGenNV");
    glGetProgramResourcefvNV = (PFNGLGETPROGRAMRESOURCEFVNVPROC) sogl_loadOpenGLFunction("glGetProgramResourcefvNV");
#endif /* SOGL_NV_path_rendering */

#ifdef SOGL_NV_sample_locations
    glFramebufferSampleLocationsfvNV = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) sogl_loadOpenGLFunction("glFramebufferSampleLocationsfvNV");
    glNamedFramebufferSampleLocationsfvNV = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) sogl_loadOpenGLFunction("glNamedFramebufferSampleLocationsfvNV");
    glResolveDepthValuesNV = (PFNGLRESOLVEDEPTHVALUESNVPROC) sogl_loadOpenGLFunction("glResolveDepthValuesNV");
#endif /* SOGL_NV_sample_locations */

#ifdef SOGL_NV_scissor_exclusive
    glScissorExclusiveNV = (PFNGLSCISSOREXCLUSIVENVPROC) sogl_loadOpenGLFunction("glScissorExclusiveNV");
    glScissorExclusiveArrayvNV = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) sogl_loadOpenGLFunction("glScissorExclusiveArrayvNV");
#endif /* SOGL_NV_scissor_exclusive */

#ifdef SOGL_NV_shader_buffer_load
    glMakeBufferResidentNV = (PFNGLMAKEBUFFERRESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeBufferResidentNV");
    glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeBufferNonResidentNV");
    glIsBufferResidentNV = (PFNGLISBUFFERRESIDENTNVPROC) sogl_loadOpenGLFunction("glIsBufferResidentNV");
    glMakeNamedBufferResidentNV = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeNamedBufferResidentNV");
    glMakeNamedBufferNonResidentNV = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) sogl_loadOpenGLFunction("glMakeNamedBufferNonResidentNV");
    glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC) sogl_loadOpenGLFunction("glIsNamedBufferResidentNV");
    glGetBufferParameterui64vNV = (PFNGLGETBUFFERPARAMETERUI64VNVPROC) sogl_loadOpenGLFunction("glGetBufferParameterui64vNV");
    glGetNamedBufferParameterui64vNV = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) sogl_loadOpenGLFunction("glGetNamedBufferParameterui64vNV");
    glGetIntegerui64vNV = (PFNGLGETINTEGERUI64VNVPROC) sogl_loadOpenGLFunction("glGetIntegerui64vNV");
    glUniformui64NV = (PFNGLUNIFORMUI64NVPROC) sogl_loadOpenGLFunction("glUniformui64NV");
    glUniformui64vNV = (PFNGLUNIFORMUI64VNVPROC) sogl_loadOpenGLFunction("glUniformui64vNV");
    glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC) sogl_loadOpenGLFunction("glGetUniformui64vNV");
    glProgramUniformui64NV = (PFNGLPROGRAMUNIFORMUI64NVPROC) sogl_loadOpenGLFunction("glProgramUniformui64NV");
    glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC) sogl_loadOpenGLFunction("glProgramUniformui64vNV");
#endif /* SOGL_NV_shader_buffer_load */

#ifdef SOGL_NV_shading_rate_image
    glBindShadingRateImageNV = (PFNGLBINDSHADINGRATEIMAGENVPROC) sogl_loadOpenGLFunction("glBindShadingRateImageNV");
    glGetShadingRateImagePaletteNV = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) sogl_loadOpenGLFunction("glGetShadingRateImagePaletteNV");
    glGetShadingRateSampleLocationivNV = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) sogl_loadOpenGLFunction("glGetShadingRateSampleLocationivNV");
    glShadingRateImageBarrierNV = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) sogl_loadOpenGLFunction("glShadingRateImageBarrierNV");
    glShadingRateImagePaletteNV = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) sogl_loadOpenGLFunction("glShadingRateImagePaletteNV");
    glShadingRateSampleOrderNV = (PFNGLSHADINGRATESAMPLEORDERNVPROC) sogl_loadOpenGLFunction("glShadingRateSampleOrderNV");
    glShadingRateSampleOrderCustomNV = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) sogl_loadOpenGLFunction("glShadingRateSampleOrderCustomNV");
#endif /* SOGL_NV_shading_rate_image */

#ifdef SOGL_NV_texture_barrier
    glTextureBarrierNV = (PFNGLTEXTUREBARRIERNVPROC) sogl_loadOpenGLFunction("glTextureBarrierNV");
#endif /* SOGL_NV_texture_barrier */

#ifdef SOGL_NV_vertex_attrib_integer_64bit
    glVertexAttribL1i64NV = (PFNGLVERTEXATTRIBL1I64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL1i64NV");
    glVertexAttribL2i64NV = (PFNGLVERTEXATTRIBL2I64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL2i64NV");
    glVertexAttribL3i64NV = (PFNGLVERTEXATTRIBL3I64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL3i64NV");
    glVertexAttribL4i64NV = (PFNGLVERTEXATTRIBL4I64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL4i64NV");
    glVertexAttribL1i64vNV = (PFNGLVERTEXATTRIBL1I64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL1i64vNV");
    glVertexAttribL2i64vNV = (PFNGLVERTEXATTRIBL2I64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL2i64vNV");
    glVertexAttribL3i64vNV = (PFNGLVERTEXATTRIBL3I64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL3i64vNV");
    glVertexAttribL4i64vNV = (PFNGLVERTEXATTRIBL4I64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL4i64vNV");
    glVertexAttribL1ui64NV = (PFNGLVERTEXATTRIBL1UI64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL1ui64NV");
    glVertexAttribL2ui64NV = (PFNGLVERTEXATTRIBL2UI64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL2ui64NV");
    glVertexAttribL3ui64NV = (PFNGLVERTEXATTRIBL3UI64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL3ui64NV");
    glVertexAttribL4ui64NV = (PFNGLVERTEXATTRIBL4UI64NVPROC) sogl_loadOpenGLFunction("glVertexAttribL4ui64NV");
    glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL1ui64vNV");
    glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL2ui64vNV");
    glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL3ui64vNV");
    glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC) sogl_loadOpenGLFunction("glVertexAttribL4ui64vNV");
    glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC) sogl_loadOpenGLFunction("glGetVertexAttribLi64vNV");
    glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC) sogl_loadOpenGLFunction("glGetVertexAttribLui64vNV");
    glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC) sogl_loadOpenGLFunction("glVertexAttribLFormatNV");
#endif /* SOGL_NV_vertex_attrib_integer_64bit */

#ifdef SOGL_NV_vertex_buffer_unified_memory
    glBufferAddressRangeNV = (PFNGLBUFFERADDRESSRANGENVPROC) sogl_loadOpenGLFunction("glBufferAddressRangeNV");
    glVertexFormatNV = (PFNGLVERTEXFORMATNVPROC) sogl_loadOpenGLFunction("glVertexFormatNV");
    glNormalFormatNV = (PFNGLNORMALFORMATNVPROC) sogl_loadOpenGLFunction("glNormalFormatNV");
    glColorFormatNV = (PFNGLCOLORFORMATNVPROC) sogl_loadOpenGLFunction("glColorFormatNV");
    glIndexFormatNV = (PFNGLINDEXFORMATNVPROC) sogl_loadOpenGLFunction("glIndexFormatNV");
    glTexCoordFormatNV = (PFNGLTEXCOORDFORMATNVPROC) sogl_loadOpenGLFunction("glTexCoordFormatNV");
    glEdgeFlagFormatNV = (PFNGLEDGEFLAGFORMATNVPROC) sogl_loadOpenGLFunction("glEdgeFlagFormatNV");
    glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC) sogl_loadOpenGLFunction("glSecondaryColorFormatNV");
    glFogCoordFormatNV = (PFNGLFOGCOORDFORMATNVPROC) sogl_loadOpenGLFunction("glFogCoordFormatNV");
    glVertexAttribFormatNV = (PFNGLVERTEXATTRIBFORMATNVPROC) sogl_loadOpenGLFunction("glVertexAttribFormatNV");
    glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC) sogl_loadOpenGLFunction("glVertexAttribIFormatNV");
    glGetIntegerui64i_vNV = (PFNGLGETINTEGERUI64I_VNVPROC) sogl_loadOpenGLFunction("glGetIntegerui64i_vNV");
#endif /* SOGL_NV_vertex_buffer_unified_memory */

#ifdef SOGL_NV_viewport_swizzle
    glViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC) sogl_loadOpenGLFunction("glViewportSwizzleNV");
#endif /* SOGL_NV_viewport_swizzle */

#ifdef SOGL_OVR_multiview
    glFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) sogl_loadOpenGLFunction("glFramebufferTextureMultiviewOVR");
#endif /* SOGL_OVR_multiview */

    sogl_cleanup();
}

#endif /* SOGL_IMPLEMENTATION */

#ifdef __cplusplus
}
#endif

#endif
