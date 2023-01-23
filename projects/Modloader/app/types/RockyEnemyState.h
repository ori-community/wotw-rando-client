#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RockyEnemyState__Class.h>
#include <Modloader/app/structs/RockyEnemyState.h>

namespace app::classes::types {
    namespace RockyEnemyState {
        namespace {
            inline app::RockyEnemyState__Class* type_info_ref = nullptr;
        }
        inline app::RockyEnemyState__Class** type_info = &type_info_ref;
        inline app::RockyEnemyState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyState__Class>(type_info, "", "RockyEnemyState");
        }
        inline app::RockyEnemyState* create() {
            return il2cpp::create_object<app::RockyEnemyState>(get_class());
        }
    } // namespace RockyEnemyState
} // namespace app::classes::types
