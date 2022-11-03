#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FriendGameInfo_t {
        namespace {
            inline app::FriendGameInfo_t__Class* type_info_ref = nullptr;
        }
        inline app::FriendGameInfo_t__Class** type_info = &type_info_ref;
        inline app::FriendGameInfo_t__Class* get_class() {
            return il2cpp::get_class<app::FriendGameInfo_t__Class>(type_info, "Steamworks", "FriendGameInfo_t");
        }
        inline app::FriendGameInfo_t* create() {
            return il2cpp::create_object<app::FriendGameInfo_t>(get_class());
        }
        inline app::FriendGameInfo_t__Boxed* box(app::FriendGameInfo_t value) {
            return il2cpp::box_value<app::FriendGameInfo_t__Boxed>(get_class(), value);
        }
    } // namespace FriendGameInfo_t
} // namespace app::classes::types
