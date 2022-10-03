#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Browser_c_DisplayClass108_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Browser_c_DisplayClass108_1__Class** type_info;
        inline app::Browser_c_DisplayClass108_1__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_c_DisplayClass108_1__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "<>c__DisplayClass108_1");
        }
        inline app::Browser_c_DisplayClass108_1* create() {
            return il2cpp::create_object<app::Browser_c_DisplayClass108_1>(get_class());
        }
    } // namespace Browser_c_DisplayClass108_1
} // namespace app::classes::types
