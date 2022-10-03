#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioListener__Class** type_info;
        inline app::AudioListener__Class* get_class() {
            return il2cpp::get_class<app::AudioListener__Class>(type_info, "UnityEngine", "AudioListener");
        }
        inline app::AudioListener* create() {
            return il2cpp::create_object<app::AudioListener>(get_class());
        }
    } // namespace AudioListener
} // namespace app::classes::types
