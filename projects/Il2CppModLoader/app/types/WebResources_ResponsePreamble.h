#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebResources_ResponsePreamble {
        inline app::WebResources_ResponsePreamble__Class** type_info = (app::WebResources_ResponsePreamble__Class**)(modloader::win::memory::resolve_rva(0x047260D0));
        inline app::WebResources_ResponsePreamble__Class* get_class() {
            return il2cpp::get_nested_class<app::WebResources_ResponsePreamble__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "WebResources", "ResponsePreamble");
        }
        inline app::WebResources_ResponsePreamble* create() {
            return il2cpp::create_object<app::WebResources_ResponsePreamble>(get_class());
        }
    } // namespace WebResources_ResponsePreamble
} // namespace app::classes::types
