#pragma once
#include <Modloader/app/structs/AudioMixerPlayable.h>
#include <Modloader/app/structs/AudioMixerPlayable__Boxed.h>
#include <Modloader/app/structs/AudioMixerPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioMixerPlayable {
        inline app::AudioMixerPlayable__Class** type_info() {
            static app::AudioMixerPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioMixerPlayable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioMixerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AudioMixerPlayable__Class>(type_info(), "UnityEngine.Audio", "AudioMixerPlayable");
        }
        inline app::AudioMixerPlayable* create() {
            return il2cpp::create_object<app::AudioMixerPlayable>(get_class());
        }
        inline app::AudioMixerPlayable__Boxed* box(app::AudioMixerPlayable value) {
            return il2cpp::box_value<app::AudioMixerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AudioMixerPlayable
} // namespace app::classes::types
