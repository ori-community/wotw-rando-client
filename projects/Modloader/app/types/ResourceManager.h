#pragma once
#include <Modloader/app/structs/ResourceManager.h>
#include <Modloader/app/structs/ResourceManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceManager {
        inline app::ResourceManager__Class** type_info() {
            static app::ResourceManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResourceManager__Class**)(modloader::win::memory::resolve_rva(0x047439E8));
            }
            return cache;
        }
        inline app::ResourceManager__Class* get_class() {
            return il2cpp::get_class<app::ResourceManager__Class>(type_info(), "System.Resources", "ResourceManager");
        }
        inline app::ResourceManager* create() {
            return il2cpp::create_object<app::ResourceManager>(get_class());
        }
    } // namespace ResourceManager
} // namespace app::classes::types
