#pragma once
#include <Modloader/app/structs/IVRSystem_GetStringTrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetStringTrackedDeviceProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetStringTrackedDeviceProperty {
        inline app::IVRSystem_GetStringTrackedDeviceProperty__Class** type_info() {
            static app::IVRSystem_GetStringTrackedDeviceProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetStringTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x04799C00));
            }
            return cache;
        }
        inline app::IVRSystem_GetStringTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetStringTrackedDeviceProperty__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetStringTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetStringTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetStringTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetStringTrackedDeviceProperty
} // namespace app::classes::types
