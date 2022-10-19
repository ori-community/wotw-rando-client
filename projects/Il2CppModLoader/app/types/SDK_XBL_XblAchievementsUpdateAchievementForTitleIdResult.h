#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult {
        inline app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Class** type_info = (app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Class**)(modloader::win::memory::resolve_rva(0x04717960));
        inline app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Class>(type_info, "XGamingRuntime", "SDK+XBL", "XblAchievementsUpdateAchievementForTitleIdResult");
        }
        inline app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult* create() {
            return il2cpp::create_object<app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult>(get_class());
        }
    } // namespace SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult
} // namespace app::classes::types
