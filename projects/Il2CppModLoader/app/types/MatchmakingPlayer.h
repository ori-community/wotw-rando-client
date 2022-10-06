#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayer {
        namespace {
            app::MatchmakingPlayer__Class* type_info_ref = nullptr;
        }
        app::MatchmakingPlayer__Class** type_info = &type_info_ref;
        inline app::MatchmakingPlayer__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayer__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingPlayer");
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
