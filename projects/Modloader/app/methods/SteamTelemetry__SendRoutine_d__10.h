#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SteamTelemetry_SendRoutine_d_10.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::SteamTelemetry__SendRoutine_d__10 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::SteamTelemetry_SendRoutine_d_10 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::SteamTelemetry_SendRoutine_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F5160, bool, MoveNext, (app::SteamTelemetry_SendRoutine_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::SteamTelemetry_SendRoutine_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F53A0, void, IEnumerator_Reset, (app::SteamTelemetry_SendRoutine_d_10 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::SteamTelemetry_SendRoutine_d_10 * this_ptr))
} // namespace app::classes::SteamTelemetry__SendRoutine_d__10
