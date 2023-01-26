#pragma once
#include <Modloader/app/structs/RedeemCouponRequest.h>
#include <Modloader/app/structs/RedeemCouponRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RedeemCouponRequest {
        inline app::RedeemCouponRequest__Class** type_info() {
            static app::RedeemCouponRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RedeemCouponRequest__Class**)(modloader::win::memory::resolve_rva(0x04714320));
            }
            return cache;
        }
        inline app::RedeemCouponRequest__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponRequest__Class>(type_info(), "PlayFab.ClientModels", "RedeemCouponRequest");
        }
        inline app::RedeemCouponRequest* create() {
            return il2cpp::create_object<app::RedeemCouponRequest>(get_class());
        }
    } // namespace RedeemCouponRequest
} // namespace app::classes::types
