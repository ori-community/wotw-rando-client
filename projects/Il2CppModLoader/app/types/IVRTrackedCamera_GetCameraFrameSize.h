#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraFrameSize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_GetCameraFrameSize__Class** type_info;
        inline app::IVRTrackedCamera_GetCameraFrameSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraFrameSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraFrameSize");
        }
        inline app::IVRTrackedCamera_GetCameraFrameSize* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraFrameSize>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraFrameSize
} // namespace app::classes::types
