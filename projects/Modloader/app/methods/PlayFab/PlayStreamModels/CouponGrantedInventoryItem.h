#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CouponGrantedInventoryItem.h>

namespace app::classes::PlayFab::PlayStreamModels::CouponGrantedInventoryItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CouponGrantedInventoryItem * this_ptr))
}
