#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetControllerRoleForTrackedDeviceIndex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class** type_info;
        inline app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetControllerRoleForTrackedDeviceIndex");
        }
        inline app::IVRSystem_GetControllerRoleForTrackedDeviceIndex* create() {
            return il2cpp::create_object<app::IVRSystem_GetControllerRoleForTrackedDeviceIndex>(get_class());
        }
    } // namespace IVRSystem_GetControllerRoleForTrackedDeviceIndex
} // namespace app::classes::types
