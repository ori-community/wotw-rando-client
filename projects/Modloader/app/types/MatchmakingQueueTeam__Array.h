#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakingQueueTeam__Array__Class.h>
#include <Modloader/app/structs/MatchmakingQueueTeam__Array.h>

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
