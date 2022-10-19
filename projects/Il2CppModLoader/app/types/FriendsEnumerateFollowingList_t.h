#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FriendsEnumerateFollowingList_t {
        namespace {
            inline app::FriendsEnumerateFollowingList_t__Class* type_info_ref = nullptr;
        }
        inline app::FriendsEnumerateFollowingList_t__Class** type_info = &type_info_ref;
        inline app::FriendsEnumerateFollowingList_t__Class* get_class() {
            return il2cpp::get_class<app::FriendsEnumerateFollowingList_t__Class>(type_info, "Steamworks", "FriendsEnumerateFollowingList_t");
        }
        inline app::FriendsEnumerateFollowingList_t* create() {
            return il2cpp::create_object<app::FriendsEnumerateFollowingList_t>(get_class());
        }
        inline app::FriendsEnumerateFollowingList_t__Boxed* box(app::FriendsEnumerateFollowingList_t value) {
            return il2cpp::box_value<app::FriendsEnumerateFollowingList_t__Boxed>(get_class(), value);
        }
    } // namespace FriendsEnumerateFollowingList_t
} // namespace app::classes::types
