#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_ZFBSettings {
        inline app::BrowserNative_ZFBSettings__Class** type_info = (app::BrowserNative_ZFBSettings__Class**)(modloader::win::memory::resolve_rva(0x04732080));
        inline app::BrowserNative_ZFBSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ZFBSettings__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ZFBSettings");
        }
        inline app::BrowserNative_ZFBSettings* create() {
            return il2cpp::create_object<app::BrowserNative_ZFBSettings>(get_class());
        }
        inline app::BrowserNative_ZFBSettings__Boxed* box(app::BrowserNative_ZFBSettings value) {
            return il2cpp::box_value<app::BrowserNative_ZFBSettings__Boxed>(get_class(), value);
        }
    } // namespace BrowserNative_ZFBSettings
} // namespace app::classes::types
