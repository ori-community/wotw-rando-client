#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumePatrolBehaviourNew_PatrolMode__Enum {
        namespace {
            inline app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class** type_info = &type_info_ref;
        inline app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumePatrolBehaviourNew_PatrolMode__Enum__Class>(type_info, "Moon", "VolumePatrolBehaviourNew", "PatrolMode");
        }
        inline app::VolumePatrolBehaviourNew_PatrolMode__Enum* create() {
            return il2cpp::create_object<app::VolumePatrolBehaviourNew_PatrolMode__Enum>(get_class());
        }
    } // namespace VolumePatrolBehaviourNew_PatrolMode__Enum
} // namespace app::classes::types
