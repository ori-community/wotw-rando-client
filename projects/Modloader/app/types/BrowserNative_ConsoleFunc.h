#pragma once
#include <Modloader/app/structs/BrowserNative_ConsoleFunc.h>
#include <Modloader/app/structs/BrowserNative_ConsoleFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ConsoleFunc {
        inline app::BrowserNative_ConsoleFunc__Class** type_info() {
            static app::BrowserNative_ConsoleFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_ConsoleFunc__Class**)(modloader::win::memory::resolve_rva(0x04786BC8));
            }
            return cache;
        }
        inline app::BrowserNative_ConsoleFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ConsoleFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ConsoleFunc");
        }
        inline app::BrowserNative_ConsoleFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ConsoleFunc>(get_class());
        }
    } // namespace BrowserNative_ConsoleFunc
} // namespace app::classes::types
