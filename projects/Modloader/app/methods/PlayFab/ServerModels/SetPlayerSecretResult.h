#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetPlayerSecretResult_1.h>

namespace app::classes::PlayFab::ServerModels::SetPlayerSecretResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetPlayerSecretResult_1 * this_ptr))
}
