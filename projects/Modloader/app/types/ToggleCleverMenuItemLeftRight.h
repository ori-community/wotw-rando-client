#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ToggleCleverMenuItemLeftRight {
        namespace {
            inline app::ToggleCleverMenuItemLeftRight__Class* type_info_ref = nullptr;
        }
        inline app::ToggleCleverMenuItemLeftRight__Class** type_info = &type_info_ref;
        inline app::ToggleCleverMenuItemLeftRight__Class* get_class() {
            return il2cpp::get_class<app::ToggleCleverMenuItemLeftRight__Class>(type_info, "", "ToggleCleverMenuItemLeftRight");
        }
        inline app::ToggleCleverMenuItemLeftRight* create() {
            return il2cpp::create_object<app::ToggleCleverMenuItemLeftRight>(get_class());
        }
    } // namespace ToggleCleverMenuItemLeftRight
} // namespace app::classes::types
