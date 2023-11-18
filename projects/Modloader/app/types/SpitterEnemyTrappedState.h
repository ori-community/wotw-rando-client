#pragma once
#include <Modloader/app/structs/SpitterEnemyTrappedState.h>
#include <Modloader/app/structs/SpitterEnemyTrappedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyTrappedState {
        inline app::SpitterEnemyTrappedState__Class** type_info() {
            static app::SpitterEnemyTrappedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemyTrappedState__Class**)(modloader::win::memory::resolve_rva(0x04768F28));
            }
            return cache;
        }
        inline app::SpitterEnemyTrappedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyTrappedState__Class>(type_info(), "", "SpitterEnemyTrappedState");
        }
        inline app::SpitterEnemyTrappedState* create() {
            return il2cpp::create_object<app::SpitterEnemyTrappedState>(get_class());
        }
    } // namespace SpitterEnemyTrappedState
} // namespace app::classes::types
