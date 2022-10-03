#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementTimeWindow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementTimeWindow__Class** type_info;
        inline app::XblAchievementTimeWindow__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTimeWindow__Class>(type_info, "XGamingRuntime", "XblAchievementTimeWindow");
        }
        inline app::XblAchievementTimeWindow* create() {
            return il2cpp::create_object<app::XblAchievementTimeWindow>(get_class());
        }
    } // namespace XblAchievementTimeWindow
} // namespace app::classes::types
