#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsStateValidator {
        namespace {
            app::AchievementsStateValidator__Class* type_info_ref = nullptr;
        }
        app::AchievementsStateValidator__Class** type_info = &type_info_ref;
        inline app::AchievementsStateValidator__Class* get_class() {
            return il2cpp::get_class<app::AchievementsStateValidator__Class>(type_info, "", "AchievementsStateValidator");
        }
        inline app::AchievementsStateValidator* create() {
            return il2cpp::create_object<app::AchievementsStateValidator>(get_class());
        }
    } // namespace AchievementsStateValidator
} // namespace app::classes::types
