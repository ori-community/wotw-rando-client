#pragma once
#include <Modloader/app/structs/LeaderboardVersionChangeBehavior__Enum.h>
#include <Modloader/app/structs/LeaderboardVersionChangeBehavior__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardVersionChangeBehavior__Enum {
        inline app::LeaderboardVersionChangeBehavior__Enum__Class** type_info() {
            static app::LeaderboardVersionChangeBehavior__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardVersionChangeBehavior__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardVersionChangeBehavior__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardVersionChangeBehavior__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "LeaderboardVersionChangeBehavior");
        }
        inline app::LeaderboardVersionChangeBehavior__Enum* create() {
            return il2cpp::create_object<app::LeaderboardVersionChangeBehavior__Enum>(get_class());
        }
    } // namespace LeaderboardVersionChangeBehavior__Enum
} // namespace app::classes::types
