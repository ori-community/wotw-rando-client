#pragma once
#include <Modloader/app/structs/TentacleEnemy_HoldingOriState.h>
#include <Modloader/app/structs/TentacleEnemy_HoldingOriState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_HoldingOriState {
        inline app::TentacleEnemy_HoldingOriState__Class** type_info() {
            static app::TentacleEnemy_HoldingOriState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEnemy_HoldingOriState__Class**)(modloader::win::memory::resolve_rva(0x04732CE0));
            }
            return cache;
        }
        inline app::TentacleEnemy_HoldingOriState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_HoldingOriState__Class>(type_info(), "", "TentacleEnemy", "HoldingOriState");
        }
        inline app::TentacleEnemy_HoldingOriState* create() {
            return il2cpp::create_object<app::TentacleEnemy_HoldingOriState>(get_class());
        }
    } // namespace TentacleEnemy_HoldingOriState
} // namespace app::classes::types
