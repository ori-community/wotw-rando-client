#pragma once
#include <Modloader/app/structs/TurtleNoShellRootSelector.h>
#include <Modloader/app/structs/TurtleNoShellRootSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleNoShellRootSelector {
        inline app::TurtleNoShellRootSelector__Class** type_info() {
            static app::TurtleNoShellRootSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleNoShellRootSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleNoShellRootSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleNoShellRootSelector__Class>(type_info(), "", "TurtleNoShellRootSelector");
        }
        inline app::TurtleNoShellRootSelector* create() {
            return il2cpp::create_object<app::TurtleNoShellRootSelector>(get_class());
        }
    } // namespace TurtleNoShellRootSelector
} // namespace app::classes::types
