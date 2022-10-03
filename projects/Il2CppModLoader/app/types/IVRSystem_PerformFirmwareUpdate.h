#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_PerformFirmwareUpdate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_PerformFirmwareUpdate__Class** type_info;
        inline app::IVRSystem_PerformFirmwareUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_PerformFirmwareUpdate__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_PerformFirmwareUpdate");
        }
        inline app::IVRSystem_PerformFirmwareUpdate* create() {
            return il2cpp::create_object<app::IVRSystem_PerformFirmwareUpdate>(get_class());
        }
    } // namespace IVRSystem_PerformFirmwareUpdate
} // namespace app::classes::types
