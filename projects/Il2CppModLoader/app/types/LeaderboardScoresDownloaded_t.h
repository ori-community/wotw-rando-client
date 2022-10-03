#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardScoresDownloaded_t {
        namespace {
            app::LeaderboardScoresDownloaded_t__Class* type_info_ref = nullptr;
        }
        app::LeaderboardScoresDownloaded_t__Class** type_info = &type_info_ref;
        inline app::LeaderboardScoresDownloaded_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardScoresDownloaded_t__Class>(type_info, "Steamworks", "LeaderboardScoresDownloaded_t");
        }
        inline app::LeaderboardScoresDownloaded_t* create() {
            return il2cpp::create_object<app::LeaderboardScoresDownloaded_t>(get_class());
        }
        inline app::LeaderboardScoresDownloaded_t__Boxed* box(app::LeaderboardScoresDownloaded_t value) {
            return il2cpp::box_value<app::LeaderboardScoresDownloaded_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardScoresDownloaded_t
} // namespace app::classes::types
