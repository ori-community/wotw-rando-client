#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayoutUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUILayoutUtility__Class** type_info;
        inline app::GUILayoutUtility__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutUtility__Class>(type_info, "UnityEngine", "GUILayoutUtility");
        }
        inline app::GUILayoutUtility* create() {
            return il2cpp::create_object<app::GUILayoutUtility>(get_class());
        }
    } // namespace GUILayoutUtility
} // namespace app::classes::types
