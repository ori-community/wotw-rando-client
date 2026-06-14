#pragma once
#include <Modloader/app/structs/BrowserInputSettings.h>
#include <Modloader/app/structs/BrowserInputSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserInputSettings {
        inline app::BrowserInputSettings__Class** type_info() {
            static app::BrowserInputSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserInputSettings__Class**)(modloader::win::memory::resolve_rva(0x04701A68));
            }
            return cache;
        }
        inline app::BrowserInputSettings__Class* get_class() {
            return il2cpp::get_class<app::BrowserInputSettings__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserInputSettings");
        }
        inline app::BrowserInputSettings* create() {
            return il2cpp::create_object<app::BrowserInputSettings>(get_class());
        }
    } // namespace BrowserInputSettings
} // namespace app::classes::types
