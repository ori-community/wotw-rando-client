#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMixerPlayable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMixerPlayable__Class** type_info;
        inline app::AnimationMixerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationMixerPlayable__Class>(type_info, "UnityEngine.Animations", "AnimationMixerPlayable");
        }
        inline app::AnimationMixerPlayable* create() {
            return il2cpp::create_object<app::AnimationMixerPlayable>(get_class());
        }
        inline app::AnimationMixerPlayable__Boxed* box(app::AnimationMixerPlayable value) {
            return il2cpp::box_value<app::AnimationMixerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationMixerPlayable
} // namespace app::classes::types
