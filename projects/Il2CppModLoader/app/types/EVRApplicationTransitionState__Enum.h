#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRApplicationTransitionState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRApplicationTransitionState__Enum__Class** type_info;
        inline app::EVRApplicationTransitionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationTransitionState__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationTransitionState");
        }
        inline app::EVRApplicationTransitionState__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationTransitionState__Enum>(get_class());
        }
    } // namespace EVRApplicationTransitionState__Enum
} // namespace app::classes::types
