#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVREye__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVREye__Enum__Class** type_info;
        inline app::EVREye__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVREye__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVREye");
        }
        inline app::EVREye__Enum* create() {
            return il2cpp::create_object<app::EVREye__Enum>(get_class());
        }
    } // namespace EVREye__Enum
} // namespace app::classes::types
