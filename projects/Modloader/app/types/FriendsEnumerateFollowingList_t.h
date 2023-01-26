#pragma once
#include <Modloader/app/structs/FriendsEnumerateFollowingList_t.h>
#include <Modloader/app/structs/FriendsEnumerateFollowingList_t__Boxed.h>
#include <Modloader/app/structs/FriendsEnumerateFollowingList_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendsEnumerateFollowingList_t {
        inline app::FriendsEnumerateFollowingList_t__Class** type_info() {
            static app::FriendsEnumerateFollowingList_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FriendsEnumerateFollowingList_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FriendsEnumerateFollowingList_t__Class* get_class() {
            return il2cpp::get_class<app::FriendsEnumerateFollowingList_t__Class>(type_info(), "Steamworks", "FriendsEnumerateFollowingList_t");
        }
        inline app::FriendsEnumerateFollowingList_t* create() {
            return il2cpp::create_object<app::FriendsEnumerateFollowingList_t>(get_class());
        }
        inline app::FriendsEnumerateFollowingList_t__Boxed* box(app::FriendsEnumerateFollowingList_t value) {
            return il2cpp::box_value<app::FriendsEnumerateFollowingList_t__Boxed>(get_class(), value);
        }
    } // namespace FriendsEnumerateFollowingList_t
} // namespace app::classes::types
