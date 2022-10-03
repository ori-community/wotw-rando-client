#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class** type_info;
        inline app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class>(type_info, "XGamingRuntime", "SDK+XBL", "XblAchievementsGetAchievementsForTitleIdResult");
        }
        inline app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult* create() {
            return il2cpp::create_object<app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult>(get_class());
        }
    } // namespace SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult
} // namespace app::classes::types
