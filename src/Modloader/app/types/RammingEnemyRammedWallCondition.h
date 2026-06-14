#pragma once
#include <Modloader/app/structs/RammingEnemyRammedWallCondition.h>
#include <Modloader/app/structs/RammingEnemyRammedWallCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyRammedWallCondition {
        inline app::RammingEnemyRammedWallCondition__Class** type_info() {
            static app::RammingEnemyRammedWallCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingEnemyRammedWallCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingEnemyRammedWallCondition__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyRammedWallCondition__Class>(type_info(), "", "RammingEnemyRammedWallCondition");
        }
        inline app::RammingEnemyRammedWallCondition* create() {
            return il2cpp::create_object<app::RammingEnemyRammedWallCondition>(get_class());
        }
    } // namespace RammingEnemyRammedWallCondition
} // namespace app::classes::types
