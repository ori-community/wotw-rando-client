#pragma once
#include <Modloader/app/structs/EnemyArenaController_ConditionGuidType.h>
#include <Modloader/app/structs/EnemyArenaController_ConditionGuidType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaController_ConditionGuidType {
        inline app::EnemyArenaController_ConditionGuidType__Class** type_info() {
            static app::EnemyArenaController_ConditionGuidType__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyArenaController_ConditionGuidType__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyArenaController_ConditionGuidType__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaController_ConditionGuidType__Class>(type_info(), "", "EnemyArenaController", "ConditionGuidType");
        }
        inline app::EnemyArenaController_ConditionGuidType* create() {
            return il2cpp::create_object<app::EnemyArenaController_ConditionGuidType>(get_class());
        }
    } // namespace EnemyArenaController_ConditionGuidType
} // namespace app::classes::types
