#pragma once
#include <Modloader/app/structs/GroundEnemyState.h>
#include <Modloader/app/structs/GroundEnemyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundEnemyState {
        inline app::GroundEnemyState__Class** type_info() {
            static app::GroundEnemyState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundEnemyState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundEnemyState__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemyState__Class>(type_info(), "", "GroundEnemyState");
        }
        inline app::GroundEnemyState* create() {
            return il2cpp::create_object<app::GroundEnemyState>(get_class());
        }
    } // namespace GroundEnemyState
} // namespace app::classes::types
