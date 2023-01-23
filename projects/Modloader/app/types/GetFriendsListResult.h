#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetFriendsListResult__Class.h>
#include <Modloader/app/structs/GetFriendsListResult.h>

namespace app::classes::types {
    namespace GetFriendsListResult {
        inline app::GetFriendsListResult__Class** type_info = (app::GetFriendsListResult__Class**)(modloader::win::memory::resolve_rva(0x04754338));
        inline app::GetFriendsListResult__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListResult__Class>(type_info, "PlayFab.ClientModels", "GetFriendsListResult");
        }
        inline app::GetFriendsListResult* create() {
            return il2cpp::create_object<app::GetFriendsListResult>(get_class());
        }
    } // namespace GetFriendsListResult
} // namespace app::classes::types
