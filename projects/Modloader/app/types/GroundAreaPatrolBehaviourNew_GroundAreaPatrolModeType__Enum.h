#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum.h>

namespace app::classes::types {
    namespace GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum {
        namespace {
            inline app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class** type_info = &type_info_ref;
        inline app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum__Class>(type_info, "Moon", "GroundAreaPatrolBehaviourNew", "GroundAreaPatrolModeType");
        }
        inline app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum* create() {
            return il2cpp::create_object<app::GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum>(get_class());
        }
    } // namespace GroundAreaPatrolBehaviourNew_GroundAreaPatrolModeType__Enum
} // namespace app::classes::types
