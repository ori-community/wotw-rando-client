#pragma once
#include <Modloader/app/structs/StatisticLeaderboardSource.h>
#include <Modloader/app/structs/StatisticLeaderboardSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticLeaderboardSource {
        inline app::StatisticLeaderboardSource__Class** type_info() {
            static app::StatisticLeaderboardSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticLeaderboardSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticLeaderboardSource__Class* get_class() {
            return il2cpp::get_class<app::StatisticLeaderboardSource__Class>(type_info(), "PlayFab.PlayStreamModels", "StatisticLeaderboardSource");
        }
        inline app::StatisticLeaderboardSource* create() {
            return il2cpp::create_object<app::StatisticLeaderboardSource>(get_class());
        }
    } // namespace StatisticLeaderboardSource
} // namespace app::classes::types
