#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass {
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class** type_info = (app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class**)(modloader::win::memory::resolve_rva(0x0477BD50));
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetSortedTrackedDeviceIndicesOfClass");
        }
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass* create() {
            return il2cpp::create_object<app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass>(get_class());
        }
    } // namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass
} // namespace app::classes::types
