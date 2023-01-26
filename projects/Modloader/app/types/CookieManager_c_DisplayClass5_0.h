#pragma once
#include <Modloader/app/structs/CookieManager_c_DisplayClass5_0.h>
#include <Modloader/app/structs/CookieManager_c_DisplayClass5_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieManager_c_DisplayClass5_0 {
        inline app::CookieManager_c_DisplayClass5_0__Class** type_info() {
            static app::CookieManager_c_DisplayClass5_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CookieManager_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0477EE90));
            }
            return cache;
        }
        inline app::CookieManager_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieManager_c_DisplayClass5_0__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "CookieManager", "<>c__DisplayClass5_0");
        }
        inline app::CookieManager_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::CookieManager_c_DisplayClass5_0>(get_class());
        }
    } // namespace CookieManager_c_DisplayClass5_0
} // namespace app::classes::types
