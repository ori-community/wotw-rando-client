#pragma once
#include <Modloader/app/structs/BrowserNative_WindowCallbackFunc.h>
#include <Modloader/app/structs/BrowserNative_WindowCallbackFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_WindowCallbackFunc {
        inline app::BrowserNative_WindowCallbackFunc__Class** type_info() {
            static app::BrowserNative_WindowCallbackFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrowserNative_WindowCallbackFunc__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrowserNative_WindowCallbackFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_WindowCallbackFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "WindowCallbackFunc");
        }
        inline app::BrowserNative_WindowCallbackFunc* create() {
            return il2cpp::create_object<app::BrowserNative_WindowCallbackFunc>(get_class());
        }
    } // namespace BrowserNative_WindowCallbackFunc
} // namespace app::classes::types
