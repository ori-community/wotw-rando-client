#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemy_States__Class** type_info;
        inline app::SpitterEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SpitterEnemy_States__Class>(type_info, "", "SpitterEnemy", "States");
        }
        inline app::SpitterEnemy_States* create() {
            return il2cpp::create_object<app::SpitterEnemy_States>(get_class());
        }
    } // namespace SpitterEnemy_States
} // namespace app::classes::types
