#pragma once
#include <Modloader/app/structs/TurtleEvasionBehaviour.h>
#include <Modloader/app/structs/TurtleEvasionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleEvasionBehaviour {
        inline app::TurtleEvasionBehaviour__Class** type_info() {
            static app::TurtleEvasionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleEvasionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleEvasionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleEvasionBehaviour__Class>(type_info(), "", "TurtleEvasionBehaviour");
        }
        inline app::TurtleEvasionBehaviour* create() {
            return il2cpp::create_object<app::TurtleEvasionBehaviour>(get_class());
        }
    } // namespace TurtleEvasionBehaviour
} // namespace app::classes::types
