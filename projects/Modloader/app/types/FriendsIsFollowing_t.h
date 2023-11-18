#pragma once
#include <Modloader/app/structs/FriendsIsFollowing_t.h>
#include <Modloader/app/structs/FriendsIsFollowing_t__Boxed.h>
#include <Modloader/app/structs/FriendsIsFollowing_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendsIsFollowing_t {
        inline app::FriendsIsFollowing_t__Class** type_info() {
            static app::FriendsIsFollowing_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FriendsIsFollowing_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FriendsIsFollowing_t__Class* get_class() {
            return il2cpp::get_class<app::FriendsIsFollowing_t__Class>(type_info(), "Steamworks", "FriendsIsFollowing_t");
        }
        inline app::FriendsIsFollowing_t* create() {
            return il2cpp::create_object<app::FriendsIsFollowing_t>(get_class());
        }
        inline app::FriendsIsFollowing_t__Boxed* box(app::FriendsIsFollowing_t value) {
            return il2cpp::box_value<app::FriendsIsFollowing_t__Boxed>(get_class(), value);
        }
    } // namespace FriendsIsFollowing_t
} // namespace app::classes::types
