#pragma once
#include <Modloader/app/structs/JumperEnemyStunnedState.h>
#include <Modloader/app/structs/JumperEnemyStunnedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyStunnedState {
        inline app::JumperEnemyStunnedState__Class** type_info() {
            static app::JumperEnemyStunnedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumperEnemyStunnedState__Class**)(modloader::win::memory::resolve_rva(0x0477FBC8));
            }
            return cache;
        }
        inline app::JumperEnemyStunnedState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyStunnedState__Class>(type_info(), "", "JumperEnemyStunnedState");
        }
        inline app::JumperEnemyStunnedState* create() {
            return il2cpp::create_object<app::JumperEnemyStunnedState>(get_class());
        }
    } // namespace JumperEnemyStunnedState
} // namespace app::classes::types
