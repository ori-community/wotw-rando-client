#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ImGuiManager {
        inline app::ImGuiManager__Class** type_info = (app::ImGuiManager__Class**)(modloader::win::memory::resolve_rva(0x047914D0));
        inline app::ImGuiManager__Class* get_class() {
            return il2cpp::get_class<app::ImGuiManager__Class>(type_info, "Moon", "ImGuiManager");
        }
        inline app::ImGuiManager* create() {
            return il2cpp::create_object<app::ImGuiManager>(get_class());
        }
    } // namespace ImGuiManager
} // namespace app::classes::types
