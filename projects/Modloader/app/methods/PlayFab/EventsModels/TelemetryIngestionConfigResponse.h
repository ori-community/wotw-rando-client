#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TelemetryIngestionConfigResponse.h>

namespace app::classes::PlayFab::EventsModels::TelemetryIngestionConfigResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TelemetryIngestionConfigResponse * this_ptr))
}
