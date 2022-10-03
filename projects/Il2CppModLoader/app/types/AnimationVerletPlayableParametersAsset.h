#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableParametersAsset {
        namespace {
            app::AnimationVerletPlayableParametersAsset__Class* type_info_ref = nullptr;
        }
        app::AnimationVerletPlayableParametersAsset__Class** type_info = &type_info_ref;
        inline app::AnimationVerletPlayableParametersAsset__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableParametersAsset__Class>(type_info, "UnityEngine.Animations", "AnimationVerletPlayableParametersAsset");
        }
        inline app::AnimationVerletPlayableParametersAsset* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableParametersAsset>(get_class());
        }
    } // namespace AnimationVerletPlayableParametersAsset
} // namespace app::classes::types
