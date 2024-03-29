#pragma once
#include <Modloader/app/structs/PlayerLeaderboardEntry.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry__Array.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLeaderboardEntry {
        inline app::PlayerLeaderboardEntry__Class** type_info() {
            static app::PlayerLeaderboardEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerLeaderboardEntry__Class**)(modloader::win::memory::resolve_rva(0x0472DB68));
            }
            return cache;
        }
        inline app::PlayerLeaderboardEntry__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeaderboardEntry__Class>(type_info(), "PlayFab.ClientModels", "PlayerLeaderboardEntry");
        }
        inline app::PlayerLeaderboardEntry* create() {
            return il2cpp::create_object<app::PlayerLeaderboardEntry>(get_class());
        }
        inline app::PlayerLeaderboardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLeaderboardEntry__Array>(get_class(), size);
        }
        inline app::PlayerLeaderboardEntry__Array* create_array(const std::vector<app::PlayerLeaderboardEntry*>& items) {
            return il2cpp::array_new<app::PlayerLeaderboardEntry__Array>(get_class(), items);
        }
    } // namespace PlayerLeaderboardEntry
} // namespace app::classes::types
