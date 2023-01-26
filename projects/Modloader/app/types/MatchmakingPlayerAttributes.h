#pragma once
#include <Modloader/app/structs/MatchmakingPlayerAttributes.h>
#include <Modloader/app/structs/MatchmakingPlayerAttributes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingPlayerAttributes {
        inline app::MatchmakingPlayerAttributes__Class** type_info() {
            static app::MatchmakingPlayerAttributes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingPlayerAttributes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingPlayerAttributes__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayerAttributes__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingPlayerAttributes");
        }
        inline app::MatchmakingPlayerAttributes* create() {
            return il2cpp::create_object<app::MatchmakingPlayerAttributes>(get_class());
        }
    } // namespace MatchmakingPlayerAttributes
} // namespace app::classes::types
