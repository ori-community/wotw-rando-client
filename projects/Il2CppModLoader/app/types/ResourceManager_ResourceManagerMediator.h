#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceManager_ResourceManagerMediator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResourceManager_ResourceManagerMediator__Class** type_info;
        inline app::ResourceManager_ResourceManagerMediator__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceManager_ResourceManagerMediator__Class>(type_info, "System.Resources", "ResourceManager", "ResourceManagerMediator");
        }
        inline app::ResourceManager_ResourceManagerMediator* create() {
            return il2cpp::create_object<app::ResourceManager_ResourceManagerMediator>(get_class());
        }
    } // namespace ResourceManager_ResourceManagerMediator
} // namespace app::classes::types
