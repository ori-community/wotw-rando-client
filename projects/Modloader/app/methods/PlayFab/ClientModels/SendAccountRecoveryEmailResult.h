#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SendAccountRecoveryEmailResult.h>

namespace app::classes::PlayFab::ClientModels::SendAccountRecoveryEmailResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SendAccountRecoveryEmailResult * this_ptr))
}
