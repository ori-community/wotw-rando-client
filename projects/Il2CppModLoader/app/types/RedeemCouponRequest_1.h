#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RedeemCouponRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RedeemCouponRequest_1__Class** type_info;
        inline app::RedeemCouponRequest_1__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponRequest_1__Class>(type_info, "PlayFab.ServerModels", "RedeemCouponRequest");
        }
        inline app::RedeemCouponRequest_1* create() {
            return il2cpp::create_object<app::RedeemCouponRequest_1>(get_class());
        }
    } // namespace RedeemCouponRequest_1
} // namespace app::classes::types
