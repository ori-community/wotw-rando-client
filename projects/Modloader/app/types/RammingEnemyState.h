#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingEnemyState__Class.h>
#include <Modloader/app/structs/RammingEnemyState.h>

namespace app::classes::types {
    namespace RammingEnemyState {
        namespace {
            inline app::RammingEnemyState__Class* type_info_ref = nullptr;
        }
        inline app::RammingEnemyState__Class** type_info = &type_info_ref;
        inline app::RammingEnemyState__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyState__Class>(type_info, "", "RammingEnemyState");
        }
        inline app::RammingEnemyState* create() {
            return il2cpp::create_object<app::RammingEnemyState>(get_class());
        }
    } // namespace RammingEnemyState
} // namespace app::classes::types
