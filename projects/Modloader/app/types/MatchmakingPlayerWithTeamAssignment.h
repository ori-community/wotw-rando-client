#pragma once
#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment.h>
#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment__Array.h>
#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayerWithTeamAssignment {
        inline app::MatchmakingPlayerWithTeamAssignment__Class** type_info() {
            static app::MatchmakingPlayerWithTeamAssignment__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingPlayerWithTeamAssignment__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayerWithTeamAssignment__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingPlayerWithTeamAssignment");
        }
        inline app::MatchmakingPlayerWithTeamAssignment* create() {
            return il2cpp::create_object<app::MatchmakingPlayerWithTeamAssignment>(get_class());
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchmakingPlayerWithTeamAssignment__Array>(get_class(), size);
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Array* create_array(const std::vector<app::MatchmakingPlayerWithTeamAssignment*>& items) {
            return il2cpp::array_new<app::MatchmakingPlayerWithTeamAssignment__Array>(get_class(), items);
        }
    } // namespace MatchmakingPlayerWithTeamAssignment
} // namespace app::classes::types
