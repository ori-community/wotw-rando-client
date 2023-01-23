#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption__Class.h>
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption.h>
#include <Modloader/app/structs/DebugMenuToggler_ToggleOption__Array.h>

namespace app::classes::types {
    namespace DebugMenuToggler_ToggleOption {
        namespace {
            inline app::DebugMenuToggler_ToggleOption__Class* type_info_ref = nullptr;
        }
        inline app::DebugMenuToggler_ToggleOption__Class** type_info = &type_info_ref;
        inline app::DebugMenuToggler_ToggleOption__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugMenuToggler_ToggleOption__Class>(type_info, "", "DebugMenuToggler", "ToggleOption");
        }
        inline app::DebugMenuToggler_ToggleOption* create() {
            return il2cpp::create_object<app::DebugMenuToggler_ToggleOption>(get_class());
        }
        inline app::DebugMenuToggler_ToggleOption__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugMenuToggler_ToggleOption__Array>(get_class(), size);
        }
        inline app::DebugMenuToggler_ToggleOption__Array* create_array(const std::vector<app::DebugMenuToggler_ToggleOption*>& items) {
            return il2cpp::array_new<app::DebugMenuToggler_ToggleOption__Array>(get_class(), items);
        }
    } // namespace DebugMenuToggler_ToggleOption
} // namespace app::classes::types
