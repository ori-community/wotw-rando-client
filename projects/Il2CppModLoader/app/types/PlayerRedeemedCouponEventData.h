#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerRedeemedCouponEventData {
        namespace {
            app::PlayerRedeemedCouponEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerRedeemedCouponEventData__Class** type_info = &type_info_ref;
        inline app::PlayerRedeemedCouponEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRedeemedCouponEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerRedeemedCouponEventData");
        }
        inline app::PlayerRedeemedCouponEventData* create() {
            return il2cpp::create_object<app::PlayerRedeemedCouponEventData>(get_class());
        }
    } // namespace PlayerRedeemedCouponEventData
} // namespace app::classes::types
