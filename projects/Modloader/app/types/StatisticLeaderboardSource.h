#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticLeaderboardSource {
        namespace {
            inline app::StatisticLeaderboardSource__Class* type_info_ref = nullptr;
        }
        inline app::StatisticLeaderboardSource__Class** type_info = &type_info_ref;
        inline app::StatisticLeaderboardSource__Class* get_class() {
            return il2cpp::get_class<app::StatisticLeaderboardSource__Class>(type_info, "PlayFab.PlayStreamModels", "StatisticLeaderboardSource");
        }
        inline app::StatisticLeaderboardSource* create() {
            return il2cpp::create_object<app::StatisticLeaderboardSource>(get_class());
        }
    } // namespace StatisticLeaderboardSource
} // namespace app::classes::types
