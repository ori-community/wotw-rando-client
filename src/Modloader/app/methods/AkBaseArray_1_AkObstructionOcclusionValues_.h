#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkBaseArray_1_AkObstructionOcclusionValues_.h>

namespace app::classes::AkBaseArray_1_AkObstructionOcclusionValues_ {
    IL2CPP_REGISTER_METHOD(0x019D7280, void, ctor, app::AkBaseArray_1_AkObstructionOcclusionValues_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x002FB930, void*, GetBuffer, app::AkBaseArray_1_AkObstructionOcclusionValues_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D7510, void, Finalize, app::AkBaseArray_1_AkObstructionOcclusionValues_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D73D0, void, Dispose, app::AkBaseArray_1_AkObstructionOcclusionValues_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D75C0, int32_t, Count, app::AkBaseArray_1_AkObstructionOcclusionValues_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        ReleaseAllocatedMemoryFromReferenceAtIntPtr,
        app::AkBaseArray_1_AkObstructionOcclusionValues_* this_ptr,
        void* address
    )
} // namespace app::classes::AkBaseArray_1_AkObstructionOcclusionValues_
