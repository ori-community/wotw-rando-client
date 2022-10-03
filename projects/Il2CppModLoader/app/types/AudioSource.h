#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioSource__Class** type_info;
        inline app::AudioSource__Class* get_class() {
            return il2cpp::get_class<app::AudioSource__Class>(type_info, "UnityEngine", "AudioSource");
        }
        inline app::AudioSource* create() {
            return il2cpp::create_object<app::AudioSource>(get_class());
        }
    } // namespace AudioSource
} // namespace app::classes::types
