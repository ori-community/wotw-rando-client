#pragma once
#include <Modloader/app/structs/DeadBatEnemy.h>
#include <Modloader/app/structs/DeadBatEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeadBatEnemy {
        inline app::DeadBatEnemy__Class** type_info() {
            static app::DeadBatEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeadBatEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeadBatEnemy__Class* get_class() {
            return il2cpp::get_class<app::DeadBatEnemy__Class>(type_info(), "", "DeadBatEnemy");
        }
        inline app::DeadBatEnemy* create() {
            return il2cpp::create_object<app::DeadBatEnemy>(get_class());
        }
    } // namespace DeadBatEnemy
} // namespace app::classes::types
