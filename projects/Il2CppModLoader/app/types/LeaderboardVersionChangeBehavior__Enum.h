#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardVersionChangeBehavior__Enum {
        namespace {
            app::LeaderboardVersionChangeBehavior__Enum__Class* type_info_ref = nullptr;
        }
        app::LeaderboardVersionChangeBehavior__Enum__Class** type_info = &type_info_ref;
        inline app::LeaderboardVersionChangeBehavior__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardVersionChangeBehavior__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "LeaderboardVersionChangeBehavior");
        }
        inline app::LeaderboardVersionChangeBehavior__Enum* create() {
            return il2cpp::create_object<app::LeaderboardVersionChangeBehavior__Enum>(get_class());
        }
    } // namespace LeaderboardVersionChangeBehavior__Enum
} // namespace app::classes::types
