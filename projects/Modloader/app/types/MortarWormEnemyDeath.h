#pragma once
#include <Modloader/app/structs/MortarWormEnemyDeath.h>
#include <Modloader/app/structs/MortarWormEnemyDeath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemyDeath {
        inline app::MortarWormEnemyDeath__Class** type_info() {
            static app::MortarWormEnemyDeath__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWormEnemyDeath__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWormEnemyDeath__Class* get_class() {
            return il2cpp::get_class<app::MortarWormEnemyDeath__Class>(type_info(), "", "MortarWormEnemyDeath");
        }
        inline app::MortarWormEnemyDeath* create() {
            return il2cpp::create_object<app::MortarWormEnemyDeath>(get_class());
        }
    } // namespace MortarWormEnemyDeath
} // namespace app::classes::types
