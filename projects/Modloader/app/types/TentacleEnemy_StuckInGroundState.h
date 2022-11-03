#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_StuckInGroundState {
        inline app::TentacleEnemy_StuckInGroundState__Class** type_info = (app::TentacleEnemy_StuckInGroundState__Class**)(modloader::win::memory::resolve_rva(0x047775D8));
        inline app::TentacleEnemy_StuckInGroundState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_StuckInGroundState__Class>(type_info, "", "TentacleEnemy", "StuckInGroundState");
        }
        inline app::TentacleEnemy_StuckInGroundState* create() {
            return il2cpp::create_object<app::TentacleEnemy_StuckInGroundState>(get_class());
        }
    } // namespace TentacleEnemy_StuckInGroundState
} // namespace app::classes::types
