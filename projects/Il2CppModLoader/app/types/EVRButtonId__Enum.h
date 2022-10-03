#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRButtonId__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRButtonId__Enum__Class** type_info;
        inline app::EVRButtonId__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRButtonId__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRButtonId");
        }
        inline app::EVRButtonId__Enum* create() {
            return il2cpp::create_object<app::EVRButtonId__Enum>(get_class());
        }
    } // namespace EVRButtonId__Enum
} // namespace app::classes::types
