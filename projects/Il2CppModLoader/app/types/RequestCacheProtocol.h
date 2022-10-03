#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCacheProtocol {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestCacheProtocol__Class** type_info;
        inline app::RequestCacheProtocol__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheProtocol__Class>(type_info, "System.Net.Cache", "RequestCacheProtocol");
        }
        inline app::RequestCacheProtocol* create() {
            return il2cpp::create_object<app::RequestCacheProtocol>(get_class());
        }
    } // namespace RequestCacheProtocol
} // namespace app::classes::types
