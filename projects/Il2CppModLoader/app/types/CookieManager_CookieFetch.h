#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieManager_CookieFetch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CookieManager_CookieFetch__Class** type_info;
        inline app::CookieManager_CookieFetch__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieManager_CookieFetch__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CookieManager", "CookieFetch");
        }
        inline app::CookieManager_CookieFetch* create() {
            return il2cpp::create_object<app::CookieManager_CookieFetch>(get_class());
        }
    } // namespace CookieManager_CookieFetch
} // namespace app::classes::types
