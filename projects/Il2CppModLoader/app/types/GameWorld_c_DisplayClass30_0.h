#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameWorld_c_DisplayClass30_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameWorld_c_DisplayClass30_0__Class** type_info;
        inline app::GameWorld_c_DisplayClass30_0__Class* get_class() {
            return il2cpp::get_nested_class<app::GameWorld_c_DisplayClass30_0__Class>(type_info, "", "GameWorld", "<>c__DisplayClass30_0");
        }
        inline app::GameWorld_c_DisplayClass30_0* create() {
            return il2cpp::create_object<app::GameWorld_c_DisplayClass30_0>(get_class());
        }
    } // namespace GameWorld_c_DisplayClass30_0
} // namespace app::classes::types
