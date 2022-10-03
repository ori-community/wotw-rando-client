#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformTrackedDeviceComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayTransformTrackedDeviceComponent__Class** type_info;
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformTrackedDeviceComponent__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformTrackedDeviceComponent");
        }
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceComponent* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformTrackedDeviceComponent>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformTrackedDeviceComponent
} // namespace app::classes::types
