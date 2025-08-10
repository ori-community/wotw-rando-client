#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkReflectionPathInfo.h>
#include <Modloader/app/structs/AkReflectionPathInfoArray.h>

namespace app::classes::AkReflectionPathInfoArray {
    IL2CPP_REGISTER_METHOD(0x01894BF0, void, ctor, app::AkReflectionPathInfoArray* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01894C80, int32_t, get_StructureSize, app::AkReflectionPathInfoArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01894D10, app::AkReflectionPathInfo*, CreateNewReferenceFromIntPtr, app::AkReflectionPathInfoArray* this_ptr, void* address)
    IL2CPP_REGISTER_METHOD(
        0x01894E60,
        void,
        CloneIntoReferenceFromIntPtr,
        app::AkReflectionPathInfoArray* this_ptr,
        void* address,
        app::AkReflectionPathInfo* other
    )
} // namespace app::classes::AkReflectionPathInfoArray
