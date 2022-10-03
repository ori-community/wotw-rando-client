#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCacheManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestCacheManager__Class** type_info;
        inline app::RequestCacheManager__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheManager__Class>(type_info, "System.Net.Cache", "RequestCacheManager");
        }
        inline app::RequestCacheManager* create() {
            return il2cpp::create_object<app::RequestCacheManager>(get_class());
        }
    } // namespace RequestCacheManager
} // namespace app::classes::types
