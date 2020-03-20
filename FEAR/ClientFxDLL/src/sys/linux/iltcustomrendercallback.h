#ifndef FEAR_LINUX_CUSTOM_RENDER_H
#define FEAR_LINUX_CUSTOM_RENDER_H
/*
    copyrighted by Rene Kjellerup (Katana Steel)
    and disributed under GNU GPLv3 or later
*/

#include <cstdint>
#include "resourceextensions.h"

class ILTCustomRenderCallback {
public:
    void operator()(){};
    void RenderIndexed() {};
    void UnlockAndBindDynamicVertexBuffer(SDynamicVertexBufferLockRequest) {};
    bool LockDynamicVertexBuffer(uint64_t, SDynamicVertexBufferLockRequest) { return false; };
    bool SetVertexDeclaration(HVERTEXDECL) { return false; };
    bool BindQuadIndexStream() { return false; };
    void SetVisBoundingSphere() {};
};

#endif
