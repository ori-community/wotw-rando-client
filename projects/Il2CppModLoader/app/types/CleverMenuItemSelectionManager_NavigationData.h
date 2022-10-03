#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_NavigationData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CleverMenuItemSelectionManager_NavigationData__Class** type_info;
        inline app::CleverMenuItemSelectionManager_NavigationData__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemSelectionManager_NavigationData__Class>(type_info, "", "CleverMenuItemSelectionManager", "NavigationData");
        }
        inline app::CleverMenuItemSelectionManager_NavigationData* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_NavigationData>(get_class());
        }
        inline app::CleverMenuItemSelectionManager_NavigationData__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItemSelectionManager_NavigationData__Array>(get_class(), size);
        }
    } // namespace CleverMenuItemSelectionManager_NavigationData
} // namespace app::classes::types
