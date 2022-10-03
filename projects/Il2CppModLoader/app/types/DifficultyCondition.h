#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DifficultyCondition {
        namespace {
            app::DifficultyCondition__Class* type_info_ref = nullptr;
        }
        app::DifficultyCondition__Class** type_info = &type_info_ref;
        inline app::DifficultyCondition__Class* get_class() {
            return il2cpp::get_class<app::DifficultyCondition__Class>(type_info, "", "DifficultyCondition");
        }
        inline app::DifficultyCondition* create() {
            return il2cpp::create_object<app::DifficultyCondition>(get_class());
        }
    } // namespace DifficultyCondition
} // namespace app::classes::types
