#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebResources_c_DisplayClass7_0 {
        inline app::WebResources_c_DisplayClass7_0__Class** type_info = (app::WebResources_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x047793D0));
        inline app::WebResources_c_DisplayClass7_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebResources_c_DisplayClass7_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "WebResources", "<>c__DisplayClass7_0");
        }
        inline app::WebResources_c_DisplayClass7_0* create() {
            return il2cpp::create_object<app::WebResources_c_DisplayClass7_0>(get_class());
        }
    } // namespace WebResources_c_DisplayClass7_0
} // namespace app::classes::types
