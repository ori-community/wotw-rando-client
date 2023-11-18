#pragma once
#include <Modloader/app/structs/XblAchievementReward__Array.h>
#include <Modloader/app/structs/XblAchievementReward__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementReward__Array {
        inline app::XblAchievementReward__Array__Class** type_info() {
            static app::XblAchievementReward__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementReward__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementReward__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementReward__Array__Class>(type_info(), "XGamingRuntime", "XblAchievementReward[]");
        }
        inline app::XblAchievementReward__Array* create() {
            return il2cpp::create_object<app::XblAchievementReward__Array>(get_class());
        }
    } // namespace XblAchievementReward__Array
} // namespace app::classes::types
