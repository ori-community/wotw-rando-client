#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSpatialAudioInitSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkSpatialAudioInitSettings__Class** type_info;
        inline app::AkSpatialAudioInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkSpatialAudioInitSettings__Class>(type_info, "", "AkSpatialAudioInitSettings");
        }
        inline app::AkSpatialAudioInitSettings* create() {
            return il2cpp::create_object<app::AkSpatialAudioInitSettings>(get_class());
        }
    } // namespace AkSpatialAudioInitSettings
} // namespace app::classes::types
