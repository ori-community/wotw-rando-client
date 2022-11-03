#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserSystemSettings {
        namespace {
            inline app::BrowserSystemSettings__Class* type_info_ref = nullptr;
        }
        inline app::BrowserSystemSettings__Class** type_info = &type_info_ref;
        inline app::BrowserSystemSettings__Class* get_class() {
            return il2cpp::get_class<app::BrowserSystemSettings__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserSystemSettings");
        }
        inline app::BrowserSystemSettings* create() {
            return il2cpp::create_object<app::BrowserSystemSettings>(get_class());
        }
    } // namespace BrowserSystemSettings
} // namespace app::classes::types
