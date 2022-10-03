#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviourNew_GroundPatrolModeType__Enum {
        namespace {
            app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class** type_info = &type_info_ref;
        inline app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class>(type_info, "Moon", "GroundPatrolBehaviourNew", "GroundPatrolModeType");
        }
        inline app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum>(get_class());
        }
    } // namespace GroundPatrolBehaviourNew_GroundPatrolModeType__Enum
} // namespace app::classes::types
