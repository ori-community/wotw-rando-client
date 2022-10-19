#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardSource {
        namespace {
            inline app::LeaderboardSource__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardSource__Class** type_info = &type_info_ref;
        inline app::LeaderboardSource__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardSource__Class>(type_info, "PlayFab.PlayStreamModels", "LeaderboardSource");
        }
        inline app::LeaderboardSource* create() {
            return il2cpp::create_object<app::LeaderboardSource>(get_class());
        }
    } // namespace LeaderboardSource
} // namespace app::classes::types
