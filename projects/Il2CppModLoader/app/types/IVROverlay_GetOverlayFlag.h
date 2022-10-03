#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayFlag {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetOverlayFlag__Class** type_info;
        inline app::IVROverlay_GetOverlayFlag__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayFlag__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayFlag");
        }
        inline app::IVROverlay_GetOverlayFlag* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayFlag>(get_class());
        }
    } // namespace IVROverlay_GetOverlayFlag
} // namespace app::classes::types
