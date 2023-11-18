#pragma once
#include <Modloader/app/structs/TentacleEnemy_StuckInGroundState.h>
#include <Modloader/app/structs/TentacleEnemy_StuckInGroundState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_StuckInGroundState {
        inline app::TentacleEnemy_StuckInGroundState__Class** type_info() {
            static app::TentacleEnemy_StuckInGroundState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEnemy_StuckInGroundState__Class**)(modloader::win::memory::resolve_rva(0x047775D8));
            }
            return cache;
        }
        inline app::TentacleEnemy_StuckInGroundState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_StuckInGroundState__Class>(type_info(), "", "TentacleEnemy", "StuckInGroundState");
        }
        inline app::TentacleEnemy_StuckInGroundState* create() {
            return il2cpp::create_object<app::TentacleEnemy_StuckInGroundState>(get_class());
        }
    } // namespace TentacleEnemy_StuckInGroundState
} // namespace app::classes::types
