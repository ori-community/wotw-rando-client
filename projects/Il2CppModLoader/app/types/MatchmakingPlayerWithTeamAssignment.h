#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayerWithTeamAssignment {
        namespace {
            app::MatchmakingPlayerWithTeamAssignment__Class* type_info_ref = nullptr;
        }
        app::MatchmakingPlayerWithTeamAssignment__Class** type_info = &type_info_ref;
        inline app::MatchmakingPlayerWithTeamAssignment__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayerWithTeamAssignment__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingPlayerWithTeamAssignment");
        }
        inline app::MatchmakingPlayerWithTeamAssignment* create() {
            return il2cpp::create_object<app::MatchmakingPlayerWithTeamAssignment>(get_class());
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchmakingPlayerWithTeamAssignment__Array>(get_class(), size);
        }
    } // namespace MatchmakingPlayerWithTeamAssignment
} // namespace app::classes::types
