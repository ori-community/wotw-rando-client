#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpitterEnemyState__Class.h>
#include <Modloader/app/structs/SpitterEnemyState.h>

namespace app::classes::types {
    namespace SpitterEnemyState {
        namespace {
            inline app::SpitterEnemyState__Class* type_info_ref = nullptr;
        }
        inline app::SpitterEnemyState__Class** type_info = &type_info_ref;
        inline app::SpitterEnemyState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyState__Class>(type_info, "", "SpitterEnemyState");
        }
        inline app::SpitterEnemyState* create() {
            return il2cpp::create_object<app::SpitterEnemyState>(get_class());
        }
    } // namespace SpitterEnemyState
} // namespace app::classes::types
