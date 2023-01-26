#pragma once
#include <Modloader/app/structs/LeaderboardFindResult_t.h>
#include <Modloader/app/structs/LeaderboardFindResult_t__Boxed.h>
#include <Modloader/app/structs/LeaderboardFindResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardFindResult_t {
        inline app::LeaderboardFindResult_t__Class** type_info() {
            static app::LeaderboardFindResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardFindResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardFindResult_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFindResult_t__Class>(type_info(), "Steamworks", "LeaderboardFindResult_t");
        }
        inline app::LeaderboardFindResult_t* create() {
            return il2cpp::create_object<app::LeaderboardFindResult_t>(get_class());
        }
        inline app::LeaderboardFindResult_t__Boxed* box(app::LeaderboardFindResult_t value) {
            return il2cpp::box_value<app::LeaderboardFindResult_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardFindResult_t
} // namespace app::classes::types
