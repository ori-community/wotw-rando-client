#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetLeaderboardResult_1__Class.h>
#include <Modloader/app/structs/GetLeaderboardResult_1.h>

namespace app::classes::types {
    namespace GetLeaderboardResult_1 {
        inline app::GetLeaderboardResult_1__Class** type_info = (app::GetLeaderboardResult_1__Class**)(modloader::win::memory::resolve_rva(0x0474D720));
        inline app::GetLeaderboardResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardResult_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardResult");
        }
        inline app::GetLeaderboardResult_1* create() {
            return il2cpp::create_object<app::GetLeaderboardResult_1>(get_class());
        }
    } // namespace GetLeaderboardResult_1
} // namespace app::classes::types
