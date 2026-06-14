#pragma once
#include <Modloader/app/structs/SpitterEnemyState.h>
#include <Modloader/app/structs/SpitterEnemyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyState {
        inline app::SpitterEnemyState__Class** type_info() {
            static app::SpitterEnemyState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpitterEnemyState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpitterEnemyState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyState__Class>(type_info(), "", "SpitterEnemyState");
        }
        inline app::SpitterEnemyState* create() {
            return il2cpp::create_object<app::SpitterEnemyState>(get_class());
        }
    } // namespace SpitterEnemyState
} // namespace app::classes::types
