#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ReportPlayerServerRequest_.h>
#include <Modloader/app/structs/ReportPlayerServerRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ReportPlayerServerRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_ReportPlayerServerRequest_* this_ptr,
        app::ReportPlayerServerRequest* request
    )
}
