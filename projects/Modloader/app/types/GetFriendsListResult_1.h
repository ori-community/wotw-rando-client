#pragma once
#include <Modloader/app/structs/GetFriendsListResult_1.h>
#include <Modloader/app/structs/GetFriendsListResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFriendsListResult_1 {
        inline app::GetFriendsListResult_1__Class** type_info() {
            static app::GetFriendsListResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFriendsListResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477E338));
            }
            return cache;
        }
        inline app::GetFriendsListResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetFriendsListResult");
        }
        inline app::GetFriendsListResult_1* create() {
            return il2cpp::create_object<app::GetFriendsListResult_1>(get_class());
        }
    } // namespace GetFriendsListResult_1
} // namespace app::classes::types
