#pragma once
#include <Modloader/app/structs/RammingEnemyAnimations.h>
#include <Modloader/app/structs/RammingEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyAnimations {
        inline app::RammingEnemyAnimations__Class** type_info() {
            static app::RammingEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyAnimations__Class>(type_info(), "", "RammingEnemyAnimations");
        }
        inline app::RammingEnemyAnimations* create() {
            return il2cpp::create_object<app::RammingEnemyAnimations>(get_class());
        }
    } // namespace RammingEnemyAnimations
} // namespace app::classes::types
