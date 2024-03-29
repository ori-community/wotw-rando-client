#pragma once
#include <Modloader/app/structs/TentacleEnemy_TentacleState.h>
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_TentacleState {
        inline app::TentacleEnemy_TentacleState__Class** type_info() {
            static app::TentacleEnemy_TentacleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEnemy_TentacleState__Class**)(modloader::win::memory::resolve_rva(0x04738C30));
            }
            return cache;
        }
        inline app::TentacleEnemy_TentacleState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_TentacleState__Class>(type_info(), "", "TentacleEnemy", "TentacleState");
        }
        inline app::TentacleEnemy_TentacleState* create() {
            return il2cpp::create_object<app::TentacleEnemy_TentacleState>(get_class());
        }
    } // namespace TentacleEnemy_TentacleState
} // namespace app::classes::types
