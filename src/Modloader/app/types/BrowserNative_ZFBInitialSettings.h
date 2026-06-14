#pragma once
#include <Modloader/app/structs/BrowserNative_ZFBInitialSettings.h>
#include <Modloader/app/structs/BrowserNative_ZFBInitialSettings__Boxed.h>
#include <Modloader/app/structs/BrowserNative_ZFBInitialSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ZFBInitialSettings {
        inline app::BrowserNative_ZFBInitialSettings__Class** type_info() {
            static app::BrowserNative_ZFBInitialSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_ZFBInitialSettings__Class**)(modloader::win::memory::resolve_rva(0x04738A98));
            }
            return cache;
        }
        inline app::BrowserNative_ZFBInitialSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ZFBInitialSettings__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ZFBInitialSettings");
        }
        inline app::BrowserNative_ZFBInitialSettings* create() {
            return il2cpp::create_object<app::BrowserNative_ZFBInitialSettings>(get_class());
        }
        inline app::BrowserNative_ZFBInitialSettings__Boxed* box(app::BrowserNative_ZFBInitialSettings value) {
            return il2cpp::box_value<app::BrowserNative_ZFBInitialSettings__Boxed>(get_class(), value);
        }
    } // namespace BrowserNative_ZFBInitialSettings
} // namespace app::classes::types
