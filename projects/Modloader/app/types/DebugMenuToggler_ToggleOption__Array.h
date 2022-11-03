#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugMenuToggler_ToggleOption__Array {
        namespace {
            inline app::DebugMenuToggler_ToggleOption__Array__Class* type_info_ref = nullptr;
        }
        inline app::DebugMenuToggler_ToggleOption__Array__Class** type_info = &type_info_ref;
        inline app::DebugMenuToggler_ToggleOption__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuToggler_ToggleOption__Array__Class>(type_info, "", "DebugMenuToggler+ToggleOption[]");
        }
        inline app::DebugMenuToggler_ToggleOption__Array* create() {
            return il2cpp::create_object<app::DebugMenuToggler_ToggleOption__Array>(get_class());
        }
    } // namespace DebugMenuToggler_ToggleOption__Array
} // namespace app::classes::types
