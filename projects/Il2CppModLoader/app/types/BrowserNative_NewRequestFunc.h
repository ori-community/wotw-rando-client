#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_NewRequestFunc {
        inline app::BrowserNative_NewRequestFunc__Class** type_info = (app::BrowserNative_NewRequestFunc__Class**)(modloader::win::memory::resolve_rva(0x0476F940));
        inline app::BrowserNative_NewRequestFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NewRequestFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NewRequestFunc");
        }
        inline app::BrowserNative_NewRequestFunc* create() {
            return il2cpp::create_object<app::BrowserNative_NewRequestFunc>(get_class());
        }
    } // namespace BrowserNative_NewRequestFunc
} // namespace app::classes::types
