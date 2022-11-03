#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSettings_GetSettingsErrorNameFromEnum {
        inline app::IVRSettings_GetSettingsErrorNameFromEnum__Class** type_info = (app::IVRSettings_GetSettingsErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x047573B0));
        inline app::IVRSettings_GetSettingsErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_GetSettingsErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_GetSettingsErrorNameFromEnum");
        }
        inline app::IVRSettings_GetSettingsErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRSettings_GetSettingsErrorNameFromEnum>(get_class());
        }
    } // namespace IVRSettings_GetSettingsErrorNameFromEnum
} // namespace app::classes::types
