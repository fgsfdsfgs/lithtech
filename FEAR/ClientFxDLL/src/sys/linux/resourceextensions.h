#ifndef FEAR_LINUX_RESOURCE_EXTENSIONS_H
#define FEAR_LINUX_RESOURCE_EXTENSIONS_H
/*
    copyrighted by Rene Kjellerup (Katana Steel)
    and disributed under GNU GPLv3 or later
*/

struct SDynamicVertexBufferLockRequest {
    uint64_t m_nStartIndex=0;
    void *m_pData;
};
struct HVERTEXDECL {};

#endif