#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayRenderingPid__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayRenderingPid.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayRenderingPid {
        inline app::IVROverlay_SetOverlayRenderingPid__Class** type_info = (app::IVROverlay_SetOverlayRenderingPid__Class**)(modloader::win::memory::resolve_rva(0x04720E18));
        inline app::IVROverlay_SetOverlayRenderingPid__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayRenderingPid__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayRenderingPid");
        }
        inline app::IVROverlay_SetOverlayRenderingPid* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayRenderingPid>(get_class());
        }
    } // namespace IVROverlay_SetOverlayRenderingPid
} // namespace app::classes::types
