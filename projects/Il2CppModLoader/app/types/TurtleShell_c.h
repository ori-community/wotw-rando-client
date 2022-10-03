#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShell_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurtleShell_c__Class** type_info;
        inline app::TurtleShell_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShell_c__Class>(type_info, "", "TurtleShell", "<>c");
        }
        inline app::TurtleShell_c* create() {
            return il2cpp::create_object<app::TurtleShell_c>(get_class());
        }
    } // namespace TurtleShell_c
} // namespace app::classes::types
