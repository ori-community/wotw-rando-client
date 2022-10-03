#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicRegistry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GraphicRegistry__Class** type_info;
        inline app::GraphicRegistry__Class* get_class() {
            return il2cpp::get_class<app::GraphicRegistry__Class>(type_info, "UnityEngine.UI", "GraphicRegistry");
        }
        inline app::GraphicRegistry* create() {
            return il2cpp::create_object<app::GraphicRegistry>(get_class());
        }
    } // namespace GraphicRegistry
} // namespace app::classes::types
