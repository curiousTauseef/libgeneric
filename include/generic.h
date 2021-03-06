/*
 *   MIT License
 *
 *   Copyright (c) 2017 Sidhin S Thomas
 *
 *   Permission is hereby granted, free of charge, to any person obtaining a copy
 *   of this software and associated documentation files (the "Software"), to deal
 *   in the Software without restriction, including without limitation the rights
 *   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *   copies of the Software, and to permit persons to whom the Software is
 *   furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in all
 *   copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *   SOFTWARE.
 */

#ifndef DATA_STRUCTURE_ST_DATA_STRUCTURE_H
#define DATA_STRUCTURE_ST_DATA_STRUCTURE_H

/** @brief Pointer to a comparison function
 *
 * @param a:	1st value being compared
 * @param b:	2nd value being compared
 *
 * @return	0 if equal, positive if a>b, negative if a<b
 */
typedef int (*cmpfunc_t)(void *a,void *b);


#define G_ENOMEN        12  /* Memory allocation failed */
#define G_EBUFUNDR      10  /* Underflow */
#define G_EINVAL        11  /* Invalid Value Given */
#define G_ENOITM        6   /* Instance Empty */
#define G_EITMEND       9   /* End of Linear Data Structure */
#define G_EINVLD        2   /* Invalid container */

extern int gErrorCode;


#endif //DATA_STRUCTURE_ST_DATA_STRUCTURE_H
