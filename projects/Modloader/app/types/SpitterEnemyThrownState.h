#pragma once
#include <Modloader/app/structs/SpitterEnemyThrownState.h>
#include <Modloader/app/structs/SpitterEnemyThrownState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyThrownState {
        inline app::SpitterEnemyThrownState__Class** type_info() {
            static app::SpitterEnemyThrownState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemyThrownState__Class**)(modloader::win::memory::resolve_rva(0x04748160));
            }
            return cache;
        }
        inline app::SpitterEnemyThrownState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyThrownState__Class>(type_info(), "", "SpitterEnemyThrownState");
        }
        inline app::SpitterEnemyThrownState* create() {
            return il2cpp::create_object<app::SpitterEnemyThrownState>(get_class());
        }
    } // namespace SpitterEnemyThrownState
} // namespace app::classes::types
