#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementsUITextCounter {
        namespace {
            inline app::AchievementsUITextCounter__Class* type_info_ref = nullptr;
        }
        inline app::AchievementsUITextCounter__Class** type_info = &type_info_ref;
        inline app::AchievementsUITextCounter__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUITextCounter__Class>(type_info, "", "AchievementsUITextCounter");
        }
        inline app::AchievementsUITextCounter* create() {
            return il2cpp::create_object<app::AchievementsUITextCounter>(get_class());
        }
    } // namespace AchievementsUITextCounter
} // namespace app::classes::types
