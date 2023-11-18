#pragma once
#include <Modloader/app/structs/MatchmakingPlayer__Array.h>
#include <Modloader/app/structs/MatchmakingPlayer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayer__Array {
        inline app::MatchmakingPlayer__Array__Class** type_info() {
            static app::MatchmakingPlayer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingPlayer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayer__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingPlayer[]");
        }
        inline app::MatchmakingPlayer__Array* create() {
            return il2cpp::create_object<app::MatchmakingPlayer__Array>(get_class());
        }
    } // namespace MatchmakingPlayer__Array
} // namespace app::classes::types
