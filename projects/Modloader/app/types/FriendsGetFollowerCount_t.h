#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FriendsGetFollowerCount_t__Class.h>
#include <Modloader/app/structs/FriendsGetFollowerCount_t.h>
#include <Modloader/app/structs/FriendsGetFollowerCount_t__Boxed.h>

namespace app::classes::types {
    namespace FriendsGetFollowerCount_t {
        namespace {
            inline app::FriendsGetFollowerCount_t__Class* type_info_ref = nullptr;
        }
        inline app::FriendsGetFollowerCount_t__Class** type_info = &type_info_ref;
        inline app::FriendsGetFollowerCount_t__Class* get_class() {
            return il2cpp::get_class<app::FriendsGetFollowerCount_t__Class>(type_info, "Steamworks", "FriendsGetFollowerCount_t");
        }
        inline app::FriendsGetFollowerCount_t* create() {
            return il2cpp::create_object<app::FriendsGetFollowerCount_t>(get_class());
        }
        inline app::FriendsGetFollowerCount_t__Boxed* box(app::FriendsGetFollowerCount_t value) {
            return il2cpp::box_value<app::FriendsGetFollowerCount_t__Boxed>(get_class(), value);
        }
    } // namespace FriendsGetFollowerCount_t
} // namespace app::classes::types
