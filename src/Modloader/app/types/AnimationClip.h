#pragma once
#include <Modloader/app/structs/AnimationClip.h>
#include <Modloader/app/structs/AnimationClip__Array.h>
#include <Modloader/app/structs/AnimationClip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationClip {
        inline app::AnimationClip__Class** type_info() {
            static app::AnimationClip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationClip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationClip__Class* get_class() {
            return il2cpp::get_class<app::AnimationClip__Class>(type_info(), "UnityEngine", "AnimationClip");
        }
        inline app::AnimationClip* create() {
            return il2cpp::create_object<app::AnimationClip>(get_class());
        }
        inline app::AnimationClip__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationClip__Array>(get_class(), size);
        }
        inline app::AnimationClip__Array* create_array(const std::vector<app::AnimationClip*>& items) {
            return il2cpp::array_new<app::AnimationClip__Array>(get_class(), items);
        }
    } // namespace AnimationClip
} // namespace app::classes::types
