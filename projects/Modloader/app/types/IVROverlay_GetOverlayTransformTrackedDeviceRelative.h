#pragma once
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformTrackedDeviceRelative.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformTrackedDeviceRelative__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformTrackedDeviceRelative {
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceRelative__Class** type_info() {
            static app::IVROverlay_GetOverlayTransformTrackedDeviceRelative__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetOverlayTransformTrackedDeviceRelative__Class**)(modloader::win::memory::resolve_rva(0x047290C0));
            }
            return cache;
        }
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceRelative__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformTrackedDeviceRelative__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformTrackedDeviceRelative");
        }
        inline app::IVROverlay_GetOverlayTransformTrackedDeviceRelative* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformTrackedDeviceRelative>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformTrackedDeviceRelative
} // namespace app::classes::types
