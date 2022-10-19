#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddFriendRequest {
        inline app::AddFriendRequest__Class** type_info = (app::AddFriendRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D6D8));
        inline app::AddFriendRequest__Class* get_class() {
            return il2cpp::get_class<app::AddFriendRequest__Class>(type_info, "PlayFab.ClientModels", "AddFriendRequest");
        }
        inline app::AddFriendRequest* create() {
            return il2cpp::create_object<app::AddFriendRequest>(get_class());
        }
    } // namespace AddFriendRequest
} // namespace app::classes::types
