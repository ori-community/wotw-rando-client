#pragma once
#include <Modloader/app/structs/StoreItem.h>
#include <Modloader/app/structs/StoreItem__Array.h>
#include <Modloader/app/structs/StoreItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreItem {
        inline app::StoreItem__Class** type_info() {
            static app::StoreItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StoreItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StoreItem__Class* get_class() {
            return il2cpp::get_class<app::StoreItem__Class>(type_info(), "PlayFab.ClientModels", "StoreItem");
        }
        inline app::StoreItem* create() {
            return il2cpp::create_object<app::StoreItem>(get_class());
        }
        inline app::StoreItem__Array* create_array(int size) {
            return il2cpp::array_new<app::StoreItem__Array>(get_class(), size);
        }
        inline app::StoreItem__Array* create_array(const std::vector<app::StoreItem*>& items) {
            return il2cpp::array_new<app::StoreItem__Array>(get_class(), items);
        }
    } // namespace StoreItem
} // namespace app::classes::types
