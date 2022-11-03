#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceManager_ResourceManagerMediator {
        inline app::ResourceManager_ResourceManagerMediator__Class** type_info = (app::ResourceManager_ResourceManagerMediator__Class**)(modloader::win::memory::resolve_rva(0x04750420));
        inline app::ResourceManager_ResourceManagerMediator__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceManager_ResourceManagerMediator__Class>(type_info, "System.Resources", "ResourceManager", "ResourceManagerMediator");
        }
        inline app::ResourceManager_ResourceManagerMediator* create() {
            return il2cpp::create_object<app::ResourceManager_ResourceManagerMediator>(get_class());
        }
    } // namespace ResourceManager_ResourceManagerMediator
} // namespace app::classes::types
