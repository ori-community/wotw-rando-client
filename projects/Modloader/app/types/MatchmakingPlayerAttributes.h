#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakingPlayerAttributes__Class.h>
#include <Modloader/app/structs/MatchmakingPlayerAttributes.h>

namespace app::classes::types {
    namespace MatchmakingPlayerAttributes {
        namespace {
            inline app::MatchmakingPlayerAttributes__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingPlayerAttributes__Class** type_info = &type_info_ref;
        inline app::MatchmakingPlayerAttributes__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingPlayerAttributes__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingPlayerAttributes");
        }
        inline app::MatchmakingPlayerAttributes* create() {
            return il2cpp::create_object<app::MatchmakingPlayerAttributes>(get_class());
        }
    } // namespace MatchmakingPlayerAttributes
} // namespace app::classes::types
