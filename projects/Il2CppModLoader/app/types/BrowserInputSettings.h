#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserInputSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserInputSettings__Class** type_info;
        inline app::BrowserInputSettings__Class* get_class() {
            return il2cpp::get_class<app::BrowserInputSettings__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserInputSettings");
        }
        inline app::BrowserInputSettings* create() {
            return il2cpp::create_object<app::BrowserInputSettings>(get_class());
        }
    } // namespace BrowserInputSettings
} // namespace app::classes::types
