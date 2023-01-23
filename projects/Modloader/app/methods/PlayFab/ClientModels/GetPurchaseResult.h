#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPurchaseResult.h>

namespace app::classes::PlayFab::ClientModels::GetPurchaseResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPurchaseResult * this_ptr))
}
