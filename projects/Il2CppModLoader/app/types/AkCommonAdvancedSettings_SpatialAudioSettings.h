#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommonAdvancedSettings_SpatialAudioSettings {
        namespace {
            inline app::AkCommonAdvancedSettings_SpatialAudioSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkCommonAdvancedSettings_SpatialAudioSettings__Class** type_info = &type_info_ref;
        inline app::AkCommonAdvancedSettings_SpatialAudioSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonAdvancedSettings_SpatialAudioSettings__Class>(type_info, "", "AkCommonAdvancedSettings", "SpatialAudioSettings");
        }
        inline app::AkCommonAdvancedSettings_SpatialAudioSettings* create() {
            return il2cpp::create_object<app::AkCommonAdvancedSettings_SpatialAudioSettings>(get_class());
        }
    } // namespace AkCommonAdvancedSettings_SpatialAudioSettings
} // namespace app::classes::types
