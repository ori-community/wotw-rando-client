#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformAbsolute {
        inline app::IVROverlay_GetOverlayTransformAbsolute__Class** type_info = (app::IVROverlay_GetOverlayTransformAbsolute__Class**)(modloader::win::memory::resolve_rva(0x04785938));
        inline app::IVROverlay_GetOverlayTransformAbsolute__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformAbsolute__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformAbsolute");
        }
        inline app::IVROverlay_GetOverlayTransformAbsolute* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformAbsolute>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformAbsolute
} // namespace app::classes::types
