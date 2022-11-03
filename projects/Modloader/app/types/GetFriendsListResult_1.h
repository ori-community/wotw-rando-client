#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetFriendsListResult_1 {
        inline app::GetFriendsListResult_1__Class** type_info = (app::GetFriendsListResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477E338));
        inline app::GetFriendsListResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListResult_1__Class>(type_info, "PlayFab.ServerModels", "GetFriendsListResult");
        }
        inline app::GetFriendsListResult_1* create() {
            return il2cpp::create_object<app::GetFriendsListResult_1>(get_class());
        }
    } // namespace GetFriendsListResult_1
} // namespace app::classes::types
