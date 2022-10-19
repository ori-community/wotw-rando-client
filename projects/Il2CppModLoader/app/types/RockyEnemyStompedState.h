#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemyStompedState {
        namespace {
            inline app::RockyEnemyStompedState__Class* type_info_ref = nullptr;
        }
        inline app::RockyEnemyStompedState__Class** type_info = &type_info_ref;
        inline app::RockyEnemyStompedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyStompedState__Class>(type_info, "", "RockyEnemyStompedState");
        }
        inline app::RockyEnemyStompedState* create() {
            return il2cpp::create_object<app::RockyEnemyStompedState>(get_class());
        }
    } // namespace RockyEnemyStompedState
} // namespace app::classes::types
