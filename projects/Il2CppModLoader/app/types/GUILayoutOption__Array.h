#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayoutOption__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUILayoutOption__Array__Class** type_info;
        inline app::GUILayoutOption__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutOption__Array__Class>(type_info, "UnityEngine", "GUILayoutOption[]");
        }
        inline app::GUILayoutOption__Array* create() {
            return il2cpp::create_object<app::GUILayoutOption__Array>(get_class());
        }
    } // namespace GUILayoutOption__Array
} // namespace app::classes::types
