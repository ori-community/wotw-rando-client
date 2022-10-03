#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AllEnemiesKilledCondition {
        namespace {
            app::AllEnemiesKilledCondition__Class* type_info_ref = nullptr;
        }
        app::AllEnemiesKilledCondition__Class** type_info = &type_info_ref;
        inline app::AllEnemiesKilledCondition__Class* get_class() {
            return il2cpp::get_class<app::AllEnemiesKilledCondition__Class>(type_info, "", "AllEnemiesKilledCondition");
        }
        inline app::AllEnemiesKilledCondition* create() {
            return il2cpp::create_object<app::AllEnemiesKilledCondition>(get_class());
        }
    } // namespace AllEnemiesKilledCondition
} // namespace app::classes::types
