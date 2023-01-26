#pragma once
#include <Modloader/app/structs/IVRSystem_GetFloatTrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetFloatTrackedDeviceProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetFloatTrackedDeviceProperty {
        inline app::IVRSystem_GetFloatTrackedDeviceProperty__Class** type_info() {
            static app::IVRSystem_GetFloatTrackedDeviceProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetFloatTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0477F888));
            }
            return cache;
        }
        inline app::IVRSystem_GetFloatTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetFloatTrackedDeviceProperty__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetFloatTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetFloatTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetFloatTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetFloatTrackedDeviceProperty
} // namespace app::classes::types
