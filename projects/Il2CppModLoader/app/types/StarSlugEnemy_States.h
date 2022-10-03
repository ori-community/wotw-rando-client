#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StarSlugEnemy_States__Class** type_info;
        inline app::StarSlugEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::StarSlugEnemy_States__Class>(type_info, "", "StarSlugEnemy", "States");
        }
        inline app::StarSlugEnemy_States* create() {
            return il2cpp::create_object<app::StarSlugEnemy_States>(get_class());
        }
    } // namespace StarSlugEnemy_States
} // namespace app::classes::types
