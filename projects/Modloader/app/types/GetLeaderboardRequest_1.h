#pragma once
#include <Modloader/app/structs/GetLeaderboardRequest_1.h>
#include <Modloader/app/structs/GetLeaderboardRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardRequest_1 {
        inline app::GetLeaderboardRequest_1__Class** type_info() {
            static app::GetLeaderboardRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047152F8));
            }
            return cache;
        }
        inline app::GetLeaderboardRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetLeaderboardRequest");
        }
        inline app::GetLeaderboardRequest_1* create() {
            return il2cpp::create_object<app::GetLeaderboardRequest_1>(get_class());
        }
    } // namespace GetLeaderboardRequest_1
} // namespace app::classes::types
