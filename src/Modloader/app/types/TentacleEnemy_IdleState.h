#pragma once
#include <Modloader/app/structs/TentacleEnemy_IdleState.h>
#include <Modloader/app/structs/TentacleEnemy_IdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_IdleState {
        inline app::TentacleEnemy_IdleState__Class** type_info() {
            static app::TentacleEnemy_IdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEnemy_IdleState__Class**)(modloader::win::memory::resolve_rva(0x0472A2D0));
            }
            return cache;
        }
        inline app::TentacleEnemy_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_IdleState__Class>(type_info(), "", "TentacleEnemy", "IdleState");
        }
        inline app::TentacleEnemy_IdleState* create() {
            return il2cpp::create_object<app::TentacleEnemy_IdleState>(get_class());
        }
    } // namespace TentacleEnemy_IdleState
} // namespace app::classes::types
