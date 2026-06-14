#pragma once
#include <Modloader/app/structs/RequestCacheManager.h>
#include <Modloader/app/structs/RequestCacheManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestCacheManager {
        inline app::RequestCacheManager__Class** type_info() {
            static app::RequestCacheManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestCacheManager__Class**)(modloader::win::memory::resolve_rva(0x04739250));
            }
            return cache;
        }
        inline app::RequestCacheManager__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheManager__Class>(type_info(), "System.Net.Cache", "RequestCacheManager");
        }
        inline app::RequestCacheManager* create() {
            return il2cpp::create_object<app::RequestCacheManager>(get_class());
        }
    } // namespace RequestCacheManager
} // namespace app::classes::types
