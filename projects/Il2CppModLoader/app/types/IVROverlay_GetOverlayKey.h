#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayKey {
        inline app::IVROverlay_GetOverlayKey__Class** type_info = (app::IVROverlay_GetOverlayKey__Class**)(modloader::win::memory::resolve_rva(0x04726078));
        inline app::IVROverlay_GetOverlayKey__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayKey__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayKey");
        }
        inline app::IVROverlay_GetOverlayKey* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayKey>(get_class());
        }
    } // namespace IVROverlay_GetOverlayKey
} // namespace app::classes::types
