#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkSourceSettings.h>
#include <Modloader/app/structs/AkSourceSettingsArray.h>

namespace app::classes::AkSourceSettingsArray {
    IL2CPP_REGISTER_METHOD(0x026FAA50, void, ctor, app::AkSourceSettingsArray* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x026FAAE0, int32_t, get_StructureSize, app::AkSourceSettingsArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FAB70, void, DefaultConstructAtIntPtr, app::AkSourceSettingsArray* this_ptr, void* address)
    IL2CPP_REGISTER_METHOD(0x026FAC10, app::AkSourceSettings*, CreateNewReferenceFromIntPtr, app::AkSourceSettingsArray* this_ptr, void* address)
    IL2CPP_REGISTER_METHOD(0x026FAD60, void, CloneIntoReferenceFromIntPtr, app::AkSourceSettingsArray* this_ptr, void* address, app::AkSourceSettings* other)
} // namespace app::classes::AkSourceSettingsArray
