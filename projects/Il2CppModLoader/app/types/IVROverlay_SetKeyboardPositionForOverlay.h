#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetKeyboardPositionForOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetKeyboardPositionForOverlay__Class** type_info;
        inline app::IVROverlay_SetKeyboardPositionForOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetKeyboardPositionForOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetKeyboardPositionForOverlay");
        }
        inline app::IVROverlay_SetKeyboardPositionForOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_SetKeyboardPositionForOverlay>(get_class());
        }
    } // namespace IVROverlay_SetKeyboardPositionForOverlay
} // namespace app::classes::types
