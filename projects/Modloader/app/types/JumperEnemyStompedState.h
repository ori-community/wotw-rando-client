#pragma once
#include <Modloader/app/structs/JumperEnemyStompedState.h>
#include <Modloader/app/structs/JumperEnemyStompedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyStompedState {
        inline app::JumperEnemyStompedState__Class** type_info() {
            static app::JumperEnemyStompedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemyStompedState__Class**)(modloader::win::memory::resolve_rva(0x0471EEE8));
            }
            return cache;
        }
        inline app::JumperEnemyStompedState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyStompedState__Class>(type_info(), "", "JumperEnemyStompedState");
        }
        inline app::JumperEnemyStompedState* create() {
            return il2cpp::create_object<app::JumperEnemyStompedState>(get_class());
        }
    } // namespace JumperEnemyStompedState
} // namespace app::classes::types
