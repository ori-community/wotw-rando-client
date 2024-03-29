#pragma once
#include <Modloader/app/structs/BrowserNative_MessageFunc.h>
#include <Modloader/app/structs/BrowserNative_MessageFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_MessageFunc {
        inline app::BrowserNative_MessageFunc__Class** type_info() {
            static app::BrowserNative_MessageFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_MessageFunc__Class**)(modloader::win::memory::resolve_rva(0x0477F1B8));
            }
            return cache;
        }
        inline app::BrowserNative_MessageFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_MessageFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "MessageFunc");
        }
        inline app::BrowserNative_MessageFunc* create() {
            return il2cpp::create_object<app::BrowserNative_MessageFunc>(get_class());
        }
    } // namespace BrowserNative_MessageFunc
} // namespace app::classes::types
