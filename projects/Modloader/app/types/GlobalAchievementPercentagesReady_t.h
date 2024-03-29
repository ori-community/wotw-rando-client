#pragma once
#include <Modloader/app/structs/GlobalAchievementPercentagesReady_t.h>
#include <Modloader/app/structs/GlobalAchievementPercentagesReady_t__Boxed.h>
#include <Modloader/app/structs/GlobalAchievementPercentagesReady_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalAchievementPercentagesReady_t {
        inline app::GlobalAchievementPercentagesReady_t__Class** type_info() {
            static app::GlobalAchievementPercentagesReady_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalAchievementPercentagesReady_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalAchievementPercentagesReady_t__Class* get_class() {
            return il2cpp::get_class<app::GlobalAchievementPercentagesReady_t__Class>(type_info(), "Steamworks", "GlobalAchievementPercentagesReady_t");
        }
        inline app::GlobalAchievementPercentagesReady_t* create() {
            return il2cpp::create_object<app::GlobalAchievementPercentagesReady_t>(get_class());
        }
        inline app::GlobalAchievementPercentagesReady_t__Boxed* box(app::GlobalAchievementPercentagesReady_t value) {
            return il2cpp::box_value<app::GlobalAchievementPercentagesReady_t__Boxed>(get_class(), value);
        }
    } // namespace GlobalAchievementPercentagesReady_t
} // namespace app::classes::types
