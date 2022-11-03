#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestCacheManager {
        inline app::RequestCacheManager__Class** type_info = (app::RequestCacheManager__Class**)(modloader::win::memory::resolve_rva(0x04739250));
        inline app::RequestCacheManager__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheManager__Class>(type_info, "System.Net.Cache", "RequestCacheManager");
        }
        inline app::RequestCacheManager* create() {
            return il2cpp::create_object<app::RequestCacheManager>(get_class());
        }
    } // namespace RequestCacheManager
} // namespace app::classes::types
