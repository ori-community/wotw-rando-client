#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetStringTrackedDeviceProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetStringTrackedDeviceProperty__Class** type_info;
        inline app::IVRSystem_GetStringTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetStringTrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetStringTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetStringTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetStringTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetStringTrackedDeviceProperty
} // namespace app::classes::types
