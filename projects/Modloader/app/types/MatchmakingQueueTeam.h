#pragma once
#include <Modloader/app/structs/MatchmakingQueueTeam.h>
#include <Modloader/app/structs/MatchmakingQueueTeam__Array.h>
#include <Modloader/app/structs/MatchmakingQueueTeam__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingQueueTeam {
        inline app::MatchmakingQueueTeam__Class** type_info() {
            static app::MatchmakingQueueTeam__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingQueueTeam__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingQueueTeam__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueTeam__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingQueueTeam");
        }
        inline app::MatchmakingQueueTeam* create() {
            return il2cpp::create_object<app::MatchmakingQueueTeam>(get_class());
        }
        inline app::MatchmakingQueueTeam__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchmakingQueueTeam__Array>(get_class(), size);
        }
        inline app::MatchmakingQueueTeam__Array* create_array(const std::vector<app::MatchmakingQueueTeam*>& items) {
            return il2cpp::array_new<app::MatchmakingQueueTeam__Array>(get_class(), items);
        }
    } // namespace MatchmakingQueueTeam
} // namespace app::classes::types
