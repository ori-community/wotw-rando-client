#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScriptExecutionError_2.h>

namespace app::classes::PlayFab::ServerModels::ScriptExecutionError {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ScriptExecutionError_2* this_ptr)
}
