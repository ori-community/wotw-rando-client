#pragma once
#include <Modloader/app/structs/SpitterEnemyRunBackState.h>
#include <Modloader/app/structs/SpitterEnemyRunBackState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyRunBackState {
        inline app::SpitterEnemyRunBackState__Class** type_info() {
            static app::SpitterEnemyRunBackState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpitterEnemyRunBackState__Class**)(modloader::win::memory::resolve_rva(0x047077E0));
            }
            return cache;
        }
        inline app::SpitterEnemyRunBackState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyRunBackState__Class>(type_info(), "", "SpitterEnemyRunBackState");
        }
        inline app::SpitterEnemyRunBackState* create() {
            return il2cpp::create_object<app::SpitterEnemyRunBackState>(get_class());
        }
    } // namespace SpitterEnemyRunBackState
} // namespace app::classes::types
