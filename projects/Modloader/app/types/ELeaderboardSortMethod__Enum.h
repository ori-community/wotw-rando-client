#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ELeaderboardSortMethod__Enum {
        namespace {
            inline app::ELeaderboardSortMethod__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ELeaderboardSortMethod__Enum__Class** type_info = &type_info_ref;
        inline app::ELeaderboardSortMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardSortMethod__Enum__Class>(type_info, "Steamworks", "ELeaderboardSortMethod");
        }
        inline app::ELeaderboardSortMethod__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardSortMethod__Enum>(get_class());
        }
    } // namespace ELeaderboardSortMethod__Enum
} // namespace app::classes::types
