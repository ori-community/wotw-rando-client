#pragma once
#include <Modloader/app/structs/IVRSystem_GetSortedTrackedDeviceIndicesOfClass.h>
#include <Modloader/app/structs/IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass {
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class** type_info() {
            static app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class**)(modloader::win::memory::resolve_rva(0x0477BD50));
            }
            return cache;
        }
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetSortedTrackedDeviceIndicesOfClass");
        }
        inline app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass* create() {
            return il2cpp::create_object<app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass>(get_class());
        }
    } // namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass
} // namespace app::classes::types
