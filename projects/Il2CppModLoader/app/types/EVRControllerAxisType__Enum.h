#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRControllerAxisType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRControllerAxisType__Enum__Class** type_info;
        inline app::EVRControllerAxisType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRControllerAxisType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRControllerAxisType");
        }
        inline app::EVRControllerAxisType__Enum* create() {
            return il2cpp::create_object<app::EVRControllerAxisType__Enum>(get_class());
        }
    } // namespace EVRControllerAxisType__Enum
} // namespace app::classes::types
