#pragma once
#include <Modloader/app/structs/TentacleEnemy_LookAtOriState.h>
#include <Modloader/app/structs/TentacleEnemy_LookAtOriState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_LookAtOriState {
        inline app::TentacleEnemy_LookAtOriState__Class** type_info() {
            static app::TentacleEnemy_LookAtOriState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEnemy_LookAtOriState__Class**)(modloader::win::memory::resolve_rva(0x0477B018));
            }
            return cache;
        }
        inline app::TentacleEnemy_LookAtOriState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_LookAtOriState__Class>(type_info(), "", "TentacleEnemy", "LookAtOriState");
        }
        inline app::TentacleEnemy_LookAtOriState* create() {
            return il2cpp::create_object<app::TentacleEnemy_LookAtOriState>(get_class());
        }
    } // namespace TentacleEnemy_LookAtOriState
} // namespace app::classes::types
