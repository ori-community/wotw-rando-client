#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceManager_CultureNameResourceSetPair {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResourceManager_CultureNameResourceSetPair__Class** type_info;
        inline app::ResourceManager_CultureNameResourceSetPair__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceManager_CultureNameResourceSetPair__Class>(type_info, "System.Resources", "ResourceManager", "CultureNameResourceSetPair");
        }
        inline app::ResourceManager_CultureNameResourceSetPair* create() {
            return il2cpp::create_object<app::ResourceManager_CultureNameResourceSetPair>(get_class());
        }
    } // namespace ResourceManager_CultureNameResourceSetPair
} // namespace app::classes::types
