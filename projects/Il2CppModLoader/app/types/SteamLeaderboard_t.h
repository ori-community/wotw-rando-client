#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamLeaderboard_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamLeaderboard_t__Class** type_info;
        inline app::SteamLeaderboard_t__Class* get_class() {
            return il2cpp::get_class<app::SteamLeaderboard_t__Class>(type_info, "Steamworks", "SteamLeaderboard_t");
        }
        inline app::SteamLeaderboard_t* create() {
            return il2cpp::create_object<app::SteamLeaderboard_t>(get_class());
        }
        inline app::SteamLeaderboard_t__Boxed* box(app::SteamLeaderboard_t value) {
            return il2cpp::box_value<app::SteamLeaderboard_t__Boxed>(get_class(), value);
        }
    } // namespace SteamLeaderboard_t
} // namespace app::classes::types
