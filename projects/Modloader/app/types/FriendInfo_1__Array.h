#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FriendInfo_1__Array {
        namespace {
            inline app::FriendInfo_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::FriendInfo_1__Array__Class** type_info = &type_info_ref;
        inline app::FriendInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::FriendInfo_1__Array__Class>(type_info, "PlayFab.ServerModels", "FriendInfo[]");
        }
        inline app::FriendInfo_1__Array* create() {
            return il2cpp::create_object<app::FriendInfo_1__Array>(get_class());
        }
    } // namespace FriendInfo_1__Array
} // namespace app::classes::types
