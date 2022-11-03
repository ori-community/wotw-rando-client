#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CouponGrantedInventoryItem__Array {
        namespace {
            inline app::CouponGrantedInventoryItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::CouponGrantedInventoryItem__Array__Class** type_info = &type_info_ref;
        inline app::CouponGrantedInventoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CouponGrantedInventoryItem__Array__Class>(type_info, "PlayFab.PlayStreamModels", "CouponGrantedInventoryItem[]");
        }
        inline app::CouponGrantedInventoryItem__Array* create() {
            return il2cpp::create_object<app::CouponGrantedInventoryItem__Array>(get_class());
        }
    } // namespace CouponGrantedInventoryItem__Array
} // namespace app::classes::types
