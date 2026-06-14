#pragma once
#include <Modloader/app/structs/VolumeMovementTimelineBehaviourNew.h>
#include <Modloader/app/structs/VolumeMovementTimelineBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeMovementTimelineBehaviourNew {
        inline app::VolumeMovementTimelineBehaviourNew__Class** type_info() {
            static app::VolumeMovementTimelineBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::VolumeMovementTimelineBehaviourNew__Class>(type_info(), "", "VolumeMovementTimelineBehaviourNew");
        }
        inline app::VolumeMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::VolumeMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace VolumeMovementTimelineBehaviourNew
} // namespace app::classes::types
