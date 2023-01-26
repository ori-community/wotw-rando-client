#pragma once
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_tick.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_tick__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_tick {
        inline app::BrowserNative_Calltype_zfb_tick__Class** type_info() {
            static app::BrowserNative_Calltype_zfb_tick__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrowserNative_Calltype_zfb_tick__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrowserNative_Calltype_zfb_tick__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_tick__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_tick");
        }
        inline app::BrowserNative_Calltype_zfb_tick* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_tick>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_tick
} // namespace app::classes::types
