#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PayForPurchaseRequest.h>

namespace app::classes::PlayFab::ClientModels::PayForPurchaseRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PayForPurchaseRequest* this_ptr)
}
