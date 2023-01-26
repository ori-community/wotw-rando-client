#pragma once
#include <Modloader/app/structs/AchievementsUIItem_AchievementsUIItemState__Enum.h>
#include <Modloader/app/structs/AchievementsUIItem_AchievementsUIItemState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUIItem_AchievementsUIItemState__Enum {
        inline app::AchievementsUIItem_AchievementsUIItemState__Enum__Class** type_info() {
            static app::AchievementsUIItem_AchievementsUIItemState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsUIItem_AchievementsUIItemState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsUIItem_AchievementsUIItemState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsUIItem_AchievementsUIItemState__Enum__Class>(type_info(), "", "AchievementsUIItem", "AchievementsUIItemState");
        }
        inline app::AchievementsUIItem_AchievementsUIItemState__Enum* create() {
            return il2cpp::create_object<app::AchievementsUIItem_AchievementsUIItemState__Enum>(get_class());
        }
    } // namespace AchievementsUIItem_AchievementsUIItemState__Enum
} // namespace app::classes::types
