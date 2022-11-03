#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayRenderingPid {
        inline app::IVROverlay_GetOverlayRenderingPid__Class** type_info = (app::IVROverlay_GetOverlayRenderingPid__Class**)(modloader::win::memory::resolve_rva(0x04752790));
        inline app::IVROverlay_GetOverlayRenderingPid__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayRenderingPid__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayRenderingPid");
        }
        inline app::IVROverlay_GetOverlayRenderingPid* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayRenderingPid>(get_class());
        }
    } // namespace IVROverlay_GetOverlayRenderingPid
} // namespace app::classes::types
