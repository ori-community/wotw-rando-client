#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIUtility__Class** type_info;
        inline app::GUIUtility__Class* get_class() {
            return il2cpp::get_class<app::GUIUtility__Class>(type_info, "UnityEngine", "GUIUtility");
        }
        inline app::GUIUtility* create() {
            return il2cpp::create_object<app::GUIUtility>(get_class());
        }
    } // namespace GUIUtility
} // namespace app::classes::types
