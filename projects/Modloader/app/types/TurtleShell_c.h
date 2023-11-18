#pragma once
#include <Modloader/app/structs/TurtleShell_c.h>
#include <Modloader/app/structs/TurtleShell_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShell_c {
        inline app::TurtleShell_c__Class** type_info() {
            static app::TurtleShell_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurtleShell_c__Class**)(modloader::win::memory::resolve_rva(0x0471F008));
            }
            return cache;
        }
        inline app::TurtleShell_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShell_c__Class>(type_info(), "", "TurtleShell", "<>c");
        }
        inline app::TurtleShell_c* create() {
            return il2cpp::create_object<app::TurtleShell_c>(get_class());
        }
    } // namespace TurtleShell_c
} // namespace app::classes::types
