#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteCloudScriptResult_2.h>

namespace app::classes::PlayFab::ServerModels::ExecuteCloudScriptResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExecuteCloudScriptResult_2* this_ptr)
}
