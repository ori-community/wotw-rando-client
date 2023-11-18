#pragma once
#include <Modloader/app/structs/SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult.h>
#include <Modloader/app/structs/SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult {
        inline app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class** type_info() {
            static app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class**)(modloader::win::memory::resolve_rva(0x04701B80));
            }
            return cache;
        }
        inline app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class>(type_info(), "XGamingRuntime", "SDK+XBL", "XblAchievementsGetAchievementsForTitleIdResult");
        }
        inline app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult* create() {
            return il2cpp::create_object<app::SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult>(get_class());
        }
    } // namespace SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult
} // namespace app::classes::types
