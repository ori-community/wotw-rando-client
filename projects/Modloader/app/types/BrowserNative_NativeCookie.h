#pragma once
#include <Modloader/app/structs/BrowserNative_NativeCookie.h>
#include <Modloader/app/structs/BrowserNative_NativeCookie__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_NativeCookie {
        inline app::BrowserNative_NativeCookie__Class** type_info() {
            static app::BrowserNative_NativeCookie__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_NativeCookie__Class**)(modloader::win::memory::resolve_rva(0x04756EC0));
            }
            return cache;
        }
        inline app::BrowserNative_NativeCookie__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NativeCookie__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NativeCookie");
        }
        inline app::BrowserNative_NativeCookie* create() {
            return il2cpp::create_object<app::BrowserNative_NativeCookie>(get_class());
        }
    } // namespace BrowserNative_NativeCookie
} // namespace app::classes::types
