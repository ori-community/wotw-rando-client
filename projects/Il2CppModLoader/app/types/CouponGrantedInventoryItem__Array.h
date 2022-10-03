#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CouponGrantedInventoryItem__Array {
        namespace {
            app::CouponGrantedInventoryItem__Array__Class* type_info_ref = nullptr;
        }
        app::CouponGrantedInventoryItem__Array__Class** type_info = &type_info_ref;
        inline app::CouponGrantedInventoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CouponGrantedInventoryItem__Array__Class>(type_info, "PlayFab.PlayStreamModels", "CouponGrantedInventoryItem[]");
        }
        inline app::CouponGrantedInventoryItem__Array* create() {
            return il2cpp::create_object<app::CouponGrantedInventoryItem__Array>(get_class());
        }
    } // namespace CouponGrantedInventoryItem__Array
} // namespace app::classes::types
