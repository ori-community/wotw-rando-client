#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVROverlayError__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVROverlayError__Enum__Class** type_info;
        inline app::EVROverlayError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVROverlayError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVROverlayError");
        }
        inline app::EVROverlayError__Enum* create() {
            return il2cpp::create_object<app::EVROverlayError__Enum>(get_class());
        }
    } // namespace EVROverlayError__Enum
} // namespace app::classes::types
