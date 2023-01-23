#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RedeemCouponResult__Class.h>
#include <Modloader/app/structs/RedeemCouponResult.h>

namespace app::classes::types {
    namespace RedeemCouponResult {
        inline app::RedeemCouponResult__Class** type_info = (app::RedeemCouponResult__Class**)(modloader::win::memory::resolve_rva(0x04759D20));
        inline app::RedeemCouponResult__Class* get_class() {
            return il2cpp::get_class<app::RedeemCouponResult__Class>(type_info, "PlayFab.ClientModels", "RedeemCouponResult");
        }
        inline app::RedeemCouponResult* create() {
            return il2cpp::create_object<app::RedeemCouponResult>(get_class());
        }
    } // namespace RedeemCouponResult
} // namespace app::classes::types
