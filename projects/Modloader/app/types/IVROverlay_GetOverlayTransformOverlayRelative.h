#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformOverlayRelative__Class.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformOverlayRelative.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTransformOverlayRelative {
        inline app::IVROverlay_GetOverlayTransformOverlayRelative__Class** type_info = (app::IVROverlay_GetOverlayTransformOverlayRelative__Class**)(modloader::win::memory::resolve_rva(0x04712B10));
        inline app::IVROverlay_GetOverlayTransformOverlayRelative__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTransformOverlayRelative__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTransformOverlayRelative");
        }
        inline app::IVROverlay_GetOverlayTransformOverlayRelative* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTransformOverlayRelative>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTransformOverlayRelative
} // namespace app::classes::types
