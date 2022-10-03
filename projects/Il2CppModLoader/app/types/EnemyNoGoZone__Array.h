#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyNoGoZone__Array {
        namespace {
            app::EnemyNoGoZone__Array__Class* type_info_ref = nullptr;
        }
        app::EnemyNoGoZone__Array__Class** type_info = &type_info_ref;
        inline app::EnemyNoGoZone__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyNoGoZone__Array__Class>(type_info, "", "EnemyNoGoZone[]");
        }
        inline app::EnemyNoGoZone__Array* create() {
            return il2cpp::create_object<app::EnemyNoGoZone__Array>(get_class());
        }
    } // namespace EnemyNoGoZone__Array
} // namespace app::classes::types
