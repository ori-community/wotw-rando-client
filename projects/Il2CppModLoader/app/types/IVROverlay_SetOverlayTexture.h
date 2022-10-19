#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTexture {
        inline app::IVROverlay_SetOverlayTexture__Class** type_info = (app::IVROverlay_SetOverlayTexture__Class**)(modloader::win::memory::resolve_rva(0x0474ADD8));
        inline app::IVROverlay_SetOverlayTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTexture");
        }
        inline app::IVROverlay_SetOverlayTexture* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTexture>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTexture
} // namespace app::classes::types
