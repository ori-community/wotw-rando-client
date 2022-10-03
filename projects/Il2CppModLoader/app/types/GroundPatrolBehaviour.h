#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviour {
        namespace {
            app::GroundPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::GroundPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolBehaviour__Class>(type_info, "Moon", "GroundPatrolBehaviour");
        }
        inline app::GroundPatrolBehaviour* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviour>(get_class());
        }
    } // namespace GroundPatrolBehaviour
} // namespace app::classes::types
