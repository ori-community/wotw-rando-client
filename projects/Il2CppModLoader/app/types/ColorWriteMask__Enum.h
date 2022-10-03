#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorWriteMask__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorWriteMask__Enum__Class** type_info;
        inline app::ColorWriteMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::ColorWriteMask__Enum__Class>(type_info, "UnityEngine.Rendering", "ColorWriteMask");
        }
        inline app::ColorWriteMask__Enum* create() {
            return il2cpp::create_object<app::ColorWriteMask__Enum>(get_class());
        }
    } // namespace ColorWriteMask__Enum
} // namespace app::classes::types
