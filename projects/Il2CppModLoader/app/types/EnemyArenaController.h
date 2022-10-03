#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController {
        namespace {
            app::EnemyArenaController__Class* type_info_ref = nullptr;
        }
        app::EnemyArenaController__Class** type_info = &type_info_ref;
        inline app::EnemyArenaController__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaController__Class>(type_info, "", "EnemyArenaController");
        }
        inline app::EnemyArenaController* create() {
            return il2cpp::create_object<app::EnemyArenaController>(get_class());
        }
    } // namespace EnemyArenaController
} // namespace app::classes::types
