#pragma once
#include <Modloader/app/structs/ELeaderboardDataRequest__Enum.h>
#include <Modloader/app/structs/ELeaderboardDataRequest__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ELeaderboardDataRequest__Enum {
        inline app::ELeaderboardDataRequest__Enum__Class** type_info() {
            static app::ELeaderboardDataRequest__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ELeaderboardDataRequest__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ELeaderboardDataRequest__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardDataRequest__Enum__Class>(type_info(), "Steamworks", "ELeaderboardDataRequest");
        }
        inline app::ELeaderboardDataRequest__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardDataRequest__Enum>(get_class());
        }
    } // namespace ELeaderboardDataRequest__Enum
} // namespace app::classes::types
