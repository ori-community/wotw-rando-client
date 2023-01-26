#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetPlayerSecretResult.h>

namespace app::classes::PlayFab::ClientModels::SetPlayerSecretResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetPlayerSecretResult * this_ptr))
}
