#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkObjectInfo.h>

namespace app::classes::AkObjectInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkObjectInfo* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x018843A0, void*, getCPtr, app::AkObjectInfo* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkObjectInfo* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x01884430, void, Finalize, app::AkObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018844B0, void, Dispose, app::AkObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018846C0, void, set_objID, app::AkObjectInfo* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x018847F0, uint32_t, get_objID, app::AkObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01884910, void, set_parentID, app::AkObjectInfo* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01884A40, uint32_t, get_parentID, app::AkObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01884B60, void, set_iDepth, app::AkObjectInfo* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01884C90, int32_t, get_iDepth, app::AkObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01884DB0, void, Clear, app::AkObjectInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01884E50, int32_t, GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x01884EE0, void, Clone, app::AkObjectInfo* this_ptr, app::AkObjectInfo* other)
    IL2CPP_REGISTER_METHOD(0x01885000, void, ctor_2, app::AkObjectInfo* this_ptr)
} // namespace app::classes::AkObjectInfo
