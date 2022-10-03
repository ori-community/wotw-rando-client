#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementReward {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementReward__Class** type_info;
        inline app::XblAchievementReward__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementReward__Class>(type_info, "XGamingRuntime", "XblAchievementReward");
        }
        inline app::XblAchievementReward* create() {
            return il2cpp::create_object<app::XblAchievementReward>(get_class());
        }
        inline app::XblAchievementReward__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievementReward__Array>(get_class(), size);
        }
    } // namespace XblAchievementReward
} // namespace app::classes::types
