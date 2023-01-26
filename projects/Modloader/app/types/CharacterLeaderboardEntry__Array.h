#pragma once
#include <Modloader/app/structs/CharacterLeaderboardEntry__Array.h>
#include <Modloader/app/structs/CharacterLeaderboardEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterLeaderboardEntry__Array {
        inline app::CharacterLeaderboardEntry__Array__Class** type_info() {
            static app::CharacterLeaderboardEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterLeaderboardEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterLeaderboardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeaderboardEntry__Array__Class>(type_info(), "PlayFab.ClientModels", "CharacterLeaderboardEntry[]");
        }
        inline app::CharacterLeaderboardEntry__Array* create() {
            return il2cpp::create_object<app::CharacterLeaderboardEntry__Array>(get_class());
        }
    } // namespace CharacterLeaderboardEntry__Array
} // namespace app::classes::types
