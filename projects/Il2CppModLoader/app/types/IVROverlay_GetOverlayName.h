#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayName {
        inline app::IVROverlay_GetOverlayName__Class** type_info = (app::IVROverlay_GetOverlayName__Class**)(modloader::win::memory::resolve_rva(0x04715E50));
        inline app::IVROverlay_GetOverlayName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayName__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayName");
        }
        inline app::IVROverlay_GetOverlayName* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayName>(get_class());
        }
    } // namespace IVROverlay_GetOverlayName
} // namespace app::classes::types
