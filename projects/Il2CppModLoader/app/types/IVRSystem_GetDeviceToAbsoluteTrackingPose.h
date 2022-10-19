#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetDeviceToAbsoluteTrackingPose {
        inline app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class** type_info = (app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x047791E0));
        inline app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetDeviceToAbsoluteTrackingPose");
        }
        inline app::IVRSystem_GetDeviceToAbsoluteTrackingPose* create() {
            return il2cpp::create_object<app::IVRSystem_GetDeviceToAbsoluteTrackingPose>(get_class());
        }
    } // namespace IVRSystem_GetDeviceToAbsoluteTrackingPose
} // namespace app::classes::types
