#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
