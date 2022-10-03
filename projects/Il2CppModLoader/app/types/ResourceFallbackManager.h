#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceFallbackManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResourceFallbackManager__Class** type_info;
        inline app::ResourceFallbackManager__Class* get_class() {
            return il2cpp::get_class<app::ResourceFallbackManager__Class>(type_info, "System.Resources", "ResourceFallbackManager");
        }
        inline app::ResourceFallbackManager* create() {
            return il2cpp::create_object<app::ResourceFallbackManager>(get_class());
        }
    } // namespace ResourceFallbackManager
} // namespace app::classes::types
