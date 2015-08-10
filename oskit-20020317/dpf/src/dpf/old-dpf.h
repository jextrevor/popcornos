/*
 * Copyright (c) 1997 M.I.T.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *      This product includes software developed by MIT.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND 
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */


/*
 * Exported DPF interface.
 */
#ifndef __OLD_DPF_H__
#define __OLD_DPF_H__

#ifdef OSKIT
#include <dpf.h>
#endif

#if 0
/* error codes */
enum {
        DPF_SUCCESS = 1,
        DPF_INVALIDPID = -1,
        DPF_FILTER_OVERLAP = -2,
};
#endif


/* DPF ops. */
enum {
        DPF_NIL,
        /* nulary operators */
#       define DPF_NULARY_P(x) ((x) >= DPF_SHIFTI && (x) <= DPF_BITS32I)
        DPF_SHIFTI,
#       define DPF_BITS_P(x) ((x) >= DPF_BITS8I && (x) <= DPF_BITS32)
        DPF_BITS8I,
        DPF_BITS16I,
        DPF_BITS32I,
        /* unary operators (and operators with constant right operands) */
#       define DPF_UNARY_P(x) ((x) >= DPF_SHIFT && (x) <= DPF_BITS32)
        DPF_BITS8,
        DPF_BITS16,
        DPF_BITS32,
        DPF_SHIFT,
        DPF_EQI,
        DPF_NEI,
        DPF_ANDI,
        DPF_ORI,
        /* binary operators */
#       define DPF_BINARY_P(x) ((x) >= DPF_EQ && (x) <= DPF_OR)
        DPF_EQ,
        DPF_NE,
        DPF_AND,
        DPF_OR,
        /* n-ary operators */
        DPF_DEQ,                /* disjunction (hash table of values) */
        DPF_OROR,
        /* some ops used by the code generator */
        DPF_IMM,
        DPF_NOTHING,
        DPF_LAST
};

/* 
 * Swizzled filter form.  Generated by preprocessor.  
 */
struct dpf_frozen_ir {
        unsigned char   op,     /* the operator */
                        len;    /* length of conjunction or shift */
        signed char     r0,     /* kid numbers that we depend on (if any). */
                        r1;
        unsigned        imm;    /* immediate value (if any) */
};

int (*dpf_iptr)(unsigned char *msg, unsigned nbytes);

#endif /* __OLD_DPF_H__ */
