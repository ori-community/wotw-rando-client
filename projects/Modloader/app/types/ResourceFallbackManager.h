#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceFallbackManager {
        inline app::ResourceFallbackManager__Class** type_info = (app::ResourceFallbackManager__Class**)(modloader::win::memory::resolve_rva(0x047624A0));
        inline app::ResourceFallbackManager__Class* get_class() {
            return il2cpp::get_class<app::ResourceFallbackManager__Class>(type_info, "System.Resources", "ResourceFallbackManager");
        }
        inline app::ResourceFallbackManager* create() {
            return il2cpp::create_object<app::ResourceFallbackManager>(get_class());
        }
    } // namespace ResourceFallbackManager
} // namespace app::classes::types
