#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPurchaseRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPurchaseRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPurchaseRequest* this_ptr)
}
