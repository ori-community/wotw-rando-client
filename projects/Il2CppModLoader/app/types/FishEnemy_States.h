#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishEnemy_States__Class** type_info;
        inline app::FishEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FishEnemy_States__Class>(type_info, "", "FishEnemy", "States");
        }
        inline app::FishEnemy_States* create() {
            return il2cpp::create_object<app::FishEnemy_States>(get_class());
        }
    } // namespace FishEnemy_States
} // namespace app::classes::types
