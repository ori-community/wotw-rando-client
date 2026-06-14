#pragma once
#include <Modloader/app/structs/LeaderboardUGCSet_t.h>
#include <Modloader/app/structs/LeaderboardUGCSet_t__Boxed.h>
#include <Modloader/app/structs/LeaderboardUGCSet_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardUGCSet_t {
        inline app::LeaderboardUGCSet_t__Class** type_info() {
            static app::LeaderboardUGCSet_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardUGCSet_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardUGCSet_t__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardUGCSet_t__Class>(type_info(), "Steamworks", "LeaderboardUGCSet_t");
        }
        inline app::LeaderboardUGCSet_t* create() {
            return il2cpp::create_object<app::LeaderboardUGCSet_t>(get_class());
        }
        inline app::LeaderboardUGCSet_t__Boxed* box(app::LeaderboardUGCSet_t value) {
            return il2cpp::box_value<app::LeaderboardUGCSet_t__Boxed>(get_class(), value);
        }
    } // namespace LeaderboardUGCSet_t
} // namespace app::classes::types
