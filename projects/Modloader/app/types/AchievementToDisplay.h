#pragma once
#include <Modloader/app/structs/AchievementToDisplay.h>
#include <Modloader/app/structs/AchievementToDisplay__Array.h>
#include <Modloader/app/structs/AchievementToDisplay__Boxed.h>
#include <Modloader/app/structs/AchievementToDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementToDisplay {
        inline app::AchievementToDisplay__Class** type_info() {
            static app::AchievementToDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementToDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementToDisplay__Class* get_class() {
            return il2cpp::get_class<app::AchievementToDisplay__Class>(type_info(), "", "AchievementToDisplay");
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
        inline app::AchievementToDisplay__Array* create_array(const std::vector<app::AchievementToDisplay>& items) {
            return il2cpp::array_new<app::AchievementToDisplay__Array>(get_class(), items);
        }
    } // namespace AchievementToDisplay
} // namespace app::classes::types
