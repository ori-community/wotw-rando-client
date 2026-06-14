#pragma once
#include <Modloader/app/structs/GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum {
        inline app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class** type_info() {
            static app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class>(type_info(), "Moon.BehaviourSystem", "GroundPatrolWithDirectionTask", "GroundPatrolDirectionMode");
        }
        inline app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum>(get_class());
        }
    } // namespace GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum
} // namespace app::classes::types
