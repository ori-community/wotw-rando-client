#pragma once
#include <Modloader/app/structs/EnemyDoorLogic.h>
#include <Modloader/app/structs/EnemyDoorLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyDoorLogic {
        inline app::EnemyDoorLogic__Class** type_info() {
            static app::EnemyDoorLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyDoorLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyDoorLogic__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorLogic__Class>(type_info(), "", "EnemyDoorLogic");
        }
        inline app::EnemyDoorLogic* create() {
            return il2cpp::create_object<app::EnemyDoorLogic>(get_class());
        }
    } // namespace EnemyDoorLogic
} // namespace app::classes::types
