#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RedeemCouponRequest.h>

namespace app::classes::PlayFab::ClientModels::RedeemCouponRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RedeemCouponRequest* this_ptr)
}
