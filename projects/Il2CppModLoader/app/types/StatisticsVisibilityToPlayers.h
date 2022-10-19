#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticsVisibilityToPlayers {
        namespace {
            inline app::StatisticsVisibilityToPlayers__Class* type_info_ref = nullptr;
        }
        inline app::StatisticsVisibilityToPlayers__Class** type_info = &type_info_ref;
        inline app::StatisticsVisibilityToPlayers__Class* get_class() {
            return il2cpp::get_class<app::StatisticsVisibilityToPlayers__Class>(type_info, "PlayFab.MultiplayerModels", "StatisticsVisibilityToPlayers");
        }
        inline app::StatisticsVisibilityToPlayers* create() {
            return il2cpp::create_object<app::StatisticsVisibilityToPlayers>(get_class());
        }
    } // namespace StatisticsVisibilityToPlayers
} // namespace app::classes::types
