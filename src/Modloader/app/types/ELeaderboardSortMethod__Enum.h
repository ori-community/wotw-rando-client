#pragma once
#include <Modloader/app/structs/ELeaderboardSortMethod__Enum.h>
#include <Modloader/app/structs/ELeaderboardSortMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ELeaderboardSortMethod__Enum {
        inline app::ELeaderboardSortMethod__Enum__Class** type_info() {
            static app::ELeaderboardSortMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ELeaderboardSortMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ELeaderboardSortMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardSortMethod__Enum__Class>(type_info(), "Steamworks", "ELeaderboardSortMethod");
        }
        inline app::ELeaderboardSortMethod__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardSortMethod__Enum>(get_class());
        }
    } // namespace ELeaderboardSortMethod__Enum
} // namespace app::classes::types
