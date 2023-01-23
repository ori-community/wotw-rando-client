#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_GetStringTrackedDeviceProperty__Class.h>
#include <Modloader/app/structs/IVRSystem_GetStringTrackedDeviceProperty.h>

namespace app::classes::types {
    namespace IVRSystem_GetStringTrackedDeviceProperty {
        inline app::IVRSystem_GetStringTrackedDeviceProperty__Class** type_info = (app::IVRSystem_GetStringTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x04799C00));
        inline app::IVRSystem_GetStringTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetStringTrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetStringTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetStringTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetStringTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetStringTrackedDeviceProperty
} // namespace app::classes::types
