#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemyAnticipatingState {
        inline app::RockyEnemyAnticipatingState__Class** type_info = (app::RockyEnemyAnticipatingState__Class**)(modloader::win::memory::resolve_rva(0x047320C8));
        inline app::RockyEnemyAnticipatingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyAnticipatingState__Class>(type_info, "", "RockyEnemyAnticipatingState");
        }
        inline app::RockyEnemyAnticipatingState* create() {
            return il2cpp::create_object<app::RockyEnemyAnticipatingState>(get_class());
        }
    } // namespace RockyEnemyAnticipatingState
} // namespace app::classes::types
