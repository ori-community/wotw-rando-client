#pragma once
#include <Modloader/app/structs/AchievementsUIItem.h>
#include <Modloader/app/structs/AchievementsUIItem__Array.h>
#include <Modloader/app/structs/AchievementsUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUIItem {
        inline app::AchievementsUIItem__Class** type_info() {
            static app::AchievementsUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsUIItem__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUIItem__Class>(type_info(), "", "AchievementsUIItem");
        }
        inline app::AchievementsUIItem* create() {
            return il2cpp::create_object<app::AchievementsUIItem>(get_class());
        }
        inline app::AchievementsUIItem__Array* create_array(int size) {
            return il2cpp::array_new<app::AchievementsUIItem__Array>(get_class(), size);
        }
        inline app::AchievementsUIItem__Array* create_array(const std::vector<app::AchievementsUIItem*>& items) {
            return il2cpp::array_new<app::AchievementsUIItem__Array>(get_class(), items);
        }
    } // namespace AchievementsUIItem
} // namespace app::classes::types
