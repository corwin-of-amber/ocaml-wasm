#ifndef __PIC__
#  define ARCH_CODE32
#endif
//#define ARCH_SIXTYFOUR
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_PTR 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONGLONG 8
#define INT64_LITERAL(s) s ## LL
#undef ARCH_BIG_ENDIAN
#undef ARCH_ALIGN_DOUBLE
#undef ARCH_ALIGN_INT64
#define PROFINFO_WIDTH 0
#define FLAT_FLOAT_ARRAY
