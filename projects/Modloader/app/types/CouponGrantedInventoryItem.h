#pragma once
#include <Modloader/app/structs/CouponGrantedInventoryItem.h>
#include <Modloader/app/structs/CouponGrantedInventoryItem__Array.h>
#include <Modloader/app/structs/CouponGrantedInventoryItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CouponGrantedInventoryItem {
        inline app::CouponGrantedInventoryItem__Class** type_info() {
            static app::CouponGrantedInventoryItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CouponGrantedInventoryItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CouponGrantedInventoryItem__Class* get_class() {
            return il2cpp::get_class<app::CouponGrantedInventoryItem__Class>(type_info(), "PlayFab.PlayStreamModels", "CouponGrantedInventoryItem");
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
