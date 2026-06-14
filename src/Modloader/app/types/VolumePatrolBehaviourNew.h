#pragma once
#include <Modloader/app/structs/VolumePatrolBehaviourNew.h>
#include <Modloader/app/structs/VolumePatrolBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumePatrolBehaviourNew {
        inline app::VolumePatrolBehaviourNew__Class** type_info() {
            static app::VolumePatrolBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumePatrolBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumePatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::VolumePatrolBehaviourNew__Class>(type_info(), "Moon", "VolumePatrolBehaviourNew");
        }
        inline app::VolumePatrolBehaviourNew* create() {
            return il2cpp::create_object<app::VolumePatrolBehaviourNew>(get_class());
        }
    } // namespace VolumePatrolBehaviourNew
} // namespace app::classes::types
