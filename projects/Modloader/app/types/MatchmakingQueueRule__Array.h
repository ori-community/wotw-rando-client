#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingQueueRule__Array {
        namespace {
            inline app::MatchmakingQueueRule__Array__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingQueueRule__Array__Class** type_info = &type_info_ref;
        inline app::MatchmakingQueueRule__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueRule__Array__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingQueueRule[]");
        }
        inline app::MatchmakingQueueRule__Array* create() {
            return il2cpp::create_object<app::MatchmakingQueueRule__Array>(get_class());
        }
    } // namespace MatchmakingQueueRule__Array
} // namespace app::classes::types
