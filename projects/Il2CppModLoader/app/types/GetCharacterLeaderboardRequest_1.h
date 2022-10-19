#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardRequest_1 {
        inline app::GetCharacterLeaderboardRequest_1__Class** type_info = (app::GetCharacterLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04738D50));
        inline app::GetCharacterLeaderboardRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterLeaderboardRequest");
        }
        inline app::GetCharacterLeaderboardRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardRequest_1>(get_class());
        }
    } // namespace GetCharacterLeaderboardRequest_1
} // namespace app::classes::types
