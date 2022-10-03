#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIStyleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIStyleState__Class** type_info;
        inline app::GUIStyleState__Class* get_class() {
            return il2cpp::get_class<app::GUIStyleState__Class>(type_info, "UnityEngine", "GUIStyleState");
        }
        inline app::GUIStyleState* create() {
            return il2cpp::create_object<app::GUIStyleState>(get_class());
        }
    } // namespace GUIStyleState
} // namespace app::classes::types
