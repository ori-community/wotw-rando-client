#pragma once
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum {
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class** type_info() {
            static app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class>(type_info(), "Moon", "GroundPatrolWithDirectionBehaviourNew", "GroundPatrolDirectionMode");
        }
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum
} // namespace app::classes::types
