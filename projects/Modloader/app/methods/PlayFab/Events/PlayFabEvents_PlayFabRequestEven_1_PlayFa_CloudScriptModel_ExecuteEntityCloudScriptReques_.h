#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteEntityCloudScriptRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEven_1_PlayFa_CloudScriptModel_ExecuteEntityCloudScriptReques_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_* this_ptr,
        app::ExecuteEntityCloudScriptRequest* request
    )
}
