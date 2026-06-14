#pragma once
#include <Modloader/app/structs/MatchmakingQueueConfig__Array.h>
#include <Modloader/app/structs/MatchmakingQueueConfig__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingQueueConfig__Array {
        inline app::MatchmakingQueueConfig__Array__Class** type_info() {
            static app::MatchmakingQueueConfig__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingQueueConfig__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingQueueConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueConfig__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingQueueConfig[]");
        }
        inline app::MatchmakingQueueConfig__Array* create() {
            return il2cpp::create_object<app::MatchmakingQueueConfig__Array>(get_class());
        }
    } // namespace MatchmakingQueueConfig__Array
} // namespace app::classes::types
