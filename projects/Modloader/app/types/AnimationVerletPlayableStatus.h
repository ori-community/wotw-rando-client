#pragma once
#include <Modloader/app/structs/AnimationVerletPlayableStatus.h>
#include <Modloader/app/structs/AnimationVerletPlayableStatus__Boxed.h>
#include <Modloader/app/structs/AnimationVerletPlayableStatus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableStatus {
        inline app::AnimationVerletPlayableStatus__Class** type_info() {
            static app::AnimationVerletPlayableStatus__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationVerletPlayableStatus__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationVerletPlayableStatus__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableStatus__Class>(type_info(), "UnityEngine.Animations", "AnimationVerletPlayableStatus");
        }
        inline app::AnimationVerletPlayableStatus* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableStatus>(get_class());
        }
        inline app::AnimationVerletPlayableStatus__Boxed* box(app::AnimationVerletPlayableStatus value) {
            return il2cpp::box_value<app::AnimationVerletPlayableStatus__Boxed>(get_class(), value);
        }
    } // namespace AnimationVerletPlayableStatus
} // namespace app::classes::types
