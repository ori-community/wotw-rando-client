#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_GetFloatTrackedDeviceProperty__Class.h>
#include <Modloader/app/structs/IVRSystem_GetFloatTrackedDeviceProperty.h>

namespace app::classes::types {
    namespace IVRSystem_GetFloatTrackedDeviceProperty {
        inline app::IVRSystem_GetFloatTrackedDeviceProperty__Class** type_info = (app::IVRSystem_GetFloatTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0477F888));
        inline app::IVRSystem_GetFloatTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetFloatTrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetFloatTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetFloatTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetFloatTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetFloatTrackedDeviceProperty
} // namespace app::classes::types
