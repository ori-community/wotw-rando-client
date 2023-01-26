#pragma once
#include <Modloader/app/structs/StatisticsVisibilityToPlayers.h>
#include <Modloader/app/structs/StatisticsVisibilityToPlayers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticsVisibilityToPlayers {
        inline app::StatisticsVisibilityToPlayers__Class** type_info() {
            static app::StatisticsVisibilityToPlayers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticsVisibilityToPlayers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticsVisibilityToPlayers__Class* get_class() {
            return il2cpp::get_class<app::StatisticsVisibilityToPlayers__Class>(type_info(), "PlayFab.MultiplayerModels", "StatisticsVisibilityToPlayers");
        }
        inline app::StatisticsVisibilityToPlayers* create() {
            return il2cpp::create_object<app::StatisticsVisibilityToPlayers>(get_class());
        }
    } // namespace StatisticsVisibilityToPlayers
} // namespace app::classes::types
