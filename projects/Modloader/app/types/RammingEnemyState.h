#pragma once
#include <Modloader/app/structs/RammingEnemyState.h>
#include <Modloader/app/structs/RammingEnemyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingEnemyState {
        inline app::RammingEnemyState__Class** type_info() {
            static app::RammingEnemyState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingEnemyState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingEnemyState__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyState__Class>(type_info(), "", "RammingEnemyState");
        }
        inline app::RammingEnemyState* create() {
            return il2cpp::create_object<app::RammingEnemyState>(get_class());
        }
    } // namespace RammingEnemyState
} // namespace app::classes::types
