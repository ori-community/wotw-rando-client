#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumperEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumperEnemy_States__Class** type_info;
        inline app::JumperEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::JumperEnemy_States__Class>(type_info, "", "JumperEnemy", "States");
        }
        inline app::JumperEnemy_States* create() {
            return il2cpp::create_object<app::JumperEnemy_States>(get_class());
        }
    } // namespace JumperEnemy_States
} // namespace app::classes::types
