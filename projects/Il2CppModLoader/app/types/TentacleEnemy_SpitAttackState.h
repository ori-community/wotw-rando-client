#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
