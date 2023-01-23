#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleEnemy_SpitAttackState__Class.h>
#include <Modloader/app/structs/TentacleEnemy_SpitAttackState.h>

namespace app::classes::types {
    namespace TentacleEnemy_SpitAttackState {
        inline app::TentacleEnemy_SpitAttackState__Class** type_info = (app::TentacleEnemy_SpitAttackState__Class**)(modloader::win::memory::resolve_rva(0x04721E48));
        inline app::TentacleEnemy_SpitAttackState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_SpitAttackState__Class>(type_info, "", "TentacleEnemy", "SpitAttackState");
        }
        inline app::TentacleEnemy_SpitAttackState* create() {
            return il2cpp::create_object<app::TentacleEnemy_SpitAttackState>(get_class());
        }
    } // namespace TentacleEnemy_SpitAttackState
} // namespace app::classes::types
