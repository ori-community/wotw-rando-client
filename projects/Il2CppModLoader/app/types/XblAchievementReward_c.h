#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementReward_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementReward_c__Class** type_info;
        inline app::XblAchievementReward_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XblAchievementReward_c__Class>(type_info, "XGamingRuntime", "XblAchievementReward", "<>c");
        }
        inline app::XblAchievementReward_c* create() {
            return il2cpp::create_object<app::XblAchievementReward_c>(get_class());
        }
    } // namespace XblAchievementReward_c
} // namespace app::classes::types
