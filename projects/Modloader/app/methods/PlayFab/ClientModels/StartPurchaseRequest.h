#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StartPurchaseRequest.h>

namespace app::classes::PlayFab::ClientModels::StartPurchaseRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StartPurchaseRequest * this_ptr))
}
