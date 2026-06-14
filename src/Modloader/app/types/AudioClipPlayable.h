#pragma once
#include <Modloader/app/structs/AudioClipPlayable.h>
#include <Modloader/app/structs/AudioClipPlayable__Boxed.h>
#include <Modloader/app/structs/AudioClipPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioClipPlayable {
        inline app::AudioClipPlayable__Class** type_info() {
            static app::AudioClipPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioClipPlayable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioClipPlayable__Class* get_class() {
            return il2cpp::get_class<app::AudioClipPlayable__Class>(type_info(), "UnityEngine.Audio", "AudioClipPlayable");
        }
        inline app::AudioClipPlayable* create() {
            return il2cpp::create_object<app::AudioClipPlayable>(get_class());
        }
        inline app::AudioClipPlayable__Boxed* box(app::AudioClipPlayable value) {
            return il2cpp::box_value<app::AudioClipPlayable__Boxed>(get_class(), value);
        }
    } // namespace AudioClipPlayable
} // namespace app::classes::types
