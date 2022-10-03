#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Browser_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Browser_c__Class** type_info;
        inline app::Browser_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "<>c");
        }
        inline app::Browser_c* create() {
            return il2cpp::create_object<app::Browser_c>(get_class());
        }
    } // namespace Browser_c
} // namespace app::classes::types
