#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScriptExecutionError_1.h>

namespace app::classes::PlayFab::CloudScriptModels::ScriptExecutionError {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScriptExecutionError_1 * this_ptr))
}
