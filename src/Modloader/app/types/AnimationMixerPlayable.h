#pragma once
#include <Modloader/app/structs/AnimationMixerPlayable.h>
#include <Modloader/app/structs/AnimationMixerPlayable__Boxed.h>
#include <Modloader/app/structs/AnimationMixerPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMixerPlayable {
        inline app::AnimationMixerPlayable__Class** type_info() {
            static app::AnimationMixerPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMixerPlayable__Class**)(modloader::win::memory::resolve_rva(0x04757178));
            }
            return cache;
        }
        inline app::AnimationMixerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationMixerPlayable__Class>(type_info(), "UnityEngine.Animations", "AnimationMixerPlayable");
        }
        inline app::AnimationMixerPlayable* create() {
            return il2cpp::create_object<app::AnimationMixerPlayable>(get_class());
        }
        inline app::AnimationMixerPlayable__Boxed* box(app::AnimationMixerPlayable value) {
            return il2cpp::box_value<app::AnimationMixerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationMixerPlayable
} // namespace app::classes::types
