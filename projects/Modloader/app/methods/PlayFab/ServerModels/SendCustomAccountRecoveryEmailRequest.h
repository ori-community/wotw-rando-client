#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SendCustomAccountRecoveryEmailRequest.h>

namespace app::classes::PlayFab::ServerModels::SendCustomAccountRecoveryEmailRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SendCustomAccountRecoveryEmailRequest * this_ptr))
}
