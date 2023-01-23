#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetry_SendRequestData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_.h>
#include <Modloader/app/structs/MoonTelemetrySendRequest.h>

namespace app::classes::MoonTelemetry_SendRequestData {
    IL2CPP_REGISTER_METHOD(0x02E9FBD0, bool, get_IsProcessing, (app::MoonTelemetry_SendRequestData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E9FBE0, bool, get_Ready, (app::MoonTelemetry_SendRequestData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::MoonTelemetry_SendRequestData * this_ptr, app::String* body))
    IL2CPP_REGISTER_METHOD(0x02E9FBF0, void, Send, (app::MoonTelemetry_SendRequestData * this_ptr, app::Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_* callback))
    IL2CPP_REGISTER_METHOD(0x02E9FF80, app::MoonTelemetrySendRequest*, GetRequest, (app::MoonTelemetry_SendRequestData * this_ptr))
} // namespace app::classes::MoonTelemetry_SendRequestData
