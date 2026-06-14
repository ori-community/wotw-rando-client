#pragma once
#include <Modloader/app/structs/GroundPatrolBehaviourNew_GroundPatrolModeType__Enum.h>
#include <Modloader/app/structs/GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviourNew_GroundPatrolModeType__Enum {
        inline app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class** type_info() {
            static app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Class>(type_info(), "Moon", "GroundPatrolBehaviourNew", "GroundPatrolModeType");
        }
        inline app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviourNew_GroundPatrolModeType__Enum>(get_class());
        }
    } // namespace GroundPatrolBehaviourNew_GroundPatrolModeType__Enum
} // namespace app::classes::types
