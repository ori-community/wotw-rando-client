#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRApplicationError__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRApplicationError__Enum__Class** type_info;
        inline app::EVRApplicationError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationError");
        }
        inline app::EVRApplicationError__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationError__Enum>(get_class());
        }
    } // namespace EVRApplicationError__Enum
} // namespace app::classes::types
