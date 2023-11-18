#pragma once
#include <Modloader/app/structs/SteamLeaderboard_t.h>
#include <Modloader/app/structs/SteamLeaderboard_t__Boxed.h>
#include <Modloader/app/structs/SteamLeaderboard_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamLeaderboard_t {
        inline app::SteamLeaderboard_t__Class** type_info() {
            static app::SteamLeaderboard_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamLeaderboard_t__Class**)(modloader::win::memory::resolve_rva(0x0474D7C0));
            }
            return cache;
        }
        inline app::SteamLeaderboard_t__Class* get_class() {
            return il2cpp::get_class<app::SteamLeaderboard_t__Class>(type_info(), "Steamworks", "SteamLeaderboard_t");
        }
        inline app::SteamLeaderboard_t* create() {
            return il2cpp::create_object<app::SteamLeaderboard_t>(get_class());
        }
        inline app::SteamLeaderboard_t__Boxed* box(app::SteamLeaderboard_t value) {
            return il2cpp::box_value<app::SteamLeaderboard_t__Boxed>(get_class(), value);
        }
    } // namespace SteamLeaderboard_t
} // namespace app::classes::types
