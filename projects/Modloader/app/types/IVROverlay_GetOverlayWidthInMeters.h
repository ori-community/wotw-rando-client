#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayWidthInMeters__Class.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayWidthInMeters.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayWidthInMeters {
        inline app::IVROverlay_GetOverlayWidthInMeters__Class** type_info = (app::IVROverlay_GetOverlayWidthInMeters__Class**)(modloader::win::memory::resolve_rva(0x0475F488));
        inline app::IVROverlay_GetOverlayWidthInMeters__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayWidthInMeters__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayWidthInMeters");
        }
        inline app::IVROverlay_GetOverlayWidthInMeters* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayWidthInMeters>(get_class());
        }
    } // namespace IVROverlay_GetOverlayWidthInMeters
} // namespace app::classes::types
