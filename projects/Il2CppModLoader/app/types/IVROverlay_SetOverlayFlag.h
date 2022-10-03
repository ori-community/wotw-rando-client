#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayFlag {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayFlag__Class** type_info;
        inline app::IVROverlay_SetOverlayFlag__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayFlag__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayFlag");
        }
        inline app::IVROverlay_SetOverlayFlag* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayFlag>(get_class());
        }
    } // namespace IVROverlay_SetOverlayFlag
} // namespace app::classes::types
