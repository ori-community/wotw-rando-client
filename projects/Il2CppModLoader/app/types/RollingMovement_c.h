#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RollingMovement_c {
        inline app::RollingMovement_c__Class** type_info = (app::RollingMovement_c__Class**)(modloader::win::memory::resolve_rva(0x0471F3E8));
        inline app::RollingMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RollingMovement_c__Class>(type_info, "", "RollingMovement", "<>c");
        }
        inline app::RollingMovement_c* create() {
            return il2cpp::create_object<app::RollingMovement_c>(get_class());
        }
    } // namespace RollingMovement_c
} // namespace app::classes::types
