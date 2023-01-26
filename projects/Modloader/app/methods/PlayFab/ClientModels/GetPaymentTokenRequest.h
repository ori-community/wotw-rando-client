#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPaymentTokenRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPaymentTokenRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPaymentTokenRequest * this_ptr))
}
