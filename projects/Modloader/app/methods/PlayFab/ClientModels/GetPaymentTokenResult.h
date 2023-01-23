#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPaymentTokenResult.h>

namespace app::classes::PlayFab::ClientModels::GetPaymentTokenResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPaymentTokenResult * this_ptr))
}
