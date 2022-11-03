#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetInt32TrackedDeviceProperty {
        inline app::IVRSystem_GetInt32TrackedDeviceProperty__Class** type_info = (app::IVRSystem_GetInt32TrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0471DDE0));
        inline app::IVRSystem_GetInt32TrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetInt32TrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetInt32TrackedDeviceProperty");
        }
        inline app::IVRSystem_GetInt32TrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetInt32TrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetInt32TrackedDeviceProperty
} // namespace app::classes::types
