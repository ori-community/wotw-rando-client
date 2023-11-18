#pragma once
#include <Modloader/app/structs/TurtleGroundPatrolBehaviour.h>
#include <Modloader/app/structs/TurtleGroundPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleGroundPatrolBehaviour {
        inline app::TurtleGroundPatrolBehaviour__Class** type_info() {
            static app::TurtleGroundPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleGroundPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleGroundPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleGroundPatrolBehaviour__Class>(type_info(), "", "TurtleGroundPatrolBehaviour");
        }
        inline app::TurtleGroundPatrolBehaviour* create() {
            return il2cpp::create_object<app::TurtleGroundPatrolBehaviour>(get_class());
        }
    } // namespace TurtleGroundPatrolBehaviour
} // namespace app::classes::types
