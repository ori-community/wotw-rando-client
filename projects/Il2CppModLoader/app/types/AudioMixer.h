#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioMixer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioMixer__Class** type_info;
        inline app::AudioMixer__Class* get_class() {
            return il2cpp::get_class<app::AudioMixer__Class>(type_info, "UnityEngine.Audio", "AudioMixer");
        }
        inline app::AudioMixer* create() {
            return il2cpp::create_object<app::AudioMixer>(get_class());
        }
    } // namespace AudioMixer
} // namespace app::classes::types
