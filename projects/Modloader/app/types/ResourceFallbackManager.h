#pragma once
#include <Modloader/app/structs/ResourceFallbackManager.h>
#include <Modloader/app/structs/ResourceFallbackManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceFallbackManager {
        inline app::ResourceFallbackManager__Class** type_info() {
            static app::ResourceFallbackManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResourceFallbackManager__Class**)(modloader::win::memory::resolve_rva(0x047624A0));
            }
            return cache;
        }
        inline app::ResourceFallbackManager__Class* get_class() {
            return il2cpp::get_class<app::ResourceFallbackManager__Class>(type_info(), "System.Resources", "ResourceFallbackManager");
        }
        inline app::ResourceFallbackManager* create() {
            return il2cpp::create_object<app::ResourceFallbackManager>(get_class());
        }
    } // namespace ResourceFallbackManager
} // namespace app::classes::types
