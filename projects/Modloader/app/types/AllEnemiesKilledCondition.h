#pragma once
#include <Modloader/app/structs/AllEnemiesKilledCondition.h>
#include <Modloader/app/structs/AllEnemiesKilledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllEnemiesKilledCondition {
        inline app::AllEnemiesKilledCondition__Class** type_info() {
            static app::AllEnemiesKilledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AllEnemiesKilledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AllEnemiesKilledCondition__Class* get_class() {
            return il2cpp::get_class<app::AllEnemiesKilledCondition__Class>(type_info(), "", "AllEnemiesKilledCondition");
        }
        inline app::AllEnemiesKilledCondition* create() {
            return il2cpp::create_object<app::AllEnemiesKilledCondition>(get_class());
        }
    } // namespace AllEnemiesKilledCondition
} // namespace app::classes::types
