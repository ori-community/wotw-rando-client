#pragma once
#include <Modloader/app/structs/UserAchievementIconFetched_t.h>
#include <Modloader/app/structs/UserAchievementIconFetched_t__Boxed.h>
#include <Modloader/app/structs/UserAchievementIconFetched_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserAchievementIconFetched_t {
        inline app::UserAchievementIconFetched_t__Class** type_info() {
            static app::UserAchievementIconFetched_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserAchievementIconFetched_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserAchievementIconFetched_t__Class* get_class() {
            return il2cpp::get_class<app::UserAchievementIconFetched_t__Class>(type_info(), "Steamworks", "UserAchievementIconFetched_t");
        }
        inline app::UserAchievementIconFetched_t* create() {
            return il2cpp::create_object<app::UserAchievementIconFetched_t>(get_class());
        }
        inline app::UserAchievementIconFetched_t__Boxed* box(app::UserAchievementIconFetched_t value) {
            return il2cpp::box_value<app::UserAchievementIconFetched_t__Boxed>(get_class(), value);
        }
    } // namespace UserAchievementIconFetched_t
} // namespace app::classes::types
