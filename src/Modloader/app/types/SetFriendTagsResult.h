#pragma once
#include <Modloader/app/structs/SetFriendTagsResult.h>
#include <Modloader/app/structs/SetFriendTagsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetFriendTagsResult {
        inline app::SetFriendTagsResult__Class** type_info() {
            static app::SetFriendTagsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetFriendTagsResult__Class**)(modloader::win::memory::resolve_rva(0x0478D2F8));
            }
            return cache;
        }
        inline app::SetFriendTagsResult__Class* get_class() {
            return il2cpp::get_class<app::SetFriendTagsResult__Class>(type_info(), "PlayFab.ClientModels", "SetFriendTagsResult");
        }
        inline app::SetFriendTagsResult* create() {
            return il2cpp::create_object<app::SetFriendTagsResult>(get_class());
        }
    } // namespace SetFriendTagsResult
} // namespace app::classes::types
