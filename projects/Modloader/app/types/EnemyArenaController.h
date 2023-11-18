#pragma once
#include <Modloader/app/structs/EnemyArenaController.h>
#include <Modloader/app/structs/EnemyArenaController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController {
        inline app::EnemyArenaController__Class** type_info() {
            static app::EnemyArenaController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyArenaController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyArenaController__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaController__Class>(type_info(), "", "EnemyArenaController");
        }
        inline app::EnemyArenaController* create() {
            return il2cpp::create_object<app::EnemyArenaController>(get_class());
        }
    } // namespace EnemyArenaController
} // namespace app::classes::types
