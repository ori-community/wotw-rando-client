#pragma once
#include <Modloader/app/structs/SetFriendTagsRequest.h>
#include <Modloader/app/structs/SetFriendTagsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetFriendTagsRequest {
        inline app::SetFriendTagsRequest__Class** type_info() {
            static app::SetFriendTagsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetFriendTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719368));
            }
            return cache;
        }
        inline app::SetFriendTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetFriendTagsRequest__Class>(type_info(), "PlayFab.ClientModels", "SetFriendTagsRequest");
        }
        inline app::SetFriendTagsRequest* create() {
            return il2cpp::create_object<app::SetFriendTagsRequest>(get_class());
        }
    } // namespace SetFriendTagsRequest
} // namespace app::classes::types
