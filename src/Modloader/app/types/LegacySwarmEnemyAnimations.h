#pragma once
#include <Modloader/app/structs/LegacySwarmEnemyAnimations.h>
#include <Modloader/app/structs/LegacySwarmEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyAnimations {
        inline app::LegacySwarmEnemyAnimations__Class** type_info() {
            static app::LegacySwarmEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySwarmEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySwarmEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyAnimations__Class>(type_info(), "", "LegacySwarmEnemyAnimations");
        }
        inline app::LegacySwarmEnemyAnimations* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyAnimations>(get_class());
        }
    } // namespace LegacySwarmEnemyAnimations
} // namespace app::classes::types
