#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetMatrix34TrackedDeviceProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class** type_info;
        inline app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetMatrix34TrackedDeviceProperty");
        }
        inline app::IVRSystem_GetMatrix34TrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetMatrix34TrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetMatrix34TrackedDeviceProperty
} // namespace app::classes::types
