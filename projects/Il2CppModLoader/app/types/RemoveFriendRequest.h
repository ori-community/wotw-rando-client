#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveFriendRequest {
        inline app::RemoveFriendRequest__Class** type_info = (app::RemoveFriendRequest__Class**)(modloader::win::memory::resolve_rva(0x04786998));
        inline app::RemoveFriendRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveFriendRequest__Class>(type_info, "PlayFab.ClientModels", "RemoveFriendRequest");
        }
        inline app::RemoveFriendRequest* create() {
            return il2cpp::create_object<app::RemoveFriendRequest>(get_class());
        }
    } // namespace RemoveFriendRequest
} // namespace app::classes::types
