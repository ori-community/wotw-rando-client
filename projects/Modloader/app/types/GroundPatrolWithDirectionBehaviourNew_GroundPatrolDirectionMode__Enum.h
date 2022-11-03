#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum {
        namespace {
            inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum__Class>(type_info, "Moon", "GroundPatrolWithDirectionBehaviourNew", "GroundPatrolDirectionMode");
        }
        inline app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviourNew_GroundPatrolDirectionMode__Enum
} // namespace app::classes::types
