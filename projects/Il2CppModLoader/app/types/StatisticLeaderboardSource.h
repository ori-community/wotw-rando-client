#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticLeaderboardSource {
        namespace {
            app::StatisticLeaderboardSource__Class* type_info_ref = nullptr;
        }
        app::StatisticLeaderboardSource__Class** type_info = &type_info_ref;
        inline app::StatisticLeaderboardSource__Class* get_class() {
            return il2cpp::get_class<app::StatisticLeaderboardSource__Class>(type_info, "PlayFab.PlayStreamModels", "StatisticLeaderboardSource");
        }
        inline app::StatisticLeaderboardSource* create() {
            return il2cpp::create_object<app::StatisticLeaderboardSource>(get_class());
        }
    } // namespace StatisticLeaderboardSource
} // namespace app::classes::types
