#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIStyle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIStyle__Class** type_info;
        inline app::GUIStyle__Class* get_class() {
            return il2cpp::get_class<app::GUIStyle__Class>(type_info, "UnityEngine", "GUIStyle");
        }
        inline app::GUIStyle* create() {
            return il2cpp::create_object<app::GUIStyle>(get_class());
        }
        inline app::GUIStyle__Array* create_array(int size) {
            return il2cpp::array_new<app::GUIStyle__Array>(get_class(), size);
        }
    } // namespace GUIStyle
} // namespace app::classes::types
