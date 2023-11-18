#pragma once
#include <Modloader/app/structs/TurtleMovementBehaviour.h>
#include <Modloader/app/structs/TurtleMovementBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleMovementBehaviour {
        inline app::TurtleMovementBehaviour__Class** type_info() {
            static app::TurtleMovementBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleMovementBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleMovementBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleMovementBehaviour__Class>(type_info(), "", "TurtleMovementBehaviour");
        }
        inline app::TurtleMovementBehaviour* create() {
            return il2cpp::create_object<app::TurtleMovementBehaviour>(get_class());
        }
    } // namespace TurtleMovementBehaviour
} // namespace app::classes::types
