#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleNoShellBehaviours__Enum {
        namespace {
            app::TurtleNoShellBehaviours__Enum__Class* type_info_ref = nullptr;
        }
        app::TurtleNoShellBehaviours__Enum__Class** type_info = &type_info_ref;
        inline app::TurtleNoShellBehaviours__Enum__Class* get_class() {
            return il2cpp::get_class<app::TurtleNoShellBehaviours__Enum__Class>(type_info, "", "TurtleNoShellBehaviours");
        }
        inline app::TurtleNoShellBehaviours__Enum* create() {
            return il2cpp::create_object<app::TurtleNoShellBehaviours__Enum>(get_class());
        }
    } // namespace TurtleNoShellBehaviours__Enum
} // namespace app::classes::types
