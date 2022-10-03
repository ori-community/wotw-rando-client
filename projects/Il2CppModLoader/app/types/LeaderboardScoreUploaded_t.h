#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardScoreUploaded_t {
        namespace {
            app::LeaderboardScoreUploaded_t__Class* type_info_ref = nullptr;
        }
        app::LeaderboardScoreUploaded_t__Class** type_info = &type_info_ref;
        inline app::LeaderboardScoreUploaded_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardScoreUploaded_t__Class>(type_info, "Steamworks", "LeaderboardScoreUploaded_t");
        }
        inline app::LeaderboardScoreUploaded_t* create() {
            return il2cpp::create_object<app::LeaderboardScoreUploaded_t>(get_class());
        }
        inline app::LeaderboardScoreUploaded_t__Boxed* box(app::LeaderboardScoreUploaded_t value) {
            return il2cpp::box_value<app::LeaderboardScoreUploaded_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardScoreUploaded_t
} // namespace app::classes::types
