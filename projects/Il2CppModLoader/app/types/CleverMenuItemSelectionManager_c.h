#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleverMenuItemSelectionManager_c__Class** type_info;
        inline app::CleverMenuItemSelectionManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemSelectionManager_c__Class>(type_info, "", "CleverMenuItemSelectionManager", "<>c");
        }
        inline app::CleverMenuItemSelectionManager_c* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_c>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager_c
} // namespace app::classes::types
