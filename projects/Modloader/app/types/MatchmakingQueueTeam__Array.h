#pragma once
#include <Modloader/app/structs/MatchmakingQueueTeam__Array.h>
#include <Modloader/app/structs/MatchmakingQueueTeam__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingQueueTeam__Array {
        inline app::MatchmakingQueueTeam__Array__Class** type_info() {
            static app::MatchmakingQueueTeam__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingQueueTeam__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingQueueTeam__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueTeam__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingQueueTeam[]");
        }
        inline app::MatchmakingQueueTeam__Array* create() {
            return il2cpp::create_object<app::MatchmakingQueueTeam__Array>(get_class());
        }
    } // namespace MatchmakingQueueTeam__Array
} // namespace app::classes::types
