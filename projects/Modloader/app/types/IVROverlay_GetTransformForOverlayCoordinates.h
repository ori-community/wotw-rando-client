#pragma once
#include <Modloader/app/structs/IVROverlay_GetTransformForOverlayCoordinates.h>
#include <Modloader/app/structs/IVROverlay_GetTransformForOverlayCoordinates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetTransformForOverlayCoordinates {
        inline app::IVROverlay_GetTransformForOverlayCoordinates__Class** type_info() {
            static app::IVROverlay_GetTransformForOverlayCoordinates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_GetTransformForOverlayCoordinates__Class**)(modloader::win::memory::resolve_rva(0x0476B220));
            }
            return cache;
        }
        inline app::IVROverlay_GetTransformForOverlayCoordinates__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetTransformForOverlayCoordinates__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetTransformForOverlayCoordinates");
        }
        inline app::IVROverlay_GetTransformForOverlayCoordinates* create() {
            return il2cpp::create_object<app::IVROverlay_GetTransformForOverlayCoordinates>(get_class());
        }
    } // namespace IVROverlay_GetTransformForOverlayCoordinates
} // namespace app::classes::types
