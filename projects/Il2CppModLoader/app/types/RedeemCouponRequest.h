#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RedeemCouponRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RedeemCouponRequest__Class** type_info;
        inline app::RedeemCouponRequest__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponRequest__Class>(type_info, "PlayFab.ClientModels", "RedeemCouponRequest");
        }
        inline app::RedeemCouponRequest* create() {
            return il2cpp::create_object<app::RedeemCouponRequest>(get_class());
        }
    } // namespace RedeemCouponRequest
} // namespace app::classes::types
