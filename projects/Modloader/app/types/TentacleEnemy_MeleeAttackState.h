#pragma once
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState.h>
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_MeleeAttackState {
        inline app::TentacleEnemy_MeleeAttackState__Class** type_info() {
            static app::TentacleEnemy_MeleeAttackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEnemy_MeleeAttackState__Class**)(modloader::win::memory::resolve_rva(0x04777E10));
            }
            return cache;
        }
        inline app::TentacleEnemy_MeleeAttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_MeleeAttackState__Class>(type_info(), "", "TentacleEnemy", "MeleeAttackState");
        }
        inline app::TentacleEnemy_MeleeAttackState* create() {
            return il2cpp::create_object<app::TentacleEnemy_MeleeAttackState>(get_class());
        }
    } // namespace TentacleEnemy_MeleeAttackState
} // namespace app::classes::types
