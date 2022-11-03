#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTransformOverlayRelative {
        inline app::IVROverlay_SetOverlayTransformOverlayRelative__Class** type_info = (app::IVROverlay_SetOverlayTransformOverlayRelative__Class**)(modloader::win::memory::resolve_rva(0x047793C8));
        inline app::IVROverlay_SetOverlayTransformOverlayRelative__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTransformOverlayRelative__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTransformOverlayRelative");
        }
        inline app::IVROverlay_SetOverlayTransformOverlayRelative* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTransformOverlayRelative>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTransformOverlayRelative
} // namespace app::classes::types
