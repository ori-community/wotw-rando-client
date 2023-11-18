#pragma once
#include <Modloader/app/structs/PlayerRedeemedCouponEventData.h>
#include <Modloader/app/structs/PlayerRedeemedCouponEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerRedeemedCouponEventData {
        inline app::PlayerRedeemedCouponEventData__Class** type_info() {
            static app::PlayerRedeemedCouponEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerRedeemedCouponEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerRedeemedCouponEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRedeemedCouponEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerRedeemedCouponEventData");
        }
        inline app::PlayerRedeemedCouponEventData* create() {
            return il2cpp::create_object<app::PlayerRedeemedCouponEventData>(get_class());
        }
    } // namespace PlayerRedeemedCouponEventData
} // namespace app::classes::types
