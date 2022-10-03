#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceClass {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetTrackedDeviceClass__Class** type_info;
        inline app::IVRSystem_GetTrackedDeviceClass__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceClass__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceClass");
        }
        inline app::IVRSystem_GetTrackedDeviceClass* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceClass>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceClass
} // namespace app::classes::types
