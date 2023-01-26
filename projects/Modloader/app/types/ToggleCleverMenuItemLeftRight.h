#pragma once
#include <Modloader/app/structs/ToggleCleverMenuItemLeftRight.h>
#include <Modloader/app/structs/ToggleCleverMenuItemLeftRight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleCleverMenuItemLeftRight {
        inline app::ToggleCleverMenuItemLeftRight__Class** type_info() {
            static app::ToggleCleverMenuItemLeftRight__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToggleCleverMenuItemLeftRight__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToggleCleverMenuItemLeftRight__Class* get_class() {
            return il2cpp::get_class<app::ToggleCleverMenuItemLeftRight__Class>(type_info(), "", "ToggleCleverMenuItemLeftRight");
        }
        inline app::ToggleCleverMenuItemLeftRight* create() {
            return il2cpp::create_object<app::ToggleCleverMenuItemLeftRight>(get_class());
        }
    } // namespace ToggleCleverMenuItemLeftRight
} // namespace app::classes::types
