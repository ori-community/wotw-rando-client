#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleGroundPatrolBehaviour {
        namespace {
            app::TurtleGroundPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        app::TurtleGroundPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::TurtleGroundPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurtleGroundPatrolBehaviour__Class>(type_info, "", "TurtleGroundPatrolBehaviour");
        }
        inline app::TurtleGroundPatrolBehaviour* create() {
            return il2cpp::create_object<app::TurtleGroundPatrolBehaviour>(get_class());
        }
    } // namespace TurtleGroundPatrolBehaviour
} // namespace app::classes::types
