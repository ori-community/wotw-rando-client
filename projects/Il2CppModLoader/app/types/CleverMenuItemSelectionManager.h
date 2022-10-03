#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager {
        namespace {
            app::CleverMenuItemSelectionManager__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItemSelectionManager__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemSelectionManager__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemSelectionManager__Class>(type_info, "", "CleverMenuItemSelectionManager");
        }
        inline app::CleverMenuItemSelectionManager* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager
} // namespace app::classes::types
