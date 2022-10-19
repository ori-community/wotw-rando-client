#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_ChangeFunc {
        inline app::BrowserNative_ChangeFunc__Class** type_info = (app::BrowserNative_ChangeFunc__Class**)(modloader::win::memory::resolve_rva(0x04778548));
        inline app::BrowserNative_ChangeFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ChangeFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ChangeFunc");
        }
        inline app::BrowserNative_ChangeFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ChangeFunc>(get_class());
        }
    } // namespace BrowserNative_ChangeFunc
} // namespace app::classes::types
