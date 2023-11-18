#pragma once
#include <Modloader/app/structs/LeaderboardSource.h>
#include <Modloader/app/structs/LeaderboardSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardSource {
        inline app::LeaderboardSource__Class** type_info() {
            static app::LeaderboardSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardSource__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardSource__Class>(type_info(), "PlayFab.PlayStreamModels", "LeaderboardSource");
        }
        inline app::LeaderboardSource* create() {
            return il2cpp::create_object<app::LeaderboardSource>(get_class());
        }
    } // namespace LeaderboardSource
} // namespace app::classes::types
