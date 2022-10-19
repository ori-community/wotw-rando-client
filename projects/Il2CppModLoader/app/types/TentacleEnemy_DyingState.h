#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_DyingState {
        inline app::TentacleEnemy_DyingState__Class** type_info = (app::TentacleEnemy_DyingState__Class**)(modloader::win::memory::resolve_rva(0x047202C8));
        inline app::TentacleEnemy_DyingState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_DyingState__Class>(type_info, "", "TentacleEnemy", "DyingState");
        }
        inline app::TentacleEnemy_DyingState* create() {
            return il2cpp::create_object<app::TentacleEnemy_DyingState>(get_class());
        }
    } // namespace TentacleEnemy_DyingState
} // namespace app::classes::types
