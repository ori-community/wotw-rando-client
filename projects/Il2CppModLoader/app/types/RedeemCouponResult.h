#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RedeemCouponResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RedeemCouponResult__Class** type_info;
        inline app::RedeemCouponResult__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponResult__Class>(type_info, "PlayFab.ClientModels", "RedeemCouponResult");
        }
        inline app::RedeemCouponResult* create() {
            return il2cpp::create_object<app::RedeemCouponResult>(get_class());
        }
    } // namespace RedeemCouponResult
} // namespace app::classes::types
