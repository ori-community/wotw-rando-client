#pragma once
#include <Modloader/app/structs/IVRSystem_GetBoolTrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetBoolTrackedDeviceProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetBoolTrackedDeviceProperty {
        inline app::IVRSystem_GetBoolTrackedDeviceProperty__Class** type_info() {
            static app::IVRSystem_GetBoolTrackedDeviceProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetBoolTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x047897D8));
            }
            return cache;
        }
        inline app::IVRSystem_GetBoolTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetBoolTrackedDeviceProperty__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetBoolTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetBoolTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetBoolTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetBoolTrackedDeviceProperty
} // namespace app::classes::types
