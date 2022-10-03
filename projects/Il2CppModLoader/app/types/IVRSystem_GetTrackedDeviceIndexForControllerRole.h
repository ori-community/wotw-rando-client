#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceIndexForControllerRole {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class** type_info;
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceIndexForControllerRole");
        }
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceIndexForControllerRole>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceIndexForControllerRole
} // namespace app::classes::types
