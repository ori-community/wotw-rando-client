#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayWidthInMeters__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayWidthInMeters.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayWidthInMeters {
        inline app::IVROverlay_SetOverlayWidthInMeters__Class** type_info = (app::IVROverlay_SetOverlayWidthInMeters__Class**)(modloader::win::memory::resolve_rva(0x04786610));
        inline app::IVROverlay_SetOverlayWidthInMeters__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayWidthInMeters__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayWidthInMeters");
        }
        inline app::IVROverlay_SetOverlayWidthInMeters* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayWidthInMeters>(get_class());
        }
    } // namespace IVROverlay_SetOverlayWidthInMeters
} // namespace app::classes::types
