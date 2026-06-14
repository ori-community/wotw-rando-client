#pragma once
#include <Modloader/app/structs/MortarWormEnemyAnimations.h>
#include <Modloader/app/structs/MortarWormEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemyAnimations {
        inline app::MortarWormEnemyAnimations__Class** type_info() {
            static app::MortarWormEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWormEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWormEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::MortarWormEnemyAnimations__Class>(type_info(), "", "MortarWormEnemyAnimations");
        }
        inline app::MortarWormEnemyAnimations* create() {
            return il2cpp::create_object<app::MortarWormEnemyAnimations>(get_class());
        }
    } // namespace MortarWormEnemyAnimations
} // namespace app::classes::types
