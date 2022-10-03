#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIContent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIContent__Class** type_info;
        inline app::GUIContent__Class* get_class() {
            return il2cpp::get_class<app::GUIContent__Class>(type_info, "UnityEngine", "GUIContent");
        }
        inline app::GUIContent* create() {
            return il2cpp::create_object<app::GUIContent>(get_class());
        }
        inline app::GUIContent__Array* create_array(int size) {
            return il2cpp::array_new<app::GUIContent__Array>(get_class(), size);
        }
    } // namespace GUIContent
} // namespace app::classes::types
