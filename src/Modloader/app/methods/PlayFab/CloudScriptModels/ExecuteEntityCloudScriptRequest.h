#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteEntityCloudScriptRequest.h>

namespace app::classes::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExecuteEntityCloudScriptRequest* this_ptr)
}
