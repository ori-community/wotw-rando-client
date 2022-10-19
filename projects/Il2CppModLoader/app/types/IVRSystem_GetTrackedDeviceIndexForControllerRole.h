#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceIndexForControllerRole {
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class** type_info = (app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class**)(modloader::win::memory::resolve_rva(0x0472CFE8));
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceIndexForControllerRole");
        }
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceIndexForControllerRole>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceIndexForControllerRole
} // namespace app::classes::types
