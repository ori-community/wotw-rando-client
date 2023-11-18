#pragma once
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption__Array.h>
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMenuToggler_ToggleOption__Array {
        inline app::DebugMenuToggler_ToggleOption__Array__Class** type_info() {
            static app::DebugMenuToggler_ToggleOption__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugMenuToggler_ToggleOption__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugMenuToggler_ToggleOption__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuToggler_ToggleOption__Array__Class>(type_info(), "", "DebugMenuToggler+ToggleOption[]");
        }
        inline app::DebugMenuToggler_ToggleOption__Array* create() {
            return il2cpp::create_object<app::DebugMenuToggler_ToggleOption__Array>(get_class());
        }
    } // namespace DebugMenuToggler_ToggleOption__Array
} // namespace app::classes::types
