#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItemGroup_CleverMenuItemGroupItem__Array {
        namespace {
            inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array__Class>(type_info, "", "CleverMenuItemGroup+CleverMenuItemGroupItem[]");
        }
        inline app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array* create() {
            return il2cpp::create_object<app::CleverMenuItemGroup_CleverMenuItemGroupItem__Array>(get_class());
        }
    } // namespace CleverMenuItemGroup_CleverMenuItemGroupItem__Array
} // namespace app::classes::types
