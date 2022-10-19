#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIStyle {
        inline app::GUIStyle__Class** type_info = (app::GUIStyle__Class**)(modloader::win::memory::resolve_rva(0x047437D0));
        inline app::GUIStyle__Class* get_class() {
            return il2cpp::get_class<app::GUIStyle__Class>(type_info, "UnityEngine", "GUIStyle");
        }
        inline app::GUIStyle* create() {
            return il2cpp::create_object<app::GUIStyle>(get_class());
        }
        inline app::GUIStyle__Array* create_array(int size) {
            return il2cpp::array_new<app::GUIStyle__Array>(get_class(), size);
        }
        inline app::GUIStyle__Array* create_array(const std::vector<app::GUIStyle*>& items) {
            return il2cpp::array_new<app::GUIStyle__Array>(get_class(), items);
        }
    } // namespace GUIStyle
} // namespace app::classes::types
