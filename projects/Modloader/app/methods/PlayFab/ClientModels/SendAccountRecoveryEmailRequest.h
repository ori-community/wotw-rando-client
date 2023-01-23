#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest.h>

namespace app::classes::PlayFab::ClientModels::SendAccountRecoveryEmailRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SendAccountRecoveryEmailRequest * this_ptr))
}
