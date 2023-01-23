#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundEnemyState__Class.h>
#include <Modloader/app/structs/GroundEnemyState.h>

namespace app::classes::types {
    namespace GroundEnemyState {
        namespace {
            inline app::GroundEnemyState__Class* type_info_ref = nullptr;
        }
        inline app::GroundEnemyState__Class** type_info = &type_info_ref;
        inline app::GroundEnemyState__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemyState__Class>(type_info, "", "GroundEnemyState");
        }
        inline app::GroundEnemyState* create() {
            return il2cpp::create_object<app::GroundEnemyState>(get_class());
        }
    } // namespace GroundEnemyState
} // namespace app::classes::types
