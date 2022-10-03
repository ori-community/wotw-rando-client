#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanvasUpdateRegistry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CanvasUpdateRegistry__Class** type_info;
        inline app::CanvasUpdateRegistry__Class* get_class() {
            return il2cpp::get_class<app::CanvasUpdateRegistry__Class>(type_info, "UnityEngine.UI", "CanvasUpdateRegistry");
        }
        inline app::CanvasUpdateRegistry* create() {
            return il2cpp::create_object<app::CanvasUpdateRegistry>(get_class());
        }
    } // namespace CanvasUpdateRegistry
} // namespace app::classes::types
