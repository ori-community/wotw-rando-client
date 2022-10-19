#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingQueueTeam {
        namespace {
            inline app::MatchmakingQueueTeam__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingQueueTeam__Class** type_info = &type_info_ref;
        inline app::MatchmakingQueueTeam__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueTeam__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingQueueTeam");
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
