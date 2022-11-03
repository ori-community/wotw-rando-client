#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationClipPlayable {
        namespace {
            inline app::AnimationClipPlayable__Class* type_info_ref = nullptr;
        }
        inline app::AnimationClipPlayable__Class** type_info = &type_info_ref;
        inline app::AnimationClipPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationClipPlayable__Class>(type_info, "UnityEngine.Animations", "AnimationClipPlayable");
        }
        inline app::AnimationClipPlayable* create() {
            return il2cpp::create_object<app::AnimationClipPlayable>(get_class());
        }
        inline app::AnimationClipPlayable__Boxed* box(app::AnimationClipPlayable value) {
            return il2cpp::box_value<app::AnimationClipPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationClipPlayable
} // namespace app::classes::types
