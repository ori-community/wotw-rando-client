#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_ConsoleFunc {
        inline app::BrowserNative_ConsoleFunc__Class** type_info = (app::BrowserNative_ConsoleFunc__Class**)(modloader::win::memory::resolve_rva(0x04786BC8));
        inline app::BrowserNative_ConsoleFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ConsoleFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ConsoleFunc");
        }
        inline app::BrowserNative_ConsoleFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ConsoleFunc>(get_class());
        }
    } // namespace BrowserNative_ConsoleFunc
} // namespace app::classes::types
