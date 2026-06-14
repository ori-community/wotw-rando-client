#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfirmPurchaseRequest.h>

namespace app::classes::PlayFab::ClientModels::ConfirmPurchaseRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ConfirmPurchaseRequest* this_ptr)
}
