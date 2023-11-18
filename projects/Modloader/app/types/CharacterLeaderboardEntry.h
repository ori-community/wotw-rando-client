#pragma once
#include <Modloader/app/structs/CharacterLeaderboardEntry.h>
#include <Modloader/app/structs/CharacterLeaderboardEntry__Array.h>
#include <Modloader/app/structs/CharacterLeaderboardEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterLeaderboardEntry {
        inline app::CharacterLeaderboardEntry__Class** type_info() {
            static app::CharacterLeaderboardEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterLeaderboardEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterLeaderboardEntry__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeaderboardEntry__Class>(type_info(), "PlayFab.ClientModels", "CharacterLeaderboardEntry");
        }
        inline app::CharacterLeaderboardEntry* create() {
            return il2cpp::create_object<app::CharacterLeaderboardEntry>(get_class());
        }
        inline app::CharacterLeaderboardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterLeaderboardEntry__Array>(get_class(), size);
        }
        inline app::CharacterLeaderboardEntry__Array* create_array(const std::vector<app::CharacterLeaderboardEntry*>& items) {
            return il2cpp::array_new<app::CharacterLeaderboardEntry__Array>(get_class(), items);
        }
    } // namespace CharacterLeaderboardEntry
} // namespace app::classes::types
