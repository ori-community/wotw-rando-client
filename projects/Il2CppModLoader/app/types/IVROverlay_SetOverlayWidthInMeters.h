#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayWidthInMeters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayWidthInMeters__Class** type_info;
        inline app::IVROverlay_SetOverlayWidthInMeters__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayWidthInMeters__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayWidthInMeters");
        }
        inline app::IVROverlay_SetOverlayWidthInMeters* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayWidthInMeters>(get_class());
        }
    } // namespace IVROverlay_SetOverlayWidthInMeters
} // namespace app::classes::types
