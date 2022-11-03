#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieManager_c_DisplayClass5_0 {
        inline app::CookieManager_c_DisplayClass5_0__Class** type_info = (app::CookieManager_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0477EE90));
        inline app::CookieManager_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CookieManager_c_DisplayClass5_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "CookieManager", "<>c__DisplayClass5_0");
        }
        inline app::CookieManager_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::CookieManager_c_DisplayClass5_0>(get_class());
        }
    } // namespace CookieManager_c_DisplayClass5_0
} // namespace app::classes::types
