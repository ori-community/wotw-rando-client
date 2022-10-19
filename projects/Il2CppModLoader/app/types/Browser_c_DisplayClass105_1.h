#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Browser_c_DisplayClass105_1 {
        inline app::Browser_c_DisplayClass105_1__Class** type_info = (app::Browser_c_DisplayClass105_1__Class**)(modloader::win::memory::resolve_rva(0x047632F0));
        inline app::Browser_c_DisplayClass105_1__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_c_DisplayClass105_1__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "<>c__DisplayClass105_1");
        }
        inline app::Browser_c_DisplayClass105_1* create() {
            return il2cpp::create_object<app::Browser_c_DisplayClass105_1>(get_class());
        }
    } // namespace Browser_c_DisplayClass105_1
} // namespace app::classes::types
