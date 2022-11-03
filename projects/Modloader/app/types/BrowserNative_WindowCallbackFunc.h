#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_WindowCallbackFunc {
        namespace {
            inline app::BrowserNative_WindowCallbackFunc__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_WindowCallbackFunc__Class** type_info = &type_info_ref;
        inline app::BrowserNative_WindowCallbackFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_WindowCallbackFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "WindowCallbackFunc");
        }
        inline app::BrowserNative_WindowCallbackFunc* create() {
            return il2cpp::create_object<app::BrowserNative_WindowCallbackFunc>(get_class());
        }
    } // namespace BrowserNative_WindowCallbackFunc
} // namespace app::classes::types
