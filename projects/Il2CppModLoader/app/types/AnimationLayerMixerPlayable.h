#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationLayerMixerPlayable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationLayerMixerPlayable__Class** type_info;
        inline app::AnimationLayerMixerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationLayerMixerPlayable__Class>(type_info, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
        }
        inline app::AnimationLayerMixerPlayable* create() {
            return il2cpp::create_object<app::AnimationLayerMixerPlayable>(get_class());
        }
        inline app::AnimationLayerMixerPlayable__Boxed* box(app::AnimationLayerMixerPlayable value) {
            return il2cpp::box_value<app::AnimationLayerMixerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationLayerMixerPlayable
} // namespace app::classes::types
