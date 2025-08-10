#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkObjectInfo.h>
#include <Modloader/app/structs/AkObjectInfoArray.h>

namespace app::classes::AkObjectInfoArray {
    IL2CPP_REGISTER_METHOD(0x01885120, void, ctor, app::AkObjectInfoArray* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x018851B0, int32_t, get_StructureSize, app::AkObjectInfoArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01885240, void, DefaultConstructAtIntPtr, app::AkObjectInfoArray* this_ptr, void* address)
    IL2CPP_REGISTER_METHOD(0x018852E0, app::AkObjectInfo*, CreateNewReferenceFromIntPtr, app::AkObjectInfoArray* this_ptr, void* address)
    IL2CPP_REGISTER_METHOD(0x01885430, void, CloneIntoReferenceFromIntPtr, app::AkObjectInfoArray* this_ptr, void* address, app::AkObjectInfo* other)
} // namespace app::classes::AkObjectInfoArray
