#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetGamepadFocusOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetGamepadFocusOverlay__Class** type_info;
        inline app::IVROverlay_SetGamepadFocusOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetGamepadFocusOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetGamepadFocusOverlay");
        }
        inline app::IVROverlay_SetGamepadFocusOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_SetGamepadFocusOverlay>(get_class());
        }
    } // namespace IVROverlay_SetGamepadFocusOverlay
} // namespace app::classes::types
