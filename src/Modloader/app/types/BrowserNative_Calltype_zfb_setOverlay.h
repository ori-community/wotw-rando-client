#pragma once
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setOverlay.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setOverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_setOverlay {
        inline app::BrowserNative_Calltype_zfb_setOverlay__Class** type_info() {
            static app::BrowserNative_Calltype_zfb_setOverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrowserNative_Calltype_zfb_setOverlay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrowserNative_Calltype_zfb_setOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_setOverlay__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_setOverlay");
        }
        inline app::BrowserNative_Calltype_zfb_setOverlay* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_setOverlay>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_setOverlay
} // namespace app::classes::types
