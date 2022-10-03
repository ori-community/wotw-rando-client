#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayoutGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUILayoutGroup__Class** type_info;
        inline app::GUILayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutGroup__Class>(type_info, "UnityEngine", "GUILayoutGroup");
        }
        inline app::GUILayoutGroup* create() {
            return il2cpp::create_object<app::GUILayoutGroup>(get_class());
        }
    } // namespace GUILayoutGroup
} // namespace app::classes::types
