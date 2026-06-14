#pragma once
#include <Modloader/app/structs/RockyEnemyAnimations.h>
#include <Modloader/app/structs/RockyEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyAnimations {
        inline app::RockyEnemyAnimations__Class** type_info() {
            static app::RockyEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyAnimations__Class>(type_info(), "", "RockyEnemyAnimations");
        }
        inline app::RockyEnemyAnimations* create() {
            return il2cpp::create_object<app::RockyEnemyAnimations>(get_class());
        }
    } // namespace RockyEnemyAnimations
} // namespace app::classes::types
