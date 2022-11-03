#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayIntersectionMask {
        inline app::IVROverlay_SetOverlayIntersectionMask__Class** type_info = (app::IVROverlay_SetOverlayIntersectionMask__Class**)(modloader::win::memory::resolve_rva(0x04732C60));
        inline app::IVROverlay_SetOverlayIntersectionMask__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayIntersectionMask__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayIntersectionMask");
        }
        inline app::IVROverlay_SetOverlayIntersectionMask* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayIntersectionMask>(get_class());
        }
    } // namespace IVROverlay_SetOverlayIntersectionMask
} // namespace app::classes::types
