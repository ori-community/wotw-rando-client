#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroup_CleverMenuItemGroupItem {
        namespace {
            app::CleverMenuItemGroup_CleverMenuItemGroupItem__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItemGroup_CleverMenuItemGroupItem__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemGroup_CleverMenuItemGroupItem__Class>(type_info, "", "CleverMenuItemGroup", "CleverMenuItemGroupItem");
        }
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem* create() {
            return il2cpp::create_object<app::CleverMenuItemGroup_CleverMenuItemGroupItem>(get_class());
        }
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array>(get_class(), size);
        }
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array* create_array(const std::vector<app::CleverMenuItemGroup_CleverMenuItemGroupItem*>& items) {
            return il2cpp::array_new<app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array>(get_class(), items);
        }
    } // namespace CleverMenuItemGroup_CleverMenuItemGroupItem
} // namespace app::classes::types
