#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioListenerExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioListenerExtension__Class** type_info;
        inline app::AudioListenerExtension__Class* get_class() {
            return il2cpp::get_class<app::AudioListenerExtension__Class>(type_info, "UnityEngine", "AudioListenerExtension");
        }
        inline app::AudioListenerExtension* create() {
            return il2cpp::create_object<app::AudioListenerExtension>(get_class());
        }
    } // namespace AudioListenerExtension
} // namespace app::classes::types
