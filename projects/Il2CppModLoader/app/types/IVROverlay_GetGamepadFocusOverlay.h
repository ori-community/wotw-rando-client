#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetGamepadFocusOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetGamepadFocusOverlay__Class** type_info;
        inline app::IVROverlay_GetGamepadFocusOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetGamepadFocusOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetGamepadFocusOverlay");
        }
        inline app::IVROverlay_GetGamepadFocusOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_GetGamepadFocusOverlay>(get_class());
        }
    } // namespace IVROverlay_GetGamepadFocusOverlay
} // namespace app::classes::types
