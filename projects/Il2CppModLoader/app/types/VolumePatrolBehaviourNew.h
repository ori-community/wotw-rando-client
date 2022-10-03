#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumePatrolBehaviourNew {
        namespace {
            app::VolumePatrolBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::VolumePatrolBehaviourNew__Class** type_info = &type_info_ref;
        inline app::VolumePatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::VolumePatrolBehaviourNew__Class>(type_info, "Moon", "VolumePatrolBehaviourNew");
        }
        inline app::VolumePatrolBehaviourNew* create() {
            return il2cpp::create_object<app::VolumePatrolBehaviourNew>(get_class());
        }
    } // namespace VolumePatrolBehaviourNew
} // namespace app::classes::types
