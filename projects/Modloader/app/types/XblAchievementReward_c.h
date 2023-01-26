#pragma once
#include <Modloader/app/structs/XblAchievementReward_c.h>
#include <Modloader/app/structs/XblAchievementReward_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementReward_c {
        inline app::XblAchievementReward_c__Class** type_info() {
            static app::XblAchievementReward_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementReward_c__Class**)(modloader::win::memory::resolve_rva(0x04713A38));
            }
            return cache;
        }
        inline app::XblAchievementReward_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XblAchievementReward_c__Class>(type_info(), "XGamingRuntime", "XblAchievementReward", "<>c");
        }
        inline app::XblAchievementReward_c* create() {
            return il2cpp::create_object<app::XblAchievementReward_c>(get_class());
        }
    } // namespace XblAchievementReward_c
} // namespace app::classes::types
