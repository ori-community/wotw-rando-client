#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExecuteCloudScriptRequest.h>

namespace app::classes::PlayFab::ClientModels::ExecuteCloudScriptRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExecuteCloudScriptRequest * this_ptr))
}
