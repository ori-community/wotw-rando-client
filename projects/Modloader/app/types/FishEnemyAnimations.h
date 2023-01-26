#pragma once
#include <Modloader/app/structs/FishEnemyAnimations.h>
#include <Modloader/app/structs/FishEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishEnemyAnimations {
        inline app::FishEnemyAnimations__Class** type_info() {
            static app::FishEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::FishEnemyAnimations__Class>(type_info(), "", "FishEnemyAnimations");
        }
        inline app::FishEnemyAnimations* create() {
            return il2cpp::create_object<app::FishEnemyAnimations>(get_class());
        }
    } // namespace FishEnemyAnimations
} // namespace app::classes::types
