#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementToDisplay__Array {
        namespace {
            app::AchievementToDisplay__Array__Class* type_info_ref = nullptr;
        }
        app::AchievementToDisplay__Array__Class** type_info = &type_info_ref;
        inline app::AchievementToDisplay__Array__Class* get_class() {
            return il2cpp::get_class<app::AchievementToDisplay__Array__Class>(type_info, "", "AchievementToDisplay[]");
        }
        inline app::AchievementToDisplay__Array* create() {
            return il2cpp::create_object<app::AchievementToDisplay__Array>(get_class());
        }
    } // namespace AchievementToDisplay__Array
} // namespace app::classes::types
