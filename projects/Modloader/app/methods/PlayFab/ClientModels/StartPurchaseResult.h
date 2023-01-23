#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StartPurchaseResult.h>

namespace app::classes::PlayFab::ClientModels::StartPurchaseResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StartPurchaseResult * this_ptr))
}
