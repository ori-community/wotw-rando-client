#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementRewardType__Enum {
        namespace {
            app::XblAchievementRewardType__Enum__Class* type_info_ref = nullptr;
        }
        app::XblAchievementRewardType__Enum__Class** type_info = &type_info_ref;
        inline app::XblAchievementRewardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementRewardType__Enum__Class>(type_info, "XGamingRuntime", "XblAchievementRewardType");
        }
        inline app::XblAchievementRewardType__Enum* create() {
            return il2cpp::create_object<app::XblAchievementRewardType__Enum>(get_class());
        }
    } // namespace XblAchievementRewardType__Enum
} // namespace app::classes::types
