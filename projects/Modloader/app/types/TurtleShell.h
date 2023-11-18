#pragma once
#include <Modloader/app/structs/TurtleShell.h>
#include <Modloader/app/structs/TurtleShell__Array.h>
#include <Modloader/app/structs/TurtleShell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShell {
        inline app::TurtleShell__Class** type_info() {
            static app::TurtleShell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleShell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleShell__Class* get_class() {
            return il2cpp::get_class<app::TurtleShell__Class>(type_info(), "", "TurtleShell");
        }
        inline app::TurtleShell* create() {
            return il2cpp::create_object<app::TurtleShell>(get_class());
        }
        inline app::TurtleShell__Array* create_array(int size) {
            return il2cpp::array_new<app::TurtleShell__Array>(get_class(), size);
        }
        inline app::TurtleShell__Array* create_array(const std::vector<app::TurtleShell*>& items) {
            return il2cpp::array_new<app::TurtleShell__Array>(get_class(), items);
        }
    } // namespace TurtleShell
} // namespace app::classes::types
