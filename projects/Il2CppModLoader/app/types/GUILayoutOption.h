#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayoutOption {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUILayoutOption__Class** type_info;
        inline app::GUILayoutOption__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutOption__Class>(type_info, "UnityEngine", "GUILayoutOption");
        }
        inline app::GUILayoutOption* create() {
            return il2cpp::create_object<app::GUILayoutOption>(get_class());
        }
        inline app::GUILayoutOption__Array* create_array(int size) {
            return il2cpp::array_new<app::GUILayoutOption__Array>(get_class(), size);
        }
        inline app::GUILayoutOption__Array* create_array(const std::vector<app::GUILayoutOption*>& items) {
            return il2cpp::array_new<app::GUILayoutOption__Array>(get_class(), items);
        }
    } // namespace GUILayoutOption
} // namespace app::classes::types
