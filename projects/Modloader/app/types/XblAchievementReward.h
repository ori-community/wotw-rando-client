#pragma once
#include <Modloader/app/structs/XblAchievementReward.h>
#include <Modloader/app/structs/XblAchievementReward__Array.h>
#include <Modloader/app/structs/XblAchievementReward__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementReward {
        inline app::XblAchievementReward__Class** type_info() {
            static app::XblAchievementReward__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementReward__Class**)(modloader::win::memory::resolve_rva(0x047552D8));
            }
            return cache;
        }
        inline app::XblAchievementReward__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementReward__Class>(type_info(), "XGamingRuntime", "XblAchievementReward");
        }
        inline app::XblAchievementReward* create() {
            return il2cpp::create_object<app::XblAchievementReward>(get_class());
        }
        inline app::XblAchievementReward__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievementReward__Array>(get_class(), size);
        }
        inline app::XblAchievementReward__Array* create_array(const std::vector<app::XblAchievementReward*>& items) {
            return il2cpp::array_new<app::XblAchievementReward__Array>(get_class(), items);
        }
    } // namespace XblAchievementReward
} // namespace app::classes::types
