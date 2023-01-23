#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverMenuItemGroup_CleverMenuItemGroupItem__Class.h>
#include <Modloader/app/structs/CleverMenuItemGroup_CleverMenuItemGroupItem.h>
#include <Modloader/app/structs/CleverMenuItemGroup_CleverMenuItemGroupItem__Array.h>

namespace app::classes::types {
    namespace CleverMenuItemGroup_CleverMenuItemGroupItem {
        namespace {
            inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Class** type_info = &type_info_ref;
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
