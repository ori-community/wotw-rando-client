#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CouponGrantedInventoryItem {
        namespace {
            inline app::CouponGrantedInventoryItem__Class* type_info_ref = nullptr;
        }
        inline app::CouponGrantedInventoryItem__Class** type_info = &type_info_ref;
        inline app::CouponGrantedInventoryItem__Class* get_class() {
            return il2cpp::get_class<app::CouponGrantedInventoryItem__Class>(type_info, "PlayFab.PlayStreamModels", "CouponGrantedInventoryItem");
        }
        inline app::CouponGrantedInventoryItem* create() {
            return il2cpp::create_object<app::CouponGrantedInventoryItem>(get_class());
        }
        inline app::CouponGrantedInventoryItem__Array* create_array(int size) {
            return il2cpp::array_new<app::CouponGrantedInventoryItem__Array>(get_class(), size);
        }
        inline app::CouponGrantedInventoryItem__Array* create_array(const std::vector<app::CouponGrantedInventoryItem*>& items) {
            return il2cpp::array_new<app::CouponGrantedInventoryItem__Array>(get_class(), items);
        }
    } // namespace CouponGrantedInventoryItem
} // namespace app::classes::types
