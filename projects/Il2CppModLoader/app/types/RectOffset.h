#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectOffset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RectOffset__Class** type_info;
        inline app::RectOffset__Class* get_class() {
            return il2cpp::get_class<app::RectOffset__Class>(type_info, "UnityEngine", "RectOffset");
        }
        inline app::RectOffset* create() {
            return il2cpp::create_object<app::RectOffset>(get_class());
        }
    } // namespace RectOffset
} // namespace app::classes::types
