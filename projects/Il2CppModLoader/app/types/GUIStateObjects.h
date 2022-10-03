#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIStateObjects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIStateObjects__Class** type_info;
        inline app::GUIStateObjects__Class* get_class() {
            return il2cpp::get_class<app::GUIStateObjects__Class>(type_info, "UnityEngine", "GUIStateObjects");
        }
        inline app::GUIStateObjects* create() {
            return il2cpp::create_object<app::GUIStateObjects>(get_class());
        }
    } // namespace GUIStateObjects
} // namespace app::classes::types
