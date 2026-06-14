#pragma once
#include <Modloader/app/structs/JumperEnemyIdleState.h>
#include <Modloader/app/structs/JumperEnemyIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyIdleState {
        inline app::JumperEnemyIdleState__Class** type_info() {
            static app::JumperEnemyIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemyIdleState__Class**)(modloader::win::memory::resolve_rva(0x047813D0));
            }
            return cache;
        }
        inline app::JumperEnemyIdleState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyIdleState__Class>(type_info(), "", "JumperEnemyIdleState");
        }
        inline app::JumperEnemyIdleState* create() {
            return il2cpp::create_object<app::JumperEnemyIdleState>(get_class());
        }
    } // namespace JumperEnemyIdleState
} // namespace app::classes::types
