#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_GetCookieFunc__Class.h>
#include <Modloader/app/structs/BrowserNative_GetCookieFunc.h>

namespace app::classes::types {
    namespace BrowserNative_GetCookieFunc {
        inline app::BrowserNative_GetCookieFunc__Class** type_info = (app::BrowserNative_GetCookieFunc__Class**)(modloader::win::memory::resolve_rva(0x04752620));
        inline app::BrowserNative_GetCookieFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_GetCookieFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "GetCookieFunc");
        }
        inline app::BrowserNative_GetCookieFunc* create() {
            return il2cpp::create_object<app::BrowserNative_GetCookieFunc>(get_class());
        }
    } // namespace BrowserNative_GetCookieFunc
} // namespace app::classes::types
