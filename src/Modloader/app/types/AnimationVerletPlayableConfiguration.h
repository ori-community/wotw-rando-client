#pragma once
#include <Modloader/app/structs/AnimationVerletPlayableConfiguration.h>
#include <Modloader/app/structs/AnimationVerletPlayableConfiguration__Boxed.h>
#include <Modloader/app/structs/AnimationVerletPlayableConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableConfiguration {
        inline app::AnimationVerletPlayableConfiguration__Class** type_info() {
            static app::AnimationVerletPlayableConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationVerletPlayableConfiguration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationVerletPlayableConfiguration__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableConfiguration__Class>(type_info(), "UnityEngine.Animations", "AnimationVerletPlayableConfiguration");
        }
        inline app::AnimationVerletPlayableConfiguration* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableConfiguration>(get_class());
        }
        inline app::AnimationVerletPlayableConfiguration__Boxed* box(app::AnimationVerletPlayableConfiguration value) {
            return il2cpp::box_value<app::AnimationVerletPlayableConfiguration__Boxed>(get_class(), value);
        }
    } // namespace AnimationVerletPlayableConfiguration
} // namespace app::classes::types
