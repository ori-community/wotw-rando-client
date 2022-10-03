#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayName__Class** type_info;
        inline app::IVROverlay_SetOverlayName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayName__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayName");
        }
        inline app::IVROverlay_SetOverlayName* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayName>(get_class());
        }
    } // namespace IVROverlay_SetOverlayName
} // namespace app::classes::types
