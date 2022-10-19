#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyEntity__Array {
        namespace {
            inline app::EnemyEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::EnemyEntity__Array__Class** type_info = &type_info_ref;
        inline app::EnemyEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyEntity__Array__Class>(type_info, "Moon", "EnemyEntity[]");
        }
        inline app::EnemyEntity__Array* create() {
            return il2cpp::create_object<app::EnemyEntity__Array>(get_class());
        }
    } // namespace EnemyEntity__Array
} // namespace app::classes::types
