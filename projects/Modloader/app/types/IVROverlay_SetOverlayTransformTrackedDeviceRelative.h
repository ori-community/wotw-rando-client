#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformTrackedDeviceRelative.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTransformTrackedDeviceRelative {
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class** type_info() {
            static app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class**)(modloader::win::memory::resolve_rva(0x0470C6B0));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTransformTrackedDeviceRelative__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTransformTrackedDeviceRelative");
        }
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceRelative* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTransformTrackedDeviceRelative>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTransformTrackedDeviceRelative
} // namespace app::classes::types
