#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayFlags {
        inline app::IVROverlay_GetOverlayFlags__Class** type_info = (app::IVROverlay_GetOverlayFlags__Class**)(modloader::win::memory::resolve_rva(0x04788028));
        inline app::IVROverlay_GetOverlayFlags__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayFlags__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayFlags");
        }
        inline app::IVROverlay_GetOverlayFlags* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayFlags>(get_class());
        }
    } // namespace IVROverlay_GetOverlayFlags
} // namespace app::classes::types
