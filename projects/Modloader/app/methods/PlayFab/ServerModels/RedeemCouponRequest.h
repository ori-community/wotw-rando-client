#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RedeemCouponRequest_1.h>

namespace app::classes::PlayFab::ServerModels::RedeemCouponRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RedeemCouponRequest_1* this_ptr)
}
