#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteCloudScriptServerRequest.h>

namespace app::classes::PlayFab::ServerModels::ExecuteCloudScriptServerRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExecuteCloudScriptServerRequest * this_ptr))
}
