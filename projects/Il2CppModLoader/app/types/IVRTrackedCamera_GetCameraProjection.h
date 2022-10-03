#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraProjection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_GetCameraProjection__Class** type_info;
        inline app::IVRTrackedCamera_GetCameraProjection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraProjection__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraProjection");
        }
        inline app::IVRTrackedCamera_GetCameraProjection* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraProjection>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraProjection
} // namespace app::classes::types
