#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetFriendTagsResult {
        inline app::SetFriendTagsResult__Class** type_info = (app::SetFriendTagsResult__Class**)(modloader::win::memory::resolve_rva(0x0478D2F8));
        inline app::SetFriendTagsResult__Class* get_class() {
            return il2cpp::get_class<app::SetFriendTagsResult__Class>(type_info, "PlayFab.ClientModels", "SetFriendTagsResult");
        }
        inline app::SetFriendTagsResult* create() {
            return il2cpp::create_object<app::SetFriendTagsResult>(get_class());
        }
    } // namespace SetFriendTagsResult
} // namespace app::classes::types
