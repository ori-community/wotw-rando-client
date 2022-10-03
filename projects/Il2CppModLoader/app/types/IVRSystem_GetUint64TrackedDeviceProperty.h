#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetUint64TrackedDeviceProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetUint64TrackedDeviceProperty__Class** type_info;
        inline app::IVRSystem_GetUint64TrackedDeviceProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetUint64TrackedDeviceProperty__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetUint64TrackedDeviceProperty");
        }
        inline app::IVRSystem_GetUint64TrackedDeviceProperty* create() {
            return il2cpp::create_object<app::IVRSystem_GetUint64TrackedDeviceProperty>(get_class());
        }
    } // namespace IVRSystem_GetUint64TrackedDeviceProperty
} // namespace app::classes::types
