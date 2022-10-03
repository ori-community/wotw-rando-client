#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraIntrinsics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_GetCameraIntrinsics__Class** type_info;
        inline app::IVRTrackedCamera_GetCameraIntrinsics__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraIntrinsics__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraIntrinsics");
        }
        inline app::IVRTrackedCamera_GetCameraIntrinsics* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraIntrinsics>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraIntrinsics
} // namespace app::classes::types
