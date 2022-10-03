#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviour {
        namespace {
            app::GroundPatrolWithDirectionBehaviour__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolWithDirectionBehaviour__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionBehaviour__Class>(type_info, "Moon", "GroundPatrolWithDirectionBehaviour");
        }
        inline app::GroundPatrolWithDirectionBehaviour* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviour>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviour
} // namespace app::classes::types
