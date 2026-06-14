#pragma once
#include <Modloader/app/structs/GetFriendsListResult.h>
#include <Modloader/app/structs/GetFriendsListResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFriendsListResult {
        inline app::GetFriendsListResult__Class** type_info() {
            static app::GetFriendsListResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFriendsListResult__Class**)(modloader::win::memory::resolve_rva(0x04754338));
            }
            return cache;
        }
        inline app::GetFriendsListResult__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListResult__Class>(type_info(), "PlayFab.ClientModels", "GetFriendsListResult");
        }
        inline app::GetFriendsListResult* create() {
            return il2cpp::create_object<app::GetFriendsListResult>(get_class());
        }
    } // namespace GetFriendsListResult
} // namespace app::classes::types
