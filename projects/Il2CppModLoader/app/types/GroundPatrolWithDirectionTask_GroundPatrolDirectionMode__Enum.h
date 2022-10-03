#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum {
        namespace {
            app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class>(type_info, "Moon.BehaviourSystem", "GroundPatrolWithDirectionTask", "GroundPatrolDirectionMode");
        }
        inline app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum>(get_class());
        }
    } // namespace GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum
} // namespace app::classes::types
