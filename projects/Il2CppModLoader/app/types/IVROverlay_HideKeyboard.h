#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_HideKeyboard {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_HideKeyboard__Class** type_info;
        inline app::IVROverlay_HideKeyboard__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_HideKeyboard__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_HideKeyboard");
        }
        inline app::IVROverlay_HideKeyboard* create() {
            return il2cpp::create_object<app::IVROverlay_HideKeyboard>(get_class());
        }
    } // namespace IVROverlay_HideKeyboard
} // namespace app::classes::types
