#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetSettingsErrorNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSettings_GetSettingsErrorNameFromEnum__Class** type_info;
        inline app::IVRSettings_GetSettingsErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetSettingsErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetSettingsErrorNameFromEnum");
        }
        inline app::IVRSettings_GetSettingsErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSettings_GetSettingsErrorNameFromEnum>(get_class());
        }
    } // namespace IVRSettings_GetSettingsErrorNameFromEnum
} // namespace app::classes::types
