#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_NavigationData__Array {
        namespace {
            inline app::CleverMenuItemSelectionManager_NavigationData__Array__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemSelectionManager_NavigationData__Array__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemSelectionManager_NavigationData__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemSelectionManager_NavigationData__Array__Class>(type_info, "", "CleverMenuItemSelectionManager+NavigationData[]");
        }
        inline app::CleverMenuItemSelectionManager_NavigationData__Array* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_NavigationData__Array>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager_NavigationData__Array
} // namespace app::classes::types
