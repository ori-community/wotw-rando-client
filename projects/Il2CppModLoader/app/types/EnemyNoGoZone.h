#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyNoGoZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyNoGoZone__Class** type_info;
        inline app::EnemyNoGoZone__Class* get_class() {
            return il2cpp::get_class<app::EnemyNoGoZone__Class>(type_info, "", "EnemyNoGoZone");
        }
        inline app::EnemyNoGoZone* create() {
            return il2cpp::create_object<app::EnemyNoGoZone>(get_class());
        }
        inline app::EnemyNoGoZone__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyNoGoZone__Array>(get_class(), size);
        }
    } // namespace EnemyNoGoZone
} // namespace app::classes::types
