#pragma once
#include <Modloader/app/structs/XblAchievementRewardType__Enum.h>
#include <Modloader/app/structs/XblAchievementRewardType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementRewardType__Enum {
        inline app::XblAchievementRewardType__Enum__Class** type_info() {
            static app::XblAchievementRewardType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementRewardType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementRewardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementRewardType__Enum__Class>(type_info(), "XGamingRuntime", "XblAchievementRewardType");
        }
        inline app::XblAchievementRewardType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementRewardType__Enum>(get_class());
        }
    } // namespace XblAchievementRewardType__Enum
} // namespace app::classes::types
