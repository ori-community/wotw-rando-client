#pragma once
#include <Modloader/app/structs/VolumePatrolBehaviourNew_PatrolMode__Enum.h>
#include <Modloader/app/structs/VolumePatrolBehaviourNew_PatrolMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumePatrolBehaviourNew_PatrolMode__Enum {
        inline app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class** type_info() {
            static app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class>(type_info(), "Moon", "VolumePatrolBehaviourNew", "PatrolMode");
        }
        inline app::VolumePatrolBehaviourNew_PatrolMode__Enum* create() {
            return il2cpp::create_object<app::VolumePatrolBehaviourNew_PatrolMode__Enum>(get_class());
        }
    } // namespace VolumePatrolBehaviourNew_PatrolMode__Enum
} // namespace app::classes::types
