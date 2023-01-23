#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState_AttackType__Enum__Class.h>
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState_AttackType__Enum.h>

namespace app::classes::types {
    namespace TentacleEnemy_MeleeAttackState_AttackType__Enum {
        namespace {
            inline app::TentacleEnemy_MeleeAttackState_AttackType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TentacleEnemy_MeleeAttackState_AttackType__Enum__Class** type_info = &type_info_ref;
        inline app::TentacleEnemy_MeleeAttackState_AttackType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_MeleeAttackState_AttackType__Enum__Class>(type_info, "", "TentacleEnemy+MeleeAttackState", "AttackType");
        }
        inline app::TentacleEnemy_MeleeAttackState_AttackType__Enum* create() {
            return il2cpp::create_object<app::TentacleEnemy_MeleeAttackState_AttackType__Enum>(get_class());
        }
    } // namespace TentacleEnemy_MeleeAttackState_AttackType__Enum
} // namespace app::classes::types
