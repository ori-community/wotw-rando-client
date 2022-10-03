#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CacheControlHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CacheControlHeaderValue__Class** type_info;
        inline app::CacheControlHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::CacheControlHeaderValue__Class>(type_info, "System.Net.Http.Headers", "CacheControlHeaderValue");
        }
        inline app::CacheControlHeaderValue* create() {
            return il2cpp::create_object<app::CacheControlHeaderValue>(get_class());
        }
    } // namespace CacheControlHeaderValue
} // namespace app::classes::types
