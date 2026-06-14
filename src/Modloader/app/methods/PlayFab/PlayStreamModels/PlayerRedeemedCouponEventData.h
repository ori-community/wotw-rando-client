#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerRedeemedCouponEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerRedeemedCouponEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerRedeemedCouponEventData* this_ptr)
}
