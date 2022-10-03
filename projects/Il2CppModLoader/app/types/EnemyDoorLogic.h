#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyDoorLogic {
        namespace {
            app::EnemyDoorLogic__Class* type_info_ref = nullptr;
        }
        app::EnemyDoorLogic__Class** type_info = &type_info_ref;
        inline app::EnemyDoorLogic__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorLogic__Class>(type_info, "", "EnemyDoorLogic");
        }
        inline app::EnemyDoorLogic* create() {
            return il2cpp::create_object<app::EnemyDoorLogic>(get_class());
        }
    } // namespace EnemyDoorLogic
} // namespace app::classes::types
