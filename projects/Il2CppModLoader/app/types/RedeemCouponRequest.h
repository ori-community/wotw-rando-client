#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RedeemCouponRequest {
        inline app::RedeemCouponRequest__Class** type_info = (app::RedeemCouponRequest__Class**)(modloader::win::memory::resolve_rva(0x04714320));
        inline app::RedeemCouponRequest__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponRequest__Class>(type_info, "PlayFab.ClientModels", "RedeemCouponRequest");
        }
        inline app::RedeemCouponRequest* create() {
            return il2cpp::create_object<app::RedeemCouponRequest>(get_class());
        }
    } // namespace RedeemCouponRequest
} // namespace app::classes::types
