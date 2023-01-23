#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkExternalSourceInfoArray.h>
#include <Modloader/app/structs/AkExternalSourceInfo.h>

namespace app::classes::AkExternalSourceInfoArray {
    IL2CPP_REGISTER_METHOD(0x026E5F20, void, ctor, (app::AkExternalSourceInfoArray * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x026E5FB0, int32_t, get_StructureSize, (app::AkExternalSourceInfoArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E6040, void, DefaultConstructAtIntPtr, (app::AkExternalSourceInfoArray * this_ptr, void* address))
    IL2CPP_REGISTER_METHOD(0x026E60E0, void, ReleaseAllocatedMemoryFromReferenceAtIntPtr, (app::AkExternalSourceInfoArray * this_ptr, void* address))
    IL2CPP_REGISTER_METHOD(0x026E6180, app::AkExternalSourceInfo*, CreateNewReferenceFromIntPtr, (app::AkExternalSourceInfoArray * this_ptr, void* address))
    IL2CPP_REGISTER_METHOD(0x026E62D0, void, CloneIntoReferenceFromIntPtr, (app::AkExternalSourceInfoArray * this_ptr, void* address, app::AkExternalSourceInfo* other))
} // namespace app::classes::AkExternalSourceInfoArray
