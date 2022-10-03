#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementRequirement_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementRequirement_1__Class** type_info;
        inline app::XblAchievementRequirement_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementRequirement_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementRequirement");
        }
        inline app::XblAchievementRequirement_1* create() {
            return il2cpp::create_object<app::XblAchievementRequirement_1>(get_class());
        }
        inline app::XblAchievementRequirement_1__Boxed* box(app::XblAchievementRequirement_1 value) {
            return il2cpp::box_value<app::XblAchievementRequirement_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementRequirement_1
} // namespace app::classes::types
