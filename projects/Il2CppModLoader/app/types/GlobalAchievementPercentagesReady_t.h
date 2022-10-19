#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalAchievementPercentagesReady_t {
        namespace {
            inline app::GlobalAchievementPercentagesReady_t__Class* type_info_ref = nullptr;
        }
        inline app::GlobalAchievementPercentagesReady_t__Class** type_info = &type_info_ref;
        inline app::GlobalAchievementPercentagesReady_t__Class* get_class() {
            return il2cpp::get_class<app::GlobalAchievementPercentagesReady_t__Class>(type_info, "Steamworks", "GlobalAchievementPercentagesReady_t");
        }
        inline app::GlobalAchievementPercentagesReady_t* create() {
            return il2cpp::create_object<app::GlobalAchievementPercentagesReady_t>(get_class());
        }
        inline app::GlobalAchievementPercentagesReady_t__Boxed* box(app::GlobalAchievementPercentagesReady_t value) {
            return il2cpp::box_value<app::GlobalAchievementPercentagesReady_t__Boxed>(get_class(), value);
        }
    } // namespace GlobalAchievementPercentagesReady_t
} // namespace app::classes::types
