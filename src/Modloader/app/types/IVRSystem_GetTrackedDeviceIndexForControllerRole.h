#pragma once
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceIndexForControllerRole.h>
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceIndexForControllerRole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTrackedDeviceIndexForControllerRole {
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class** type_info() {
            static app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class**)(modloader::win::memory::resolve_rva(0x0472CFE8));
            }
            return cache;
        }
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTrackedDeviceIndexForControllerRole");
        }
        inline app::IVRSystem_GetTrackedDeviceIndexForControllerRole* create() {
            return il2cpp::create_object<app::IVRSystem_GetTrackedDeviceIndexForControllerRole>(get_class());
        }
    } // namespace IVRSystem_GetTrackedDeviceIndexForControllerRole
} // namespace app::classes::types
