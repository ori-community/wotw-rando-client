#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardEntry_t {
        namespace {
            app::LeaderboardEntry_t__Class* type_info_ref = nullptr;
        }
        app::LeaderboardEntry_t__Class** type_info = &type_info_ref;
        inline app::LeaderboardEntry_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardEntry_t__Class>(type_info, "Steamworks", "LeaderboardEntry_t");
        }
        inline app::LeaderboardEntry_t* create() {
            return il2cpp::create_object<app::LeaderboardEntry_t>(get_class());
        }
        inline app::LeaderboardEntry_t__Boxed* box(app::LeaderboardEntry_t value) {
            return il2cpp::box_value<app::LeaderboardEntry_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardEntry_t
} // namespace app::classes::types
