#pragma once
#include <Modloader/app/structs/TurtleNoShellBehaviours__Enum.h>
#include <Modloader/app/structs/TurtleNoShellBehaviours__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleNoShellBehaviours__Enum {
        inline app::TurtleNoShellBehaviours__Enum__Class** type_info() {
            static app::TurtleNoShellBehaviours__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleNoShellBehaviours__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleNoShellBehaviours__Enum__Class* get_class() {
            return il2cpp::get_class<app::TurtleNoShellBehaviours__Enum__Class>(type_info(), "", "TurtleNoShellBehaviours");
        }
        inline app::TurtleNoShellBehaviours__Enum* create() {
            return il2cpp::create_object<app::TurtleNoShellBehaviours__Enum>(get_class());
        }
    } // namespace TurtleNoShellBehaviours__Enum
} // namespace app::classes::types
