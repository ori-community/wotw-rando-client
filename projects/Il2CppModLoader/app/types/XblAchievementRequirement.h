#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementRequirement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementRequirement__Class** type_info;
        inline app::XblAchievementRequirement__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementRequirement__Class>(type_info, "XGamingRuntime", "XblAchievementRequirement");
        }
        inline app::XblAchievementRequirement* create() {
            return il2cpp::create_object<app::XblAchievementRequirement>(get_class());
        }
        inline app::XblAchievementRequirement__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievementRequirement__Array>(get_class(), size);
        }
        inline app::XblAchievementRequirement__Array* create_array(const std::vector<app::XblAchievementRequirement*>& items) {
            return il2cpp::array_new<app::XblAchievementRequirement__Array>(get_class(), items);
        }
    } // namespace XblAchievementRequirement
} // namespace app::classes::types
