#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClipperRegistry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClipperRegistry__Class** type_info;
        inline app::ClipperRegistry__Class* get_class() {
            return il2cpp::get_class<app::ClipperRegistry__Class>(type_info, "UnityEngine.UI", "ClipperRegistry");
        }
        inline app::ClipperRegistry* create() {
            return il2cpp::create_object<app::ClipperRegistry>(get_class());
        }
    } // namespace ClipperRegistry
} // namespace app::classes::types
