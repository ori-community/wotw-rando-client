#pragma once
#include <Modloader/app/structs/BrowserSystemSettings.h>
#include <Modloader/app/structs/BrowserSystemSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserSystemSettings {
        inline app::BrowserSystemSettings__Class** type_info() {
            static app::BrowserSystemSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrowserSystemSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrowserSystemSettings__Class* get_class() {
            return il2cpp::get_class<app::BrowserSystemSettings__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserSystemSettings");
        }
        inline app::BrowserSystemSettings* create() {
            return il2cpp::create_object<app::BrowserSystemSettings>(get_class());
        }
    } // namespace BrowserSystemSettings
} // namespace app::classes::types
