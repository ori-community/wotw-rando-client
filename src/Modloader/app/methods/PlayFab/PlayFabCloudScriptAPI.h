#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/ExecuteEntityCloudScriptRequest.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::PlayFabCloudScriptAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01A255B0, void, ForgetAllCredentials, )
    IL2CPP_REGISTER_METHOD(
        0x01A25640,
        void,
        ExecuteEntityCloudScript,
        app::ExecuteEntityCloudScriptRequest* request,
        app::Action_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
} // namespace app::classes::PlayFab::PlayFabCloudScriptAPI
