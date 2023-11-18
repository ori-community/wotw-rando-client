#pragma once
#include <Modloader/app/structs/GetCharacterLeaderboardRequest_1.h>
#include <Modloader/app/structs/GetCharacterLeaderboardRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterLeaderboardRequest_1 {
        inline app::GetCharacterLeaderboardRequest_1__Class** type_info() {
            static app::GetCharacterLeaderboardRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04738D50));
            }
            return cache;
        }
        inline app::GetCharacterLeaderboardRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterLeaderboardRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetCharacterLeaderboardRequest");
        }
        inline app::GetCharacterLeaderboardRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterLeaderboardRequest_1>(get_class());
        }
    } // namespace GetCharacterLeaderboardRequest_1
} // namespace app::classes::types
