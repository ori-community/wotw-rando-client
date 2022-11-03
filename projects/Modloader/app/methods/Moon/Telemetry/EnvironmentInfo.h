#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::EnvironmentInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::EnvironmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E33210, void, ctor_2, (app::EnvironmentInfo * this_ptr, app::String* start_time, app::String* end_time, app::String* user_id, app::String* device_info, int32_t game_progres))
} // namespace app::classes::Moon::Telemetry::EnvironmentInfo
