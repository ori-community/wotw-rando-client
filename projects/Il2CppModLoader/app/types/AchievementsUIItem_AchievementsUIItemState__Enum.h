#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementsUIItem_AchievementsUIItemState__Enum {
        namespace {
            inline app::AchievementsUIItem_AchievementsUIItemState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AchievementsUIItem_AchievementsUIItemState__Enum__Class** type_info = &type_info_ref;
        inline app::AchievementsUIItem_AchievementsUIItemState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsUIItem_AchievementsUIItemState__Enum__Class>(type_info, "", "AchievementsUIItem", "AchievementsUIItemState");
        }
        inline app::AchievementsUIItem_AchievementsUIItemState__Enum* create() {
            return il2cpp::create_object<app::AchievementsUIItem_AchievementsUIItemState__Enum>(get_class());
        }
    } // namespace AchievementsUIItem_AchievementsUIItemState__Enum
} // namespace app::classes::types
