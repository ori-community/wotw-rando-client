#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlEnemy_States__Class** type_info;
        inline app::DashOwlEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemy_States__Class>(type_info, "", "DashOwlEnemy", "States");
        }
        inline app::DashOwlEnemy_States* create() {
            return il2cpp::create_object<app::DashOwlEnemy_States>(get_class());
        }
    } // namespace DashOwlEnemy_States
} // namespace app::classes::types
