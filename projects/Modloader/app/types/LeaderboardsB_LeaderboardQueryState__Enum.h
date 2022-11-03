#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardsB_LeaderboardQueryState__Enum {
        namespace {
            inline app::LeaderboardsB_LeaderboardQueryState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardsB_LeaderboardQueryState__Enum__Class** type_info = &type_info_ref;
        inline app::LeaderboardsB_LeaderboardQueryState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardsB_LeaderboardQueryState__Enum__Class>(type_info, "", "LeaderboardsB", "LeaderboardQueryState");
        }
        inline app::LeaderboardsB_LeaderboardQueryState__Enum* create() {
            return il2cpp::create_object<app::LeaderboardsB_LeaderboardQueryState__Enum>(get_class());
        }
    } // namespace LeaderboardsB_LeaderboardQueryState__Enum
} // namespace app::classes::types
