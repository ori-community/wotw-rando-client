#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIScrollGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIScrollGroup__Class** type_info;
        inline app::GUIScrollGroup__Class* get_class() {
            return il2cpp::get_class<app::GUIScrollGroup__Class>(type_info, "UnityEngine", "GUIScrollGroup");
        }
        inline app::GUIScrollGroup* create() {
            return il2cpp::create_object<app::GUIScrollGroup>(get_class());
        }
    } // namespace GUIScrollGroup
} // namespace app::classes::types
