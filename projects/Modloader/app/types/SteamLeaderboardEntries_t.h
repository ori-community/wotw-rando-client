#pragma once
#include <Modloader/app/structs/SteamLeaderboardEntries_t.h>
#include <Modloader/app/structs/SteamLeaderboardEntries_t__Boxed.h>
#include <Modloader/app/structs/SteamLeaderboardEntries_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamLeaderboardEntries_t {
        inline app::SteamLeaderboardEntries_t__Class** type_info() {
            static app::SteamLeaderboardEntries_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamLeaderboardEntries_t__Class**)(modloader::win::memory::resolve_rva(0x04778060));
            }
            return cache;
        }
        inline app::SteamLeaderboardEntries_t__Class* get_class() {
            return il2cpp::get_class<app::SteamLeaderboardEntries_t__Class>(type_info(), "Steamworks", "SteamLeaderboardEntries_t");
        }
        inline app::SteamLeaderboardEntries_t* create() {
            return il2cpp::create_object<app::SteamLeaderboardEntries_t>(get_class());
        }
        inline app::SteamLeaderboardEntries_t__Boxed* box(app::SteamLeaderboardEntries_t value) {
            return il2cpp::box_value<app::SteamLeaderboardEntries_t__Boxed>(get_class(), value);
        }
    } // namespace SteamLeaderboardEntries_t
} // namespace app::classes::types
