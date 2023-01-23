#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformTrackedDeviceComponent.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTransformTrackedDeviceComponent {
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class** type_info = (app::IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class**)(modloader::win::memory::resolve_rva(0x04762B38));
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTransformTrackedDeviceComponent__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTransformTrackedDeviceComponent");
        }
        inline app::IVROverlay_SetOverlayTransformTrackedDeviceComponent* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTransformTrackedDeviceComponent>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTransformTrackedDeviceComponent
} // namespace app::classes::types
