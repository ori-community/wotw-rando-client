#pragma once
#include <Modloader/app/structs/AkCommonUserSettings_SpatialAudioSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings_SpatialAudioSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonUserSettings_SpatialAudioSettings {
        inline app::AkCommonUserSettings_SpatialAudioSettings__Class** type_info() {
            static app::AkCommonUserSettings_SpatialAudioSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCommonUserSettings_SpatialAudioSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCommonUserSettings_SpatialAudioSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonUserSettings_SpatialAudioSettings__Class>(type_info(), "", "AkCommonUserSettings", "SpatialAudioSettings");
        }
        inline app::AkCommonUserSettings_SpatialAudioSettings* create() {
            return il2cpp::create_object<app::AkCommonUserSettings_SpatialAudioSettings>(get_class());
        }
    } // namespace AkCommonUserSettings_SpatialAudioSettings
} // namespace app::classes::types
