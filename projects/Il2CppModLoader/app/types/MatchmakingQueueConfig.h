#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingQueueConfig {
        namespace {
            app::MatchmakingQueueConfig__Class* type_info_ref = nullptr;
        }
        app::MatchmakingQueueConfig__Class** type_info = &type_info_ref;
        inline app::MatchmakingQueueConfig__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueConfig__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingQueueConfig");
        }
        inline app::MatchmakingQueueConfig* create() {
            return il2cpp::create_object<app::MatchmakingQueueConfig>(get_class());
        }
        inline app::MatchmakingQueueConfig__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchmakingQueueConfig__Array>(get_class(), size);
        }
    } // namespace MatchmakingQueueConfig
} // namespace app::classes::types
