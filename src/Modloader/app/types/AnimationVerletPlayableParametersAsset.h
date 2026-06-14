#pragma once
#include <Modloader/app/structs/AnimationVerletPlayableParametersAsset.h>
#include <Modloader/app/structs/AnimationVerletPlayableParametersAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableParametersAsset {
        inline app::AnimationVerletPlayableParametersAsset__Class** type_info() {
            static app::AnimationVerletPlayableParametersAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationVerletPlayableParametersAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationVerletPlayableParametersAsset__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableParametersAsset__Class>(type_info(), "UnityEngine.Animations", "AnimationVerletPlayableParametersAsset");
        }
        inline app::AnimationVerletPlayableParametersAsset* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableParametersAsset>(get_class());
        }
    } // namespace AnimationVerletPlayableParametersAsset
} // namespace app::classes::types
