/**
 * \file            lwprintf_opt.h
 * \brief           LwPRINTF options
 */

/*
 * Copyright (c) 2020 Tilen MAJERLE
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of LwPRINTF - Lightweight stdio manager library.
 *
 * Author:          Tilen MAJERLE <tilen@majerle.eu>
 * Version:         $_version_$
 */
#ifndef LWPRINTF_HDR_OPT_H
#define LWPRINTF_HDR_OPT_H

/* Include application options */
#ifndef LWPRINTF_IGNORE_USER_OPTS
#include "lwprintf_opts.h"
#endif /* LWPRINTF_IGNORE_USER_OPTS */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * \defgroup        LWPRINTF_OPT Configuration
 * \brief           LwPRINTF options
 * \{
 */

/**
 * \brief           Enables `1` or disables `0` operating system support in the library
 *
 * \note            When `LWPRINTF_CFG_OS` is enabled, user must implement functions in \ref LWPRINTF_SYS group.
 */
#ifndef LWPRINTF_CFG_OS
#define LWPRINTF_CFG_OS                            0
#endif

/**
 * \brief           Mutex handle type
 *
 * \note            This value must be set in case \ref LWPRINTF_CFG_OS is set to `1`.
 *                  If data type is not known to compiler, include header file with
 *                  definition before you define handle type
 */
#ifndef LWPRINTF_CFG_OS_MUTEX_HANDLE
#define LWPRINTF_CFG_OS_MUTEX_HANDLE               void *
#endif

/**
 * \brief           Enables `1` or disables `0` support for `long long int` type, signed or unsigned.
 *
 */
#ifndef LWPRINTF_CFG_SUPPORT_LONG_LONG
#define LWPRINTF_CFG_SUPPORT_LONG_LONG              1
#endif

/**
 * \brief           Enables `1` or disables `0` support `%%p` pointer print type
 *
 * When enabled, architecture must support `uintptr_t` type, normally available with C11 standard
 */
#ifndef LWPRINTF_CFG_SUPPORT_TYPE_POINTER
#define LWPRINTF_CFG_SUPPORT_TYPE_POINTER           1
#endif

/**
 * \brief           Enables `1` or disables `0` support `%%f` float type
 *
 */
#ifndef LWPRINTF_CFG_SUPPORT_TYPE_FLOAT
#define LWPRINTF_CFG_SUPPORT_TYPE_FLOAT             1
#endif

/**
 * \brief           Enables `1` or disables `0` support `%%e` engineering output type for float numbers
 *
 * \note            \ref LWPRINTF_CFG_SUPPORT_TYPE_FLOAT has to be enabled to use this feature
 *
 */
#ifndef LWPRINTF_CFG_SUPPORT_TYPE_ENGINEERING
#define LWPRINTF_CFG_SUPPORT_TYPE_ENGINEERING       1
#endif

/**
 * \brief           Specifies default number of precision for float number
 *
 */
#ifndef LWPRINTF_CFG_FLOAT_DEFAULT_PRECISION
#define LWPRINTF_CFG_FLOAT_DEFAULT_PRECISION        6
#endif

/**
 * \brief           Enables `1` or disables `0` support for `%K` for hex byte array output
 *
 */
#ifndef LWPRINTF_CFG_SUPPORT_TYPE_BYTE_ARRAY
#define LWPRINTF_CFG_SUPPORT_TYPE_BYTE_ARRAY        1
#endif

/**
 * \brief           Enables `1` or disables `0` support for `%s` for string output
 *
 */
#ifndef LWPRINTF_CFG_SUPPORT_TYPE_STRING
#define LWPRINTF_CFG_SUPPORT_TYPE_STRING            1
#endif

/**
 * \brief           Default `float/double` precision.
 * This is a number of digits displayed after decimal point.
 */
#ifndef LWPRINTF_CFG_FLOAT_PRECISION_DEFAULT
#define LWPRINTF_CFG_FLOAT_PRECISION_DEFAULT        6
#endif

/**
 * \}
 */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LWPRINTF_HDR_OPT_H */
