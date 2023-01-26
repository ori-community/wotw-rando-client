#pragma once
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum {
        inline app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class** type_info() {
            static app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class>(type_info(), "Moon", "GroundAreaPatrolBehaviourNew", "GroundAreaPatrolModeType");
        }
        inline app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum* create() {
            return il2cpp::create_object<app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum>(get_class());
        }
    } // namespace GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum
} // namespace app::classes::types
