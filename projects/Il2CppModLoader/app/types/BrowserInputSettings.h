#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserInputSettings {
        inline app::BrowserInputSettings__Class** type_info = (app::BrowserInputSettings__Class**)(modloader::win::memory::resolve_rva(0x04701A68));
        inline app::BrowserInputSettings__Class* get_class() {
            return il2cpp::get_class<app::BrowserInputSettings__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserInputSettings");
        }
        inline app::BrowserInputSettings* create() {
            return il2cpp::create_object<app::BrowserInputSettings>(get_class());
        }
    } // namespace BrowserInputSettings
} // namespace app::classes::types
