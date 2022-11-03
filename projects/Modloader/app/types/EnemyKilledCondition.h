#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyKilledCondition {
        namespace {
            inline app::EnemyKilledCondition__Class* type_info_ref = nullptr;
        }
        inline app::EnemyKilledCondition__Class** type_info = &type_info_ref;
        inline app::EnemyKilledCondition__Class* get_class() {
            return il2cpp::get_class<app::EnemyKilledCondition__Class>(type_info, "", "EnemyKilledCondition");
        }
        inline app::EnemyKilledCondition* create() {
            return il2cpp::create_object<app::EnemyKilledCondition>(get_class());
        }
    } // namespace EnemyKilledCondition
} // namespace app::classes::types
