#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTextureSize {
        inline app::IVROverlay_GetOverlayTextureSize__Class** type_info = (app::IVROverlay_GetOverlayTextureSize__Class**)(modloader::win::memory::resolve_rva(0x047990B8));
        inline app::IVROverlay_GetOverlayTextureSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTextureSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTextureSize");
        }
        inline app::IVROverlay_GetOverlayTextureSize* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTextureSize>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTextureSize
} // namespace app::classes::types
