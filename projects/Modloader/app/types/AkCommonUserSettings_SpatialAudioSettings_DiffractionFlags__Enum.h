#pragma once
#include <Modloader/app/structs/AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum.h>
#include <Modloader/app/structs/AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum {
        inline app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class** type_info() {
            static app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class>(type_info(), "", "AkCommonUserSettings+SpatialAudioSettings", "DiffractionFlags");
        }
        inline app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum* create() {
            return il2cpp::create_object<app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum>(get_class());
        }
    } // namespace AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum
} // namespace app::classes::types
