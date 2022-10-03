#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyAnticipatingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RockyEnemyAnticipatingState__Class** type_info;
        inline app::RockyEnemyAnticipatingState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyAnticipatingState__Class>(type_info, "", "RockyEnemyAnticipatingState");
        }
        inline app::RockyEnemyAnticipatingState* create() {
            return il2cpp::create_object<app::RockyEnemyAnticipatingState>(get_class());
        }
    } // namespace RockyEnemyAnticipatingState
} // namespace app::classes::types
