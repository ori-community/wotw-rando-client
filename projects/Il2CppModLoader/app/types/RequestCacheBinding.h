#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCacheBinding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestCacheBinding__Class** type_info;
        inline app::RequestCacheBinding__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheBinding__Class>(type_info, "System.Net.Cache", "RequestCacheBinding");
        }
        inline app::RequestCacheBinding* create() {
            return il2cpp::create_object<app::RequestCacheBinding>(get_class());
        }
    } // namespace RequestCacheBinding
} // namespace app::classes::types
