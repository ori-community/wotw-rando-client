#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamLeaderboardEntries_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamLeaderboardEntries_t__Class** type_info;
        inline app::SteamLeaderboardEntries_t__Class* get_class() {
            return il2cpp::get_class<app::SteamLeaderboardEntries_t__Class>(type_info, "Steamworks", "SteamLeaderboardEntries_t");
        }
        inline app::SteamLeaderboardEntries_t* create() {
            return il2cpp::create_object<app::SteamLeaderboardEntries_t>(get_class());
        }
        inline app::SteamLeaderboardEntries_t__Boxed* box(app::SteamLeaderboardEntries_t value) {
            return il2cpp::box_value<app::SteamLeaderboardEntries_t__Boxed>(get_class(), value);
        }
    } // namespace SteamLeaderboardEntries_t
} // namespace app::classes::types
