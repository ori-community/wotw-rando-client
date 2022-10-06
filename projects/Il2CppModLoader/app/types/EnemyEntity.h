#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyEntity__Class** type_info;
        inline app::EnemyEntity__Class* get_class() {
            return il2cpp::get_class<app::EnemyEntity__Class>(type_info, "Moon", "EnemyEntity");
        }
        inline app::EnemyEntity* create() {
            return il2cpp::create_object<app::EnemyEntity>(get_class());
        }
        inline app::EnemyEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyEntity__Array>(get_class(), size);
        }
        inline app::EnemyEntity__Array* create_array(const std::vector<app::EnemyEntity*>& items) {
            return il2cpp::array_new<app::EnemyEntity__Array>(get_class(), items);
        }
    } // namespace EnemyEntity
} // namespace app::classes::types
