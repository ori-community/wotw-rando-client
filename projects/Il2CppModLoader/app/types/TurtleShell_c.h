#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShell_c {
        inline app::TurtleShell_c__Class** type_info = (app::TurtleShell_c__Class**)(modloader::win::memory::resolve_rva(0x0471F008));
        inline app::TurtleShell_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShell_c__Class>(type_info, "", "TurtleShell", "<>c");
        }
        inline app::TurtleShell_c* create() {
            return il2cpp::create_object<app::TurtleShell_c>(get_class());
        }
    } // namespace TurtleShell_c
} // namespace app::classes::types
