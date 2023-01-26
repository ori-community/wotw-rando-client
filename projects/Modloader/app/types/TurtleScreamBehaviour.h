#pragma once
#include <Modloader/app/structs/TurtleScreamBehaviour.h>
#include <Modloader/app/structs/TurtleScreamBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleScreamBehaviour {
        inline app::TurtleScreamBehaviour__Class** type_info() {
            static app::TurtleScreamBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleScreamBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleScreamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleScreamBehaviour__Class>(type_info(), "", "TurtleScreamBehaviour");
        }
        inline app::TurtleScreamBehaviour* create() {
            return il2cpp::create_object<app::TurtleScreamBehaviour>(get_class());
        }
    } // namespace TurtleScreamBehaviour
} // namespace app::classes::types
