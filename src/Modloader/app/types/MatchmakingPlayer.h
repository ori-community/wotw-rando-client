#pragma once
#include <Modloader/app/structs/MatchmakingPlayer.h>
#include <Modloader/app/structs/MatchmakingPlayer__Array.h>
#include <Modloader/app/structs/MatchmakingPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayer {
        inline app::MatchmakingPlayer__Class** type_info() {
            static app::MatchmakingPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingPlayer__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayer__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingPlayer");
        }
        inline app::MatchmakingPlayer* create() {
            return il2cpp::create_object<app::MatchmakingPlayer>(get_class());
        }
        inline app::MatchmakingPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchmakingPlayer__Array>(get_class(), size);
        }
        inline app::MatchmakingPlayer__Array* create_array(const std::vector<app::MatchmakingPlayer*>& items) {
            return il2cpp::array_new<app::MatchmakingPlayer__Array>(get_class(), items);
        }
    } // namespace MatchmakingPlayer
} // namespace app::classes::types
