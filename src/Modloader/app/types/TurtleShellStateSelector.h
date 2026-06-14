#pragma once
#include <Modloader/app/structs/TurtleShellStateSelector.h>
#include <Modloader/app/structs/TurtleShellStateSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShellStateSelector {
        inline app::TurtleShellStateSelector__Class** type_info() {
            static app::TurtleShellStateSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleShellStateSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleShellStateSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellStateSelector__Class>(type_info(), "", "TurtleShellStateSelector");
        }
        inline app::TurtleShellStateSelector* create() {
            return il2cpp::create_object<app::TurtleShellStateSelector>(get_class());
        }
    } // namespace TurtleShellStateSelector
} // namespace app::classes::types
