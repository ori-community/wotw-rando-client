#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_BulkSettings.h>

namespace app::classes::Moon::Telemetry::Performance::ProfilingSettings_BulkSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProfilingSettings_BulkSettings * this_ptr))
}
