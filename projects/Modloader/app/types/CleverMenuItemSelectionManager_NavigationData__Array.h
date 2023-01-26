#pragma once
#include <Modloader/app/structs/CleverMenuItemSelectionManager_NavigationData__Array.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_NavigationData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_NavigationData__Array {
        inline app::CleverMenuItemSelectionManager_NavigationData__Array__Class** type_info() {
            static app::CleverMenuItemSelectionManager_NavigationData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemSelectionManager_NavigationData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemSelectionManager_NavigationData__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemSelectionManager_NavigationData__Array__Class>(type_info(), "", "CleverMenuItemSelectionManager+NavigationData[]");
        }
        inline app::CleverMenuItemSelectionManager_NavigationData__Array* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_NavigationData__Array>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager_NavigationData__Array
} // namespace app::classes::types
