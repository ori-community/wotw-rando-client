#pragma once
#include <Modloader/app/structs/AudioMixer.h>
#include <Modloader/app/structs/AudioMixer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioMixer {
        inline app::AudioMixer__Class** type_info() {
            static app::AudioMixer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioMixer__Class**)(modloader::win::memory::resolve_rva(0x04757968));
            }
            return cache;
        }
        inline app::AudioMixer__Class* get_class() {
            return il2cpp::get_class<app::AudioMixer__Class>(type_info(), "UnityEngine.Audio", "AudioMixer");
        }
        inline app::AudioMixer* create() {
            return il2cpp::create_object<app::AudioMixer>(get_class());
        }
    } // namespace AudioMixer
} // namespace app::classes::types
