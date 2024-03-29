#pragma once
#include <Modloader/app/structs/XblAchievementReward_1.h>
#include <Modloader/app/structs/XblAchievementReward_1__Boxed.h>
#include <Modloader/app/structs/XblAchievementReward_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementReward_1 {
        inline app::XblAchievementReward_1__Class** type_info() {
            static app::XblAchievementReward_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementReward_1__Class**)(modloader::win::memory::resolve_rva(0x047417B8));
            }
            return cache;
        }
        inline app::XblAchievementReward_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementReward_1__Class>(type_info(), "XGamingRuntime.Interop", "XblAchievementReward");
        }
        inline app::XblAchievementReward_1* create() {
            return il2cpp::create_object<app::XblAchievementReward_1>(get_class());
        }
        inline app::XblAchievementReward_1__Boxed* box(app::XblAchievementReward_1 value) {
            return il2cpp::box_value<app::XblAchievementReward_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementReward_1
} // namespace app::classes::types
