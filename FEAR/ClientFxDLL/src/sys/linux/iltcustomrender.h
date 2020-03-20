#ifdef __LINUX
#define __ILTCUSTOMRENDER_H__
namespace {
    struct vertexdecl;
    typedef vertexdecl* HVERTEXDECL;

    #include "iltcustomrendercallback.h"
}
#endif // linux