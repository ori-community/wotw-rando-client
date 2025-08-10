#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabLoggerBase_RegisterLogger_d_23.h>

namespace app::classes::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::PlayFabLoggerBase_RegisterLogger_d_23* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::PlayFabLoggerBase_RegisterLogger_d_23* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AD2DE0, bool, MoveNext, app::PlayFabLoggerBase_RegisterLogger_d_23* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::PlayFabLoggerBase_RegisterLogger_d_23* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AD3070, void, IEnumerator_Reset, app::PlayFabLoggerBase_RegisterLogger_d_23* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::PlayFabLoggerBase_RegisterLogger_d_23* this_ptr)
} // namespace app::classes::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23
