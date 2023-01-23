#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JumperEnemyState__Class.h>
#include <Modloader/app/structs/JumperEnemyState.h>

namespace app::classes::types {
    namespace JumperEnemyState {
        namespace {
            inline app::JumperEnemyState__Class* type_info_ref = nullptr;
        }
        inline app::JumperEnemyState__Class** type_info = &type_info_ref;
        inline app::JumperEnemyState__Class* get_class() {
            return il2cpp::get_class<app::JumperEnemyState__Class>(type_info, "", "JumperEnemyState");
        }
        inline app::JumperEnemyState* create() {
            return il2cpp::create_object<app::JumperEnemyState>(get_class());
        }
    } // namespace JumperEnemyState
} // namespace app::classes::types
