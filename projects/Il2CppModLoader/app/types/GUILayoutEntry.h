#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayoutEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUILayoutEntry__Class** type_info;
        inline app::GUILayoutEntry__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutEntry__Class>(type_info, "UnityEngine", "GUILayoutEntry");
        }
        inline app::GUILayoutEntry* create() {
            return il2cpp::create_object<app::GUILayoutEntry>(get_class());
        }
        inline app::GUILayoutEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GUILayoutEntry__Array>(get_class(), size);
        }
    } // namespace GUILayoutEntry
} // namespace app::classes::types
