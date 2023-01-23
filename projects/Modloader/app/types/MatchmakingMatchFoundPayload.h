#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakingMatchFoundPayload__Class.h>
#include <Modloader/app/structs/MatchmakingMatchFoundPayload.h>

namespace app::classes::types {
    namespace MatchmakingMatchFoundPayload {
        namespace {
            inline app::MatchmakingMatchFoundPayload__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingMatchFoundPayload__Class** type_info = &type_info_ref;
        inline app::MatchmakingMatchFoundPayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingMatchFoundPayload__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingMatchFoundPayload");
        }
        inline app::MatchmakingMatchFoundPayload* create() {
            return il2cpp::create_object<app::MatchmakingMatchFoundPayload>(get_class());
        }
    } // namespace MatchmakingMatchFoundPayload
} // namespace app::classes::types
