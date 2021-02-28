/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


/*
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *
 *  Copyright (C) 2019-2021  The DOSBox Staging Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Compiling on BSD */
/* #undef BSD */

/* Suffix of the .conf file. */
#define CONF_BRAND "staging-git"

/* Define to 1 to enable ALSA MIDI support */
#define C_ALSA 1

/* Compiler supports Core Audio headers */
/* #undef C_COREAUDIO */

/* Compiler supports Core MIDI headers */
/* #undef C_COREMIDI */

/* Define to 1 to use inlined memory functions in cpu core */
#define C_CORE_INLINE 1

/* Define to 1 to enable internal debugger, requires ncurses or pdcurses */
/* #undef C_DEBUG */

/* Define to 1 if you want serial passthrough support (Win32 and Posix). */
#define C_DIRECTSERIAL 1

/* Define to 1 to use x86/x64 dynamic cpu core */
/* #undef C_DYNAMIC_X86 */

/* Define to 1 to use recompiling cpu core. Can not be used together with the
   dynamic-x86 core */
#define C_DYNREC 1

/* Define to 1 to enable FluidSynth MIDI synthesizer */
#define C_FLUIDSYNTH 0

/* Define to 1 to enable floating point emulation */
#define C_FPU 1

/* Define to 1 to use a x86/x64 assembly fpu core */
/* #undef C_FPU_X86 */

/* Determines if the compilers supports __builtin_expect for branch
   prediction. */
#define C_HAS_BUILTIN_EXPECT 1

/* Define to 1 to enable heavy debugging, requires C_DEBUG */
/* #undef C_HEAVY_DEBUG */

/* Define to 1 to enable IPX over Internet networking, requires SDL2_net */
#define C_IPX 1

/* Define to 1 to enable internal modem support, requires SDL2_net */
#define C_MODEM 1

/* Define to 1 to enable mt32emu, an MT-32 audio synthesizer */
#define C_MT32EMU 0

/* Define to 1 to use opengl display output support */
#define C_OPENGL 1

/* Define to 1 to enable screenshots, requires libpng */
#define C_SSHOT 1

/* The type of cpu this target has */
#define C_TARGETCPU ARMV4LE

/* Define to 1 to use a unaligned memory access */
/* #undef C_UNALIGNED_MEMORY */

/* Determines if the function clock_gettime is available. */
#define HAVE_CLOCK_GETTIME 1

/* define if the compiler supports basic C++14 syntax */
#define HAVE_CXX14 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `asound' library (-lasound). */
#define HAVE_LIBASOUND 1

/* Define to 1 if you have the `network' library (-lnetwork). */
/* #undef HAVE_LIBNETWORK */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the mprotect function */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have setpriority support */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* struct dirent has d_type */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Compiling on GNU/Linux */
#define LINUX 1

/* Compiling on Mac OS X */
/* #undef MACOSX */

/* Prevent <windows.h> from clobbering std::min and std::max */
/* #undef NOMINMAX */

/* Name of package */
#define PACKAGE "dosbox"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "dosbox"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "dosbox git"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dosbox"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "git"

/* Non-4K page size; currently ppc64le only */
/* #undef PAGESIZE */

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* The size of `int *', as computed by sizeof. */
#define SIZEOF_INT_P 4

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "git"

/* Compiling on Windows */
/* #undef WIN32 */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int` if you don't have socklen_t */
/* #undef socklen_t */
