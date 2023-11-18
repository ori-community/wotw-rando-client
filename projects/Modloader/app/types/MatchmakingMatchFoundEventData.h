#pragma once
#include <Modloader/app/structs/MatchmakingMatchFoundEventData.h>
#include <Modloader/app/structs/MatchmakingMatchFoundEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingMatchFoundEventData {
        inline app::MatchmakingMatchFoundEventData__Class** type_info() {
            static app::MatchmakingMatchFoundEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingMatchFoundEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingMatchFoundEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingMatchFoundEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingMatchFoundEventData");
        }
        inline app::MatchmakingMatchFoundEventData* create() {
            return il2cpp::create_object<app::MatchmakingMatchFoundEventData>(get_class());
        }
    } // namespace MatchmakingMatchFoundEventData
} // namespace app::classes::types
