#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScriptExecutionError.h>

namespace app::classes::PlayFab::ClientModels::ScriptExecutionError {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ScriptExecutionError* this_ptr)
}
