#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImGuiManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ImGuiManager__Class** type_info;
        inline app::ImGuiManager__Class* get_class() {
            return il2cpp::get_class<app::ImGuiManager__Class>(type_info, "Moon", "ImGuiManager");
        }
        inline app::ImGuiManager* create() {
            return il2cpp::create_object<app::ImGuiManager>(get_class());
        }
    } // namespace ImGuiManager
} // namespace app::classes::types
