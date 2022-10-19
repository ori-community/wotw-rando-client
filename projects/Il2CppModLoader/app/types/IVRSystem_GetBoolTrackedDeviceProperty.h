#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetBoolTrackedDeviceProperty {
        inline app::IVRSystem_GetBoolTrackedDeviceProperty__Class** type_info = (app::IVRSystem_GetBoolTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x047897D8));
        inline app::IVRSystem_GetBoolTrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetBoolTrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetBoolTrackedDeviceProperty");
        }
        inline app::IVRSystem_GetBoolTrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetBoolTrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetBoolTrackedDeviceProperty
} // namespace app::classes::types
