#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetKeyboardText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetKeyboardText__Class** type_info;
        inline app::IVROverlay_GetKeyboardText__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetKeyboardText__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetKeyboardText");
        }
        inline app::IVROverlay_GetKeyboardText* create() {
            return il2cpp::create_object<app::IVROverlay_GetKeyboardText>(get_class());
        }
    } // namespace IVROverlay_GetKeyboardText
} // namespace app::classes::types
