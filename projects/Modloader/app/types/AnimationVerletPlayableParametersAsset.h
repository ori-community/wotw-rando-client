#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationVerletPlayableParametersAsset__Class.h>
#include <Modloader/app/structs/AnimationVerletPlayableParametersAsset.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableParametersAsset {
        namespace {
            inline app::AnimationVerletPlayableParametersAsset__Class* type_info_ref = nullptr;
        }
        inline app::AnimationVerletPlayableParametersAsset__Class** type_info = &type_info_ref;
        inline app::AnimationVerletPlayableParametersAsset__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableParametersAsset__Class>(type_info, "UnityEngine.Animations", "AnimationVerletPlayableParametersAsset");
        }
        inline app::AnimationVerletPlayableParametersAsset* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableParametersAsset>(get_class());
        }
    } // namespace AnimationVerletPlayableParametersAsset
} // namespace app::classes::types
