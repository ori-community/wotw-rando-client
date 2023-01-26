#pragma once
#include <Modloader/app/structs/ELeaderboardUploadScoreMethod__Enum.h>
#include <Modloader/app/structs/ELeaderboardUploadScoreMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ELeaderboardUploadScoreMethod__Enum {
        inline app::ELeaderboardUploadScoreMethod__Enum__Class** type_info() {
            static app::ELeaderboardUploadScoreMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ELeaderboardUploadScoreMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ELeaderboardUploadScoreMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardUploadScoreMethod__Enum__Class>(type_info(), "Steamworks", "ELeaderboardUploadScoreMethod");
        }
        inline app::ELeaderboardUploadScoreMethod__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardUploadScoreMethod__Enum>(get_class());
        }
    } // namespace ELeaderboardUploadScoreMethod__Enum
} // namespace app::classes::types
