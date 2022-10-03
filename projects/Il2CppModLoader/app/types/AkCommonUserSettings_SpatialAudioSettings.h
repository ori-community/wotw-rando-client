#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCommonUserSettings_SpatialAudioSettings {
        namespace {
            app::AkCommonUserSettings_SpatialAudioSettings__Class* type_info_ref = nullptr;
        }
        app::AkCommonUserSettings_SpatialAudioSettings__Class** type_info = &type_info_ref;
        inline app::AkCommonUserSettings_SpatialAudioSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonUserSettings_SpatialAudioSettings__Class>(type_info, "", "AkCommonUserSettings", "SpatialAudioSettings");
        }
        inline app::AkCommonUserSettings_SpatialAudioSettings* create() {
            return il2cpp::create_object<app::AkCommonUserSettings_SpatialAudioSettings>(get_class());
        }
    } // namespace AkCommonUserSettings_SpatialAudioSettings
} // namespace app::classes::types
