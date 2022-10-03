#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterLeaderboardEntry__Array {
        namespace {
            app::CharacterLeaderboardEntry__Array__Class* type_info_ref = nullptr;
        }
        app::CharacterLeaderboardEntry__Array__Class** type_info = &type_info_ref;
        inline app::CharacterLeaderboardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeaderboardEntry__Array__Class>(type_info, "PlayFab.ClientModels", "CharacterLeaderboardEntry[]");
        }
        inline app::CharacterLeaderboardEntry__Array* create() {
            return il2cpp::create_object<app::CharacterLeaderboardEntry__Array>(get_class());
        }
    } // namespace CharacterLeaderboardEntry__Array
} // namespace app::classes::types
