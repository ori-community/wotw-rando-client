#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ShowKeyboard {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_ShowKeyboard__Class** type_info;
        inline app::IVROverlay_ShowKeyboard__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowKeyboard__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowKeyboard");
        }
        inline app::IVROverlay_ShowKeyboard* create() {
            return il2cpp::create_object<app::IVROverlay_ShowKeyboard>(get_class());
        }
    } // namespace IVROverlay_ShowKeyboard
} // namespace app::classes::types
