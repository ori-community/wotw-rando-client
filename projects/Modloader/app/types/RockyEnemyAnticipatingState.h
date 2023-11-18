#pragma once
#include <Modloader/app/structs/RockyEnemyAnticipatingState.h>
#include <Modloader/app/structs/RockyEnemyAnticipatingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyAnticipatingState {
        inline app::RockyEnemyAnticipatingState__Class** type_info() {
            static app::RockyEnemyAnticipatingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockyEnemyAnticipatingState__Class**)(modloader::win::memory::resolve_rva(0x047320C8));
            }
            return cache;
        }
        inline app::RockyEnemyAnticipatingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyAnticipatingState__Class>(type_info(), "", "RockyEnemyAnticipatingState");
        }
        inline app::RockyEnemyAnticipatingState* create() {
            return il2cpp::create_object<app::RockyEnemyAnticipatingState>(get_class());
        }
    } // namespace RockyEnemyAnticipatingState
} // namespace app::classes::types
