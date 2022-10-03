#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropSlugEnemy_States__Class** type_info;
        inline app::DropSlugEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::DropSlugEnemy_States__Class>(type_info, "", "DropSlugEnemy", "States");
        }
        inline app::DropSlugEnemy_States* create() {
            return il2cpp::create_object<app::DropSlugEnemy_States>(get_class());
        }
    } // namespace DropSlugEnemy_States
} // namespace app::classes::types
