#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FriendInfo__Array__Class.h>
#include <Modloader/app/structs/FriendInfo__Array.h>

namespace app::classes::types {
    namespace FriendInfo__Array {
        namespace {
            inline app::FriendInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::FriendInfo__Array__Class** type_info = &type_info_ref;
        inline app::FriendInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FriendInfo__Array__Class>(type_info, "PlayFab.ClientModels", "FriendInfo[]");
        }
        inline app::FriendInfo__Array* create() {
            return il2cpp::create_object<app::FriendInfo__Array>(get_class());
        }
    } // namespace FriendInfo__Array
} // namespace app::classes::types
