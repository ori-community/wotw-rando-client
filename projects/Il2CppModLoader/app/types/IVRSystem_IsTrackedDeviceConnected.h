#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_IsTrackedDeviceConnected {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_IsTrackedDeviceConnected__Class** type_info;
        inline app::IVRSystem_IsTrackedDeviceConnected__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_IsTrackedDeviceConnected__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_IsTrackedDeviceConnected");
        }
        inline app::IVRSystem_IsTrackedDeviceConnected* create() {
            return il2cpp::create_object<app::IVRSystem_IsTrackedDeviceConnected>(get_class());
        }
    } // namespace IVRSystem_IsTrackedDeviceConnected
} // namespace app::classes::types
