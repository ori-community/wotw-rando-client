#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AllEnemiesKilledCondition__Class.h>
#include <Modloader/app/structs/AllEnemiesKilledCondition.h>

namespace app::classes::types {
    namespace AllEnemiesKilledCondition {
        namespace {
            inline app::AllEnemiesKilledCondition__Class* type_info_ref = nullptr;
        }
        inline app::AllEnemiesKilledCondition__Class** type_info = &type_info_ref;
        inline app::AllEnemiesKilledCondition__Class* get_class() {
            return il2cpp::get_class<app::AllEnemiesKilledCondition__Class>(type_info, "", "AllEnemiesKilledCondition");
        }
        inline app::AllEnemiesKilledCondition* create() {
            return il2cpp::create_object<app::AllEnemiesKilledCondition>(get_class());
        }
    } // namespace AllEnemiesKilledCondition
} // namespace app::classes::types
