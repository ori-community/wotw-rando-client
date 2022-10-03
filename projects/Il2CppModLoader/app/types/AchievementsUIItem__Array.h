#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsUIItem__Array {
        namespace {
            app::AchievementsUIItem__Array__Class* type_info_ref = nullptr;
        }
        app::AchievementsUIItem__Array__Class** type_info = &type_info_ref;
        inline app::AchievementsUIItem__Array__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUIItem__Array__Class>(type_info, "", "AchievementsUIItem[]");
        }
        inline app::AchievementsUIItem__Array* create() {
            return il2cpp::create_object<app::AchievementsUIItem__Array>(get_class());
        }
    } // namespace AchievementsUIItem__Array
} // namespace app::classes::types
