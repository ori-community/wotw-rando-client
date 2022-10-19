#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlSchemeGridController_c {
        inline app::ControlSchemeGridController_c__Class** type_info = (app::ControlSchemeGridController_c__Class**)(modloader::win::memory::resolve_rva(0x04722628));
        inline app::ControlSchemeGridController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlSchemeGridController_c__Class>(type_info, "", "ControlSchemeGridController", "<>c");
        }
        inline app::ControlSchemeGridController_c* create() {
            return il2cpp::create_object<app::ControlSchemeGridController_c>(get_class());
        }
    } // namespace ControlSchemeGridController_c
} // namespace app::classes::types
