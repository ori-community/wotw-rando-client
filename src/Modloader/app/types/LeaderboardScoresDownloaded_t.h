#pragma once
#include <Modloader/app/structs/LeaderboardScoresDownloaded_t.h>
#include <Modloader/app/structs/LeaderboardScoresDownloaded_t__Boxed.h>
#include <Modloader/app/structs/LeaderboardScoresDownloaded_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardScoresDownloaded_t {
        inline app::LeaderboardScoresDownloaded_t__Class** type_info() {
            static app::LeaderboardScoresDownloaded_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardScoresDownloaded_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardScoresDownloaded_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardScoresDownloaded_t__Class>(type_info(), "Steamworks", "LeaderboardScoresDownloaded_t");
        }
        inline app::LeaderboardScoresDownloaded_t* create() {
            return il2cpp::create_object<app::LeaderboardScoresDownloaded_t>(get_class());
        }
        inline app::LeaderboardScoresDownloaded_t__Boxed* box(app::LeaderboardScoresDownloaded_t value) {
            return il2cpp::box_value<app::LeaderboardScoresDownloaded_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardScoresDownloaded_t
} // namespace app::classes::types
