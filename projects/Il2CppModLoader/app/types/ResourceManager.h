#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResourceManager__Class** type_info;
        inline app::ResourceManager__Class* get_class() {
            return il2cpp::get_class<app::ResourceManager__Class>(type_info, "System.Resources", "ResourceManager");
        }
        inline app::ResourceManager* create() {
            return il2cpp::create_object<app::ResourceManager>(get_class());
        }
    } // namespace ResourceManager
} // namespace app::classes::types
