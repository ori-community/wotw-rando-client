#pragma once
#include <Modloader/app/structs/BrowserNative_NewWindowFunc.h>
#include <Modloader/app/structs/BrowserNative_NewWindowFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_NewWindowFunc {
        inline app::BrowserNative_NewWindowFunc__Class** type_info() {
            static app::BrowserNative_NewWindowFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_NewWindowFunc__Class**)(modloader::win::memory::resolve_rva(0x04707600));
            }
            return cache;
        }
        inline app::BrowserNative_NewWindowFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NewWindowFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NewWindowFunc");
        }
        inline app::BrowserNative_NewWindowFunc* create() {
            return il2cpp::create_object<app::BrowserNative_NewWindowFunc>(get_class());
        }
    } // namespace BrowserNative_NewWindowFunc
} // namespace app::classes::types
