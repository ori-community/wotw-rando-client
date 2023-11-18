#pragma once
#include <Modloader/app/structs/ELeaderboardDisplayType__Enum.h>
#include <Modloader/app/structs/ELeaderboardDisplayType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ELeaderboardDisplayType__Enum {
        inline app::ELeaderboardDisplayType__Enum__Class** type_info() {
            static app::ELeaderboardDisplayType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ELeaderboardDisplayType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ELeaderboardDisplayType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardDisplayType__Enum__Class>(type_info(), "Steamworks", "ELeaderboardDisplayType");
        }
        inline app::ELeaderboardDisplayType__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardDisplayType__Enum>(get_class());
        }
    } // namespace ELeaderboardDisplayType__Enum
} // namespace app::classes::types
