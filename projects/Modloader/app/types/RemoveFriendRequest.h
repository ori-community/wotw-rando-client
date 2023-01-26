#pragma once
#include <Modloader/app/structs/RemoveFriendRequest.h>
#include <Modloader/app/structs/RemoveFriendRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveFriendRequest {
        inline app::RemoveFriendRequest__Class** type_info() {
            static app::RemoveFriendRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveFriendRequest__Class**)(modloader::win::memory::resolve_rva(0x04786998));
            }
            return cache;
        }
        inline app::RemoveFriendRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveFriendRequest__Class>(type_info(), "PlayFab.ClientModels", "RemoveFriendRequest");
        }
        inline app::RemoveFriendRequest* create() {
            return il2cpp::create_object<app::RemoveFriendRequest>(get_class());
        }
    } // namespace RemoveFriendRequest
} // namespace app::classes::types
