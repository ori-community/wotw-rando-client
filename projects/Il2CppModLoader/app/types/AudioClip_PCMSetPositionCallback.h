#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioClip_PCMSetPositionCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioClip_PCMSetPositionCallback__Class** type_info;
        inline app::AudioClip_PCMSetPositionCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioClip_PCMSetPositionCallback__Class>(type_info, "UnityEngine", "AudioClip", "PCMSetPositionCallback");
        }
        inline app::AudioClip_PCMSetPositionCallback* create() {
            return il2cpp::create_object<app::AudioClip_PCMSetPositionCallback>(get_class());
        }
    } // namespace AudioClip_PCMSetPositionCallback
} // namespace app::classes::types
