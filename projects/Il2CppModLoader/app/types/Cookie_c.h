#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cookie_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Cookie_c__Class** type_info;
        inline app::Cookie_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Cookie_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Cookie", "<>c");
        }
        inline app::Cookie_c* create() {
            return il2cpp::create_object<app::Cookie_c>(get_class());
        }
    } // namespace Cookie_c
} // namespace app::classes::types
