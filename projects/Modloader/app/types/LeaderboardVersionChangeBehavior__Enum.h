#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardVersionChangeBehavior__Enum__Class.h>
#include <Modloader/app/structs/LeaderboardVersionChangeBehavior__Enum.h>

namespace app::classes::types {
    namespace LeaderboardVersionChangeBehavior__Enum {
        namespace {
            inline app::LeaderboardVersionChangeBehavior__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardVersionChangeBehavior__Enum__Class** type_info = &type_info_ref;
        inline app::LeaderboardVersionChangeBehavior__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardVersionChangeBehavior__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "LeaderboardVersionChangeBehavior");
        }
        inline app::LeaderboardVersionChangeBehavior__Enum* create() {
            return il2cpp::create_object<app::LeaderboardVersionChangeBehavior__Enum>(get_class());
        }
    } // namespace LeaderboardVersionChangeBehavior__Enum
} // namespace app::classes::types
