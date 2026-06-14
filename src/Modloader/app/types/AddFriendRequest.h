#pragma once
#include <Modloader/app/structs/AddFriendRequest.h>
#include <Modloader/app/structs/AddFriendRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddFriendRequest {
        inline app::AddFriendRequest__Class** type_info() {
            static app::AddFriendRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddFriendRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D6D8));
            }
            return cache;
        }
        inline app::AddFriendRequest__Class* get_class() {
            return il2cpp::get_class<app::AddFriendRequest__Class>(type_info(), "PlayFab.ClientModels", "AddFriendRequest");
        }
        inline app::AddFriendRequest* create() {
            return il2cpp::create_object<app::AddFriendRequest>(get_class());
        }
    } // namespace AddFriendRequest
} // namespace app::classes::types
