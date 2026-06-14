#pragma once
#include <Modloader/app/structs/IVRSettings_GetSettingsErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRSettings_GetSettingsErrorNameFromEnum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSettings_GetSettingsErrorNameFromEnum {
        inline app::IVRSettings_GetSettingsErrorNameFromEnum__Class** type_info() {
            static app::IVRSettings_GetSettingsErrorNameFromEnum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSettings_GetSettingsErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x047573B0));
            }
            return cache;
        }
        inline app::IVRSettings_GetSettingsErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetSettingsErrorNameFromEnum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetSettingsErrorNameFromEnum");
        }
        inline app::IVRSettings_GetSettingsErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSettings_GetSettingsErrorNameFromEnum>(get_class());
        }
    } // namespace IVRSettings_GetSettingsErrorNameFromEnum
} // namespace app::classes::types
