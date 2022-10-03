#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetInt32TrackedDeviceProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetInt32TrackedDeviceProperty__Class** type_info;
        inline app::IVRSystem_GetInt32TrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetInt32TrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetInt32TrackedDeviceProperty");
        }
        inline app::IVRSystem_GetInt32TrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetInt32TrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetInt32TrackedDeviceProperty
} // namespace app::classes::types
