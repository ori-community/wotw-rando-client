#pragma once
#include <Modloader/app/structs/AnimationClip__Array.h>
#include <Modloader/app/structs/AnimationClip__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationClip__Array {
        inline app::AnimationClip__Array__Class** type_info() {
            static app::AnimationClip__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationClip__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationClip__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationClip__Array__Class>(type_info(), "UnityEngine", "AnimationClip[]");
        }
        inline app::AnimationClip__Array* create() {
            return il2cpp::create_object<app::AnimationClip__Array>(get_class());
        }
    } // namespace AnimationClip__Array
} // namespace app::classes::types
