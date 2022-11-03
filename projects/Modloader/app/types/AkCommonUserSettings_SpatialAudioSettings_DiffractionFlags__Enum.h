#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum {
        namespace {
            inline app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class** type_info = &type_info_ref;
        inline app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class>(type_info, "", "AkCommonUserSettings+SpatialAudioSettings", "DiffractionFlags");
        }
        inline app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum* create() {
            return il2cpp::create_object<app::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum>(get_class());
        }
    } // namespace AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum
} // namespace app::classes::types
