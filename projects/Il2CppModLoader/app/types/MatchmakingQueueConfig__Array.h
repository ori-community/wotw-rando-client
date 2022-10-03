#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingQueueConfig__Array {
        namespace {
            app::MatchmakingQueueConfig__Array__Class* type_info_ref = nullptr;
        }
        app::MatchmakingQueueConfig__Array__Class** type_info = &type_info_ref;
        inline app::MatchmakingQueueConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueConfig__Array__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingQueueConfig[]");
        }
        inline app::MatchmakingQueueConfig__Array* create() {
            return il2cpp::create_object<app::MatchmakingQueueConfig__Array>(get_class());
        }
    } // namespace MatchmakingQueueConfig__Array
} // namespace app::classes::types
