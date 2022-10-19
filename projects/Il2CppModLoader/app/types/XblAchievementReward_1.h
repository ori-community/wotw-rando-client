#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementReward_1 {
        inline app::XblAchievementReward_1__Class** type_info = (app::XblAchievementReward_1__Class**)(modloader::win::memory::resolve_rva(0x047417B8));
        inline app::XblAchievementReward_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementReward_1__Class>(type_info, "XGamingRuntime.Interop", "XblAchievementReward");
        }
        inline app::XblAchievementReward_1* create() {
            return il2cpp::create_object<app::XblAchievementReward_1>(get_class());
        }
        inline app::XblAchievementReward_1__Boxed* box(app::XblAchievementReward_1 value) {
            return il2cpp::box_value<app::XblAchievementReward_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementReward_1
} // namespace app::classes::types
