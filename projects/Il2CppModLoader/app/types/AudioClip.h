#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioClip {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioClip__Class** type_info;
        inline app::AudioClip__Class* get_class() {
            return il2cpp::get_class<app::AudioClip__Class>(type_info, "UnityEngine", "AudioClip");
        }
        inline app::AudioClip* create() {
            return il2cpp::create_object<app::AudioClip>(get_class());
        }
        inline app::AudioClip__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioClip__Array>(get_class(), size);
        }
    } // namespace AudioClip
} // namespace app::classes::types
