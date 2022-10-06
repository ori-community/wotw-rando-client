#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreItem {
        namespace {
            app::StoreItem__Class* type_info_ref = nullptr;
        }
        app::StoreItem__Class** type_info = &type_info_ref;
        inline app::StoreItem__Class* get_class() {
            return il2cpp::get_class<app::StoreItem__Class>(type_info, "PlayFab.ClientModels", "StoreItem");
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
