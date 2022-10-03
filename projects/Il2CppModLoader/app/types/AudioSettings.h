#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioSettings__Class** type_info;
        inline app::AudioSettings__Class* get_class() {
            return il2cpp::get_class<app::AudioSettings__Class>(type_info, "UnityEngine", "AudioSettings");
        }
        inline app::AudioSettings* create() {
            return il2cpp::create_object<app::AudioSettings>(get_class());
        }
    } // namespace AudioSettings
} // namespace app::classes::types
