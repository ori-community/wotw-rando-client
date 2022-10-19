#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GraphicRegistry {
        inline app::GraphicRegistry__Class** type_info = (app::GraphicRegistry__Class**)(modloader::win::memory::resolve_rva(0x047934E8));
        inline app::GraphicRegistry__Class* get_class() {
            return il2cpp::get_class<app::GraphicRegistry__Class>(type_info, "UnityEngine.UI", "GraphicRegistry");
        }
        inline app::GraphicRegistry* create() {
            return il2cpp::create_object<app::GraphicRegistry>(get_class());
        }
    } // namespace GraphicRegistry
} // namespace app::classes::types
