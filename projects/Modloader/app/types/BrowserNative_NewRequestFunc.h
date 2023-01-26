#pragma once
#include <Modloader/app/structs/BrowserNative_NewRequestFunc.h>
#include <Modloader/app/structs/BrowserNative_NewRequestFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_NewRequestFunc {
        inline app::BrowserNative_NewRequestFunc__Class** type_info() {
            static app::BrowserNative_NewRequestFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_NewRequestFunc__Class**)(modloader::win::memory::resolve_rva(0x0476F940));
            }
            return cache;
        }
        inline app::BrowserNative_NewRequestFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NewRequestFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NewRequestFunc");
        }
        inline app::BrowserNative_NewRequestFunc* create() {
            return il2cpp::create_object<app::BrowserNative_NewRequestFunc>(get_class());
        }
    } // namespace BrowserNative_NewRequestFunc
} // namespace app::classes::types
