#pragma once
#include <Modloader/app/structs/GetFriendsListRequest_1.h>
#include <Modloader/app/structs/GetFriendsListRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFriendsListRequest_1 {
        inline app::GetFriendsListRequest_1__Class** type_info() {
            static app::GetFriendsListRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFriendsListRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0477FDD0));
            }
            return cache;
        }
        inline app::GetFriendsListRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetFriendsListRequest");
        }
        inline app::GetFriendsListRequest_1* create() {
            return il2cpp::create_object<app::GetFriendsListRequest_1>(get_class());
        }
    } // namespace GetFriendsListRequest_1
} // namespace app::classes::types
