#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieManager {
        inline app::CookieManager__Class** type_info = (app::CookieManager__Class**)(modloader::win::memory::resolve_rva(0x0475F190));
        inline app::CookieManager__Class* get_class() {
            return il2cpp::get_class<app::CookieManager__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CookieManager");
        }
        inline app::CookieManager* create() {
            return il2cpp::create_object<app::CookieManager>(get_class());
        }
    } // namespace CookieManager
} // namespace app::classes::types
