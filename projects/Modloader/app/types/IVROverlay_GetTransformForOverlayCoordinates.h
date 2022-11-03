#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetTransformForOverlayCoordinates {
        inline app::IVROverlay_GetTransformForOverlayCoordinates__Class** type_info = (app::IVROverlay_GetTransformForOverlayCoordinates__Class**)(modloader::win::memory::resolve_rva(0x0476B220));
        inline app::IVROverlay_GetTransformForOverlayCoordinates__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetTransformForOverlayCoordinates__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetTransformForOverlayCoordinates");
        }
        inline app::IVROverlay_GetTransformForOverlayCoordinates* create() {
            return il2cpp::create_object<app::IVROverlay_GetTransformForOverlayCoordinates>(get_class());
        }
    } // namespace IVROverlay_GetTransformForOverlayCoordinates
} // namespace app::classes::types
