#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioClip_PCMReaderCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioClip_PCMReaderCallback__Class** type_info;
        inline app::AudioClip_PCMReaderCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioClip_PCMReaderCallback__Class>(type_info, "UnityEngine", "AudioClip", "PCMReaderCallback");
        }
        inline app::AudioClip_PCMReaderCallback* create() {
            return il2cpp::create_object<app::AudioClip_PCMReaderCallback>(get_class());
        }
    } // namespace AudioClip_PCMReaderCallback
} // namespace app::classes::types
