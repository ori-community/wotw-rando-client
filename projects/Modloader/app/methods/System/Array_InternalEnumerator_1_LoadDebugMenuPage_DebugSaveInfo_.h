#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001630B0, app::LoadDebugMenuPage_DebugSaveInfo, get_Current, (app::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047495E8, Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001630E0, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_LoadDebugMenuPage_DebugSaveInfo_
