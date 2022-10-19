#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceManager {
        inline app::ResourceManager__Class** type_info = (app::ResourceManager__Class**)(modloader::win::memory::resolve_rva(0x047439E8));
        inline app::ResourceManager__Class* get_class() {
            return il2cpp::get_class<app::ResourceManager__Class>(type_info, "System.Resources", "ResourceManager");
        }
        inline app::ResourceManager* create() {
            return il2cpp::create_object<app::ResourceManager>(get_class());
        }
    } // namespace ResourceManager
} // namespace app::classes::types
