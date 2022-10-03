#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class** type_info;
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetSortedTrackedDeviceIndicesOfClass");
        }
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass* create() {
            return il2cpp::create_object<app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass>(get_class());
        }
    } // namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass
} // namespace app::classes::types
