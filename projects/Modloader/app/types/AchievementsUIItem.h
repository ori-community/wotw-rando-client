#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementsUIItem {
        namespace {
            inline app::AchievementsUIItem__Class* type_info_ref = nullptr;
        }
        inline app::AchievementsUIItem__Class** type_info = &type_info_ref;
        inline app::AchievementsUIItem__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUIItem__Class>(type_info, "", "AchievementsUIItem");
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
