#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioExtensionManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AudioExtensionManager__Class** type_info;
        inline app::AudioExtensionManager__Class* get_class() {
            return il2cpp::get_class<app::AudioExtensionManager__Class>(type_info, "UnityEngine", "AudioExtensionManager");
        }
        inline app::AudioExtensionManager* create() {
            return il2cpp::create_object<app::AudioExtensionManager>(get_class());
        }
    } // namespace AudioExtensionManager
} // namespace app::classes::types
