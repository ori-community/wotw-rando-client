#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceActivityLevel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetTrackedDeviceActivityLevel__Class** type_info;
        inline app::IVRSystem_GetTrackedDeviceActivityLevel__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceActivityLevel__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceActivityLevel");
        }
        inline app::IVRSystem_GetTrackedDeviceActivityLevel* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceActivityLevel>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceActivityLevel
} // namespace app::classes::types
