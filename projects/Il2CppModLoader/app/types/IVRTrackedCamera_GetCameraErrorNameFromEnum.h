#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraErrorNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class** type_info;
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraErrorNameFromEnum");
        }
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraErrorNameFromEnum>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraErrorNameFromEnum
} // namespace app::classes::types
