#pragma once
#include <Modloader/app/structs/JumperEnemyState.h>
#include <Modloader/app/structs/JumperEnemyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyState {
        inline app::JumperEnemyState__Class** type_info() {
            static app::JumperEnemyState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumperEnemyState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumperEnemyState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyState__Class>(type_info(), "", "JumperEnemyState");
        }
        inline app::JumperEnemyState* create() {
            return il2cpp::create_object<app::JumperEnemyState>(get_class());
        }
    } // namespace JumperEnemyState
} // namespace app::classes::types
