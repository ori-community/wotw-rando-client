#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTransformTrackedDeviceRelative {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class** type_info;
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTransformTrackedDeviceRelative");
        }
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceRelative* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTransformTrackedDeviceRelative>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTransformTrackedDeviceRelative
} // namespace app::classes::types
