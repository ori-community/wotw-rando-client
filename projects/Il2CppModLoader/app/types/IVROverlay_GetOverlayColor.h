#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayColor {
        inline app::IVROverlay_GetOverlayColor__Class** type_info = (app::IVROverlay_GetOverlayColor__Class**)(modloader::win::memory::resolve_rva(0x04750960));
        inline app::IVROverlay_GetOverlayColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayColor");
        }
        inline app::IVROverlay_GetOverlayColor* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayColor>(get_class());
        }
    } // namespace IVROverlay_GetOverlayColor
} // namespace app::classes::types
