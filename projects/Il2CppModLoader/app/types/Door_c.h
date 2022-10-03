#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Door_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Door_c__Class** type_info;
        inline app::Door_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Door_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Door", "<>c");
        }
        inline app::Door_c* create() {
            return il2cpp::create_object<app::Door_c>(get_class());
        }
    } // namespace Door_c
} // namespace app::classes::types
