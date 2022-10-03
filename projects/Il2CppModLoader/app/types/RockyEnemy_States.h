#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemy_States__Class** type_info;
        inline app::RockyEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::RockyEnemy_States__Class>(type_info, "", "RockyEnemy", "States");
        }
        inline app::RockyEnemy_States* create() {
            return il2cpp::create_object<app::RockyEnemy_States>(get_class());
        }
    } // namespace RockyEnemy_States
} // namespace app::classes::types
