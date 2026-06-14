#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScriptExecutionError_3.h>

namespace app::classes::PlayFab::PlayStreamModels::ScriptExecutionError {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ScriptExecutionError_3* this_ptr)
}
