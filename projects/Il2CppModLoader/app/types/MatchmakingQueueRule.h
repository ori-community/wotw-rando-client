#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingQueueRule {
        namespace {
            inline app::MatchmakingQueueRule__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingQueueRule__Class** type_info = &type_info_ref;
        inline app::MatchmakingQueueRule__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingQueueRule__Class>(type_info, "PlayFab.MultiplayerModels", "MatchmakingQueueRule");
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
