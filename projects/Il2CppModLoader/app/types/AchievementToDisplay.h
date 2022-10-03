#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementToDisplay {
        namespace {
            app::AchievementToDisplay__Class* type_info_ref = nullptr;
        }
        app::AchievementToDisplay__Class** type_info = &type_info_ref;
        inline app::AchievementToDisplay__Class* get_class() {
            return il2cpp::get_class<app::AchievementToDisplay__Class>(type_info, "", "AchievementToDisplay");
        }
        inline app::AchievementToDisplay* create() {
            return il2cpp::create_object<app::AchievementToDisplay>(get_class());
        }
        inline app::AchievementToDisplay__Boxed* box(app::AchievementToDisplay value) {
            return il2cpp::box_value<app::AchievementToDisplay__Boxed>(get_class(), value);
        }
        inline app::AchievementToDisplay__Array* create_array(int size) {
            return il2cpp::array_new<app::AchievementToDisplay__Array>(get_class(), size);
        }
    } // namespace AchievementToDisplay
} // namespace app::classes::types
