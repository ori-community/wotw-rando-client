#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleverMenuItemGroup__Class** type_info;
        inline app::CleverMenuItemGroup__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroup__Class>(type_info, "", "CleverMenuItemGroup");
        }
        inline app::CleverMenuItemGroup* create() {
            return il2cpp::create_object<app::CleverMenuItemGroup>(get_class());
        }
        inline app::CleverMenuItemGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItemGroup__Array>(get_class(), size);
        }
    } // namespace CleverMenuItemGroup
} // namespace app::classes::types
