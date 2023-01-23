#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExecuteCloudScriptResult.h>

namespace app::classes::PlayFab::ClientModels::ExecuteCloudScriptResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExecuteCloudScriptResult * this_ptr))
}
