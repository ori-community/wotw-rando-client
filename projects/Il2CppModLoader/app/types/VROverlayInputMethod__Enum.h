#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VROverlayInputMethod__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VROverlayInputMethod__Enum__Class** type_info;
        inline app::VROverlayInputMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::VROverlayInputMethod__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayInputMethod");
        }
        inline app::VROverlayInputMethod__Enum* create() {
            return il2cpp::create_object<app::VROverlayInputMethod__Enum>(get_class());
        }
    } // namespace VROverlayInputMethod__Enum
} // namespace app::classes::types
