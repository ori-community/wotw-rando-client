#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingQueueTeam__Array {
        namespace {
            inline app::MatchmakingQueueTeam__Array__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingQueueTeam__Array__Class** type_info = &type_info_ref;
        inline app::MatchmakingQueueTeam__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueTeam__Array__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingQueueTeam[]");
        }
        inline app::MatchmakingQueueTeam__Array* create() {
            return il2cpp::create_object<app::MatchmakingQueueTeam__Array>(get_class());
        }
    } // namespace MatchmakingQueueTeam__Array
} // namespace app::classes::types
