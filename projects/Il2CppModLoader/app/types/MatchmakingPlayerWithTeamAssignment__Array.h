#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingPlayerWithTeamAssignment__Array {
        namespace {
            inline app::MatchmakingPlayerWithTeamAssignment__Array__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Array__Class** type_info = &type_info_ref;
        inline app::MatchmakingPlayerWithTeamAssignment__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayerWithTeamAssignment__Array__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingPlayerWithTeamAssignment[]");
        }
        inline app::MatchmakingPlayerWithTeamAssignment__Array* create() {
            return il2cpp::create_object<app::MatchmakingPlayerWithTeamAssignment__Array>(get_class());
        }
    } // namespace MatchmakingPlayerWithTeamAssignment__Array
} // namespace app::classes::types
