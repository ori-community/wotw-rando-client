#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TelemetryIngestionConfigRequest.h>

namespace app::classes::PlayFab::EventsModels::TelemetryIngestionConfigRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TelemetryIngestionConfigRequest* this_ptr)
}
