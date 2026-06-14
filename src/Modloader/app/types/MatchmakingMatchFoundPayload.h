#pragma once
#include <Modloader/app/structs/MatchmakingMatchFoundPayload.h>
#include <Modloader/app/structs/MatchmakingMatchFoundPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingMatchFoundPayload {
        inline app::MatchmakingMatchFoundPayload__Class** type_info() {
            static app::MatchmakingMatchFoundPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingMatchFoundPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingMatchFoundPayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingMatchFoundPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingMatchFoundPayload");
        }
        inline app::MatchmakingMatchFoundPayload* create() {
            return il2cpp::create_object<app::MatchmakingMatchFoundPayload>(get_class());
        }
    } // namespace MatchmakingMatchFoundPayload
} // namespace app::classes::types
