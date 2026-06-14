#pragma once
#include <Modloader/app/structs/MatchmakingQueueRule.h>
#include <Modloader/app/structs/MatchmakingQueueRule__Array.h>
#include <Modloader/app/structs/MatchmakingQueueRule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingQueueRule {
        inline app::MatchmakingQueueRule__Class** type_info() {
            static app::MatchmakingQueueRule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingQueueRule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingQueueRule__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueRule__Class>(type_info(), "PlayFab.MultiplayerModels", "MatchmakingQueueRule");
        }
        inline app::MatchmakingQueueRule* create() {
            return il2cpp::create_object<app::MatchmakingQueueRule>(get_class());
        }
        inline app::MatchmakingQueueRule__Array* create_array(int size) {
            return il2cpp::array_new<app::MatchmakingQueueRule__Array>(get_class(), size);
        }
        inline app::MatchmakingQueueRule__Array* create_array(const std::vector<app::MatchmakingQueueRule*>& items) {
            return il2cpp::array_new<app::MatchmakingQueueRule__Array>(get_class(), items);
        }
    } // namespace MatchmakingQueueRule
} // namespace app::classes::types
