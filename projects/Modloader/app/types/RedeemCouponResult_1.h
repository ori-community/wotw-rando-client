#pragma once
#include <Modloader/app/structs/RedeemCouponResult_1.h>
#include <Modloader/app/structs/RedeemCouponResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RedeemCouponResult_1 {
        inline app::RedeemCouponResult_1__Class** type_info() {
            static app::RedeemCouponResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RedeemCouponResult_1__Class**)(modloader::win::memory::resolve_rva(0x047767E8));
            }
            return cache;
        }
        inline app::RedeemCouponResult_1__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponResult_1__Class>(type_info(), "PlayFab.ServerModels", "RedeemCouponResult");
        }
        inline app::RedeemCouponResult_1* create() {
            return il2cpp::create_object<app::RedeemCouponResult_1>(get_class());
        }
    } // namespace RedeemCouponResult_1
} // namespace app::classes::types
