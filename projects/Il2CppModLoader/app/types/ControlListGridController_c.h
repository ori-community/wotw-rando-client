#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlListGridController_c {
        inline app::ControlListGridController_c__Class** type_info = (app::ControlListGridController_c__Class**)(modloader::win::memory::resolve_rva(0x04728CC8));
        inline app::ControlListGridController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlListGridController_c__Class>(type_info, "", "ControlListGridController", "<>c");
        }
        inline app::ControlListGridController_c* create() {
            return il2cpp::create_object<app::ControlListGridController_c>(get_class());
        }
    } // namespace ControlListGridController_c
} // namespace app::classes::types
