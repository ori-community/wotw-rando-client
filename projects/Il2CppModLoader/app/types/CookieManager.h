#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CookieManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CookieManager__Class** type_info;
        inline app::CookieManager__Class* get_class() {
            return il2cpp::get_class<app::CookieManager__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CookieManager");
        }
        inline app::CookieManager* create() {
            return il2cpp::create_object<app::CookieManager>(get_class());
        }
    } // namespace CookieManager
} // namespace app::classes::types
