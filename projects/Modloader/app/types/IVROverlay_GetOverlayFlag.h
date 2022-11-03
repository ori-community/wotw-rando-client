#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayFlag {
        inline app::IVROverlay_GetOverlayFlag__Class** type_info = (app::IVROverlay_GetOverlayFlag__Class**)(modloader::win::memory::resolve_rva(0x04788B50));
        inline app::IVROverlay_GetOverlayFlag__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayFlag__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayFlag");
        }
        inline app::IVROverlay_GetOverlayFlag* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayFlag>(get_class());
        }
    } // namespace IVROverlay_GetOverlayFlag
} // namespace app::classes::types
