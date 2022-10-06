#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyZone__Class** type_info;
        inline app::EnemyZone__Class* get_class() {
            return il2cpp::get_class<app::EnemyZone__Class>(type_info, "", "EnemyZone");
        }
        inline app::EnemyZone* create() {
            return il2cpp::create_object<app::EnemyZone>(get_class());
        }
        inline app::EnemyZone__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyZone__Array>(get_class(), size);
        }
        inline app::EnemyZone__Array* create_array(const std::vector<app::EnemyZone*>& items) {
            return il2cpp::array_new<app::EnemyZone__Array>(get_class(), items);
        }
    } // namespace EnemyZone
} // namespace app::classes::types
