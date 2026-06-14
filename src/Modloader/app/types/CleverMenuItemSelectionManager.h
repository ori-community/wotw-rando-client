#pragma once
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager {
        inline app::CleverMenuItemSelectionManager__Class** type_info() {
            static app::CleverMenuItemSelectionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemSelectionManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemSelectionManager__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemSelectionManager__Class>(type_info(), "", "CleverMenuItemSelectionManager");
        }
        inline app::CleverMenuItemSelectionManager* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager
} // namespace app::classes::types
