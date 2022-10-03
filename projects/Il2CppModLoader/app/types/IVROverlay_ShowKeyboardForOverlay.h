#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ShowKeyboardForOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_ShowKeyboardForOverlay__Class** type_info;
        inline app::IVROverlay_ShowKeyboardForOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowKeyboardForOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowKeyboardForOverlay");
        }
        inline app::IVROverlay_ShowKeyboardForOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_ShowKeyboardForOverlay>(get_class());
        }
    } // namespace IVROverlay_ShowKeyboardForOverlay
} // namespace app::classes::types
