#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviour_GroundPatrolMode__Enum {
        namespace {
            app::GroundPatrolBehaviour_GroundPatrolMode__Enum__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolBehaviour_GroundPatrolMode__Enum__Class** type_info = &type_info_ref;
        inline app::GroundPatrolBehaviour_GroundPatrolMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolBehaviour_GroundPatrolMode__Enum__Class>(type_info, "Moon", "GroundPatrolBehaviour", "GroundPatrolMode");
        }
        inline app::GroundPatrolBehaviour_GroundPatrolMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviour_GroundPatrolMode__Enum>(get_class());
        }
    } // namespace GroundPatrolBehaviour_GroundPatrolMode__Enum
} // namespace app::classes::types
