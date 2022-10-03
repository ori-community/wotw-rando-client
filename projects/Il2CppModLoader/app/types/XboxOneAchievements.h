#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneAchievements {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneAchievements__Class** type_info;
        inline app::XboxOneAchievements__Class* get_class() {
            return il2cpp::get_class<app::XboxOneAchievements__Class>(type_info, "", "XboxOneAchievements");
        }
        inline app::XboxOneAchievements* create() {
            return il2cpp::create_object<app::XboxOneAchievements>(get_class());
        }
    } // namespace XboxOneAchievements
} // namespace app::classes::types
