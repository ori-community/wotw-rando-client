#pragma once
#include <Modloader/app/structs/AnimationClipPlayable.h>
#include <Modloader/app/structs/AnimationClipPlayable__Boxed.h>
#include <Modloader/app/structs/AnimationClipPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationClipPlayable {
        inline app::AnimationClipPlayable__Class** type_info() {
            static app::AnimationClipPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationClipPlayable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationClipPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationClipPlayable__Class>(type_info(), "UnityEngine.Animations", "AnimationClipPlayable");
        }
        inline app::AnimationClipPlayable* create() {
            return il2cpp::create_object<app::AnimationClipPlayable>(get_class());
        }
        inline app::AnimationClipPlayable__Boxed* box(app::AnimationClipPlayable value) {
            return il2cpp::box_value<app::AnimationClipPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationClipPlayable
} // namespace app::classes::types
