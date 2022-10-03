#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetFloatTrackedDeviceProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetFloatTrackedDeviceProperty__Class** type_info;
        inline app::IVRSystem_GetFloatTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetFloatTrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetFloatTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetFloatTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetFloatTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetFloatTrackedDeviceProperty
} // namespace app::classes::types
