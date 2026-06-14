#pragma once
#include <Modloader/app/structs/LeaderboardScoreUploaded_t.h>
#include <Modloader/app/structs/LeaderboardScoreUploaded_t__Boxed.h>
#include <Modloader/app/structs/LeaderboardScoreUploaded_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardScoreUploaded_t {
        inline app::LeaderboardScoreUploaded_t__Class** type_info() {
            static app::LeaderboardScoreUploaded_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardScoreUploaded_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardScoreUploaded_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardScoreUploaded_t__Class>(type_info(), "Steamworks", "LeaderboardScoreUploaded_t");
        }
        inline app::LeaderboardScoreUploaded_t* create() {
            return il2cpp::create_object<app::LeaderboardScoreUploaded_t>(get_class());
        }
        inline app::LeaderboardScoreUploaded_t__Boxed* box(app::LeaderboardScoreUploaded_t value) {
            return il2cpp::box_value<app::LeaderboardScoreUploaded_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardScoreUploaded_t
} // namespace app::classes::types
