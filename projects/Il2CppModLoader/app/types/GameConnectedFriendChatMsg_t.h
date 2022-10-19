#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameConnectedFriendChatMsg_t {
        namespace {
            inline app::GameConnectedFriendChatMsg_t__Class* type_info_ref = nullptr;
        }
        inline app::GameConnectedFriendChatMsg_t__Class** type_info = &type_info_ref;
        inline app::GameConnectedFriendChatMsg_t__Class* get_class() {
            return il2cpp::get_class<app::GameConnectedFriendChatMsg_t__Class>(type_info, "Steamworks", "GameConnectedFriendChatMsg_t");
        }
        inline app::GameConnectedFriendChatMsg_t* create() {
            return il2cpp::create_object<app::GameConnectedFriendChatMsg_t>(get_class());
        }
        inline app::GameConnectedFriendChatMsg_t__Boxed* box(app::GameConnectedFriendChatMsg_t value) {
            return il2cpp::box_value<app::GameConnectedFriendChatMsg_t__Boxed>(get_class(), value);
        }
    } // namespace GameConnectedFriendChatMsg_t
} // namespace app::classes::types
