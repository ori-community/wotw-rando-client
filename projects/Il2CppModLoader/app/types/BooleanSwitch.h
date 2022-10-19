#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BooleanSwitch {
        inline app::BooleanSwitch__Class** type_info = (app::BooleanSwitch__Class**)(modloader::win::memory::resolve_rva(0x0470C270));
        inline app::BooleanSwitch__Class* get_class() {
            return il2cpp::get_class<app::BooleanSwitch__Class>(type_info, "System.Diagnostics", "BooleanSwitch");
        }
        inline app::BooleanSwitch* create() {
            return il2cpp::create_object<app::BooleanSwitch>(get_class());
        }
    } // namespace BooleanSwitch
} // namespace app::classes::types
