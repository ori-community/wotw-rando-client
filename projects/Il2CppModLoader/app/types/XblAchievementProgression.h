#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementProgression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementProgression__Class** type_info;
        inline app::XblAchievementProgression__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementProgression__Class>(type_info, "XGamingRuntime", "XblAchievementProgression");
        }
        inline app::XblAchievementProgression* create() {
            return il2cpp::create_object<app::XblAchievementProgression>(get_class());
        }
    } // namespace XblAchievementProgression
} // namespace app::classes::types
