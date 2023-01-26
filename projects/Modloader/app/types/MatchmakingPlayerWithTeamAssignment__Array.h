#pragma once
#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment__Array.h>
#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayerWithTeamAssignment__Array {
        inline app::MatchmakingPlayerWithTeamAssignment__Array__Class** type_info() {
            static app::MatchmakingPlayerWithTeamAssignment__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingPlayerWithTeamAssignment__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayerWithTeamAssignment__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingPlayerWithTeamAssignment[]");
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Array* create() {
            return il2cpp::create_object<app::MatchmakingPlayerWithTeamAssignment__Array>(get_class());
        }
    } // namespace MatchmakingPlayerWithTeamAssignment__Array
} // namespace app::classes::types
