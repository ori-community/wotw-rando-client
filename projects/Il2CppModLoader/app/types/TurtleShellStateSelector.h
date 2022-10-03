#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShellStateSelector {
        namespace {
            app::TurtleShellStateSelector__Class* type_info_ref = nullptr;
        }
        app::TurtleShellStateSelector__Class** type_info = &type_info_ref;
        inline app::TurtleShellStateSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellStateSelector__Class>(type_info, "", "TurtleShellStateSelector");
        }
        inline app::TurtleShellStateSelector* create() {
            return il2cpp::create_object<app::TurtleShellStateSelector>(get_class());
        }
    } // namespace TurtleShellStateSelector
} // namespace app::classes::types
