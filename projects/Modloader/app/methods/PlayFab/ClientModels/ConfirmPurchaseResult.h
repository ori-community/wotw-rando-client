#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfirmPurchaseResult.h>

namespace app::classes::PlayFab::ClientModels::ConfirmPurchaseResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConfirmPurchaseResult * this_ptr))
}
