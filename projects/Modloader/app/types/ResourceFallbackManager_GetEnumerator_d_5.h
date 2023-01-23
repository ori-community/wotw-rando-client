#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ResourceFallbackManager_GetEnumerator_d_5__Class.h>
#include <Modloader/app/structs/ResourceFallbackManager_GetEnumerator_d_5.h>

namespace app::classes::types {
    namespace ResourceFallbackManager_GetEnumerator_d_5 {
        inline app::ResourceFallbackManager_GetEnumerator_d_5__Class** type_info = (app::ResourceFallbackManager_GetEnumerator_d_5__Class**)(modloader::win::memory::resolve_rva(0x04701A50));
        inline app::ResourceFallbackManager_GetEnumerator_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceFallbackManager_GetEnumerator_d_5__Class>(type_info, "System.Resources", "ResourceFallbackManager", "<GetEnumerator>d__5");
        }
        inline app::ResourceFallbackManager_GetEnumerator_d_5* create() {
            return il2cpp::create_object<app::ResourceFallbackManager_GetEnumerator_d_5>(get_class());
        }
    } // namespace ResourceFallbackManager_GetEnumerator_d_5
} // namespace app::classes::types
