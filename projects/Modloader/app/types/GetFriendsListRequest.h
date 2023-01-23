#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetFriendsListRequest__Class.h>
#include <Modloader/app/structs/GetFriendsListRequest.h>

namespace app::classes::types {
    namespace GetFriendsListRequest {
        inline app::GetFriendsListRequest__Class** type_info = (app::GetFriendsListRequest__Class**)(modloader::win::memory::resolve_rva(0x0475DE20));
        inline app::GetFriendsListRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListRequest__Class>(type_info, "PlayFab.ClientModels", "GetFriendsListRequest");
        }
        inline app::GetFriendsListRequest* create() {
            return il2cpp::create_object<app::GetFriendsListRequest>(get_class());
        }
    } // namespace GetFriendsListRequest
} // namespace app::classes::types
