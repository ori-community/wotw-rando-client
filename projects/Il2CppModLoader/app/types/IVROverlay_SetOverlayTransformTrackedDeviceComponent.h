#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTransformTrackedDeviceComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class** type_info;
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTransformTrackedDeviceComponent");
        }
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceComponent* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTransformTrackedDeviceComponent>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTransformTrackedDeviceComponent
} // namespace app::classes::types
