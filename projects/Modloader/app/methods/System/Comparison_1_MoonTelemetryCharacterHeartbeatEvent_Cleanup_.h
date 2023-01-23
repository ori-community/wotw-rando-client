#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ * this_ptr, app::MoonTelemetryCharacterHeartbeatEvent_Cleanup x, app::MoonTelemetryCharacterHeartbeatEvent_Cleanup y))
    IL2CPP_REGISTER_METHOD(0x02C7B0F0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ * this_ptr, app::MoonTelemetryCharacterHeartbeatEvent_Cleanup x, app::MoonTelemetryCharacterHeartbeatEvent_Cleanup y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_
