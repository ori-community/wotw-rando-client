#pragma once
#include <Modloader/app/structs/CleverMenuItemSelectionManager_c.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_c {
        inline app::CleverMenuItemSelectionManager_c__Class** type_info() {
            static app::CleverMenuItemSelectionManager_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CleverMenuItemSelectionManager_c__Class**)(modloader::win::memory::resolve_rva(0x0472F640));
            }
            return cache;
        }
        inline app::CleverMenuItemSelectionManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemSelectionManager_c__Class>(type_info(), "", "CleverMenuItemSelectionManager", "<>c");
        }
        inline app::CleverMenuItemSelectionManager_c* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_c>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager_c
} // namespace app::classes::types
