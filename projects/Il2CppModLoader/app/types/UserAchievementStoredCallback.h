#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserAchievementStoredCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserAchievementStoredCallback__Class** type_info;
        inline app::UserAchievementStoredCallback__Class* get_class() {
            return il2cpp::get_class<app::UserAchievementStoredCallback__Class>(type_info, "Steamworks", "UserAchievementStoredCallback");
        }
        inline app::UserAchievementStoredCallback* create() {
            return il2cpp::create_object<app::UserAchievementStoredCallback>(get_class());
        }
    } // namespace UserAchievementStoredCallback
} // namespace app::classes::types
