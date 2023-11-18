#pragma once
#include <Modloader/app/structs/MatchmakingQueueConfig.h>
#include <Modloader/app/structs/MatchmakingQueueConfig__Array.h>
#include <Modloader/app/structs/MatchmakingQueueConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingQueueConfig {
        inline app::MatchmakingQueueConfig__Class** type_info() {
            static app::MatchmakingQueueConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingQueueConfig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingQueueConfig__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueConfig__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingQueueConfig");
        }
        inline app::MatchmakingQueueConfig* create() {
            return il2cpp::create_object<app::MatchmakingQueueConfig>(get_class());
        }
        inline app::MatchmakingQueueConfig__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchmakingQueueConfig__Array>(get_class(), size);
        }
        inline app::MatchmakingQueueConfig__Array* create_array(const std::vector<app::MatchmakingQueueConfig*>& items) {
            return il2cpp::array_new<app::MatchmakingQueueConfig__Array>(get_class(), items);
        }
    } // namespace MatchmakingQueueConfig
} // namespace app::classes::types
