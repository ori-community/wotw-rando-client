#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyArenaController_ConditionGuidType {
        namespace {
            inline app::EnemyArenaController_ConditionGuidType__Class* type_info_ref = nullptr;
        }
        inline app::EnemyArenaController_ConditionGuidType__Class** type_info = &type_info_ref;
        inline app::EnemyArenaController_ConditionGuidType__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyArenaController_ConditionGuidType__Class>(type_info, "", "EnemyArenaController", "ConditionGuidType");
        }
        inline app::EnemyArenaController_ConditionGuidType* create() {
            return il2cpp::create_object<app::EnemyArenaController_ConditionGuidType>(get_class());
        }
    } // namespace EnemyArenaController_ConditionGuidType
} // namespace app::classes::types
