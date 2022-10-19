#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetUint64TrackedDeviceProperty {
        inline app::IVRSystem_GetUint64TrackedDeviceProperty__Class** type_info = (app::IVRSystem_GetUint64TrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x04780B40));
        inline app::IVRSystem_GetUint64TrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetUint64TrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetUint64TrackedDeviceProperty");
        }
        inline app::IVRSystem_GetUint64TrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetUint64TrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetUint64TrackedDeviceProperty
} // namespace app::classes::types
