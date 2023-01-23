#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FriendsIsFollowing_t__Class.h>
#include <Modloader/app/structs/FriendsIsFollowing_t.h>
#include <Modloader/app/structs/FriendsIsFollowing_t__Boxed.h>

namespace app::classes::types {
    namespace FriendsIsFollowing_t {
        namespace {
            inline app::FriendsIsFollowing_t__Class* type_info_ref = nullptr;
        }
        inline app::FriendsIsFollowing_t__Class** type_info = &type_info_ref;
        inline app::FriendsIsFollowing_t__Class* get_class() {
            return il2cpp::get_class<app::FriendsIsFollowing_t__Class>(type_info, "Steamworks", "FriendsIsFollowing_t");
        }
        inline app::FriendsIsFollowing_t* create() {
            return il2cpp::create_object<app::FriendsIsFollowing_t>(get_class());
        }
        inline app::FriendsIsFollowing_t__Boxed* box(app::FriendsIsFollowing_t value) {
            return il2cpp::box_value<app::FriendsIsFollowing_t__Boxed>(get_class(), value);
        }
    } // namespace FriendsIsFollowing_t
} // namespace app::classes::types
