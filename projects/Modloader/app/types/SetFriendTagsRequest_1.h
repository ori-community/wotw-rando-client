#pragma once
#include <Modloader/app/structs/SetFriendTagsRequest_1.h>
#include <Modloader/app/structs/SetFriendTagsRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetFriendTagsRequest_1 {
        inline app::SetFriendTagsRequest_1__Class** type_info() {
            static app::SetFriendTagsRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetFriendTagsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047750D8));
            }
            return cache;
        }
        inline app::SetFriendTagsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::SetFriendTagsRequest_1__Class>(type_info(), "PlayFab.ServerModels", "SetFriendTagsRequest");
        }
        inline app::SetFriendTagsRequest_1* create() {
            return il2cpp::create_object<app::SetFriendTagsRequest_1>(get_class());
        }
    } // namespace SetFriendTagsRequest_1
} // namespace app::classes::types
