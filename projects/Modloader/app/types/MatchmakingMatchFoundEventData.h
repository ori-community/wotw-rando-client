#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakingMatchFoundEventData__Class.h>
#include <Modloader/app/structs/MatchmakingMatchFoundEventData.h>

namespace app::classes::types {
    namespace MatchmakingMatchFoundEventData {
        namespace {
            inline app::MatchmakingMatchFoundEventData__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingMatchFoundEventData__Class** type_info = &type_info_ref;
        inline app::MatchmakingMatchFoundEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingMatchFoundEventData__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingMatchFoundEventData");
        }
        inline app::MatchmakingMatchFoundEventData* create() {
            return il2cpp::create_object<app::MatchmakingMatchFoundEventData>(get_class());
        }
    } // namespace MatchmakingMatchFoundEventData
} // namespace app::classes::types
