#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapUI_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameMapUI_c__Class** type_info;
        inline app::GameMapUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapUI_c__Class>(type_info, "", "GameMapUI", "<>c");
        }
        inline app::GameMapUI_c* create() {
            return il2cpp::create_object<app::GameMapUI_c>(get_class());
        }
    } // namespace GameMapUI_c
} // namespace app::classes::types
