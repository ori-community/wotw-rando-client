#pragma once
#include <Modloader/app/structs/CookieManager_CookieFetch.h>
#include <Modloader/app/structs/CookieManager_CookieFetch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieManager_CookieFetch {
        inline app::CookieManager_CookieFetch__Class** type_info() {
            static app::CookieManager_CookieFetch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CookieManager_CookieFetch__Class**)(modloader::win::memory::resolve_rva(0x0472FBF8));
            }
            return cache;
        }
        inline app::CookieManager_CookieFetch__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieManager_CookieFetch__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "CookieManager", "CookieFetch");
        }
        inline app::CookieManager_CookieFetch* create() {
            return il2cpp::create_object<app::CookieManager_CookieFetch>(get_class());
        }
    } // namespace CookieManager_CookieFetch
} // namespace app::classes::types
