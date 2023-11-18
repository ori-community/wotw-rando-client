#pragma once
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator.h>
#include <Modloader/app/structs/ResourceManager_ResourceManagerMediator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceManager_ResourceManagerMediator {
        inline app::ResourceManager_ResourceManagerMediator__Class** type_info() {
            static app::ResourceManager_ResourceManagerMediator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResourceManager_ResourceManagerMediator__Class**)(modloader::win::memory::resolve_rva(0x04750420));
            }
            return cache;
        }
        inline app::ResourceManager_ResourceManagerMediator__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceManager_ResourceManagerMediator__Class>(type_info(), "System.Resources", "ResourceManager", "ResourceManagerMediator");
        }
        inline app::ResourceManager_ResourceManagerMediator* create() {
            return il2cpp::create_object<app::ResourceManager_ResourceManagerMediator>(get_class());
        }
    } // namespace ResourceManager_ResourceManagerMediator
} // namespace app::classes::types
