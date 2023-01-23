#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RedeemCouponRequest_1__Class.h>
#include <Modloader/app/structs/RedeemCouponRequest_1.h>

namespace app::classes::types {
    namespace RedeemCouponRequest_1 {
        inline app::RedeemCouponRequest_1__Class** type_info = (app::RedeemCouponRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04728B18));
        inline app::RedeemCouponRequest_1__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponRequest_1__Class>(type_info, "PlayFab.ServerModels", "RedeemCouponRequest");
        }
        inline app::RedeemCouponRequest_1* create() {
            return il2cpp::create_object<app::RedeemCouponRequest_1>(get_class());
        }
    } // namespace RedeemCouponRequest_1
} // namespace app::classes::types
