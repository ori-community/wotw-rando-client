#pragma once
#include <Modloader/app/structs/LeaderboardsB_LeaderboardQueryState__Enum.h>
#include <Modloader/app/structs/LeaderboardsB_LeaderboardQueryState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardsB_LeaderboardQueryState__Enum {
        inline app::LeaderboardsB_LeaderboardQueryState__Enum__Class** type_info() {
            static app::LeaderboardsB_LeaderboardQueryState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardsB_LeaderboardQueryState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardsB_LeaderboardQueryState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardsB_LeaderboardQueryState__Enum__Class>(type_info(), "", "LeaderboardsB", "LeaderboardQueryState");
        }
        inline app::LeaderboardsB_LeaderboardQueryState__Enum* create() {
            return il2cpp::create_object<app::LeaderboardsB_LeaderboardQueryState__Enum>(get_class());
        }
    } // namespace LeaderboardsB_LeaderboardQueryState__Enum
} // namespace app::classes::types
