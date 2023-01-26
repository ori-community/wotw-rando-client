#pragma once
#include <Modloader/app/structs/AnimationVerletPlayableParameters.h>
#include <Modloader/app/structs/AnimationVerletPlayableParameters__Boxed.h>
#include <Modloader/app/structs/AnimationVerletPlayableParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableParameters {
        inline app::AnimationVerletPlayableParameters__Class** type_info() {
            static app::AnimationVerletPlayableParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationVerletPlayableParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationVerletPlayableParameters__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableParameters__Class>(type_info(), "UnityEngine.Animations", "AnimationVerletPlayableParameters");
        }
        inline app::AnimationVerletPlayableParameters* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableParameters>(get_class());
        }
        inline app::AnimationVerletPlayableParameters__Boxed* box(app::AnimationVerletPlayableParameters value) {
            return il2cpp::box_value<app::AnimationVerletPlayableParameters__Boxed>(get_class(), value);
        }
    } // namespace AnimationVerletPlayableParameters
} // namespace app::classes::types
