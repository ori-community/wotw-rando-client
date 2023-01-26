#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteCloudScriptResult_3.h>

namespace app::classes::PlayFab::PlayStreamModels::ExecuteCloudScriptResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExecuteCloudScriptResult_3 * this_ptr))
}
