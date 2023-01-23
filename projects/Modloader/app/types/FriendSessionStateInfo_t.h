#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FriendSessionStateInfo_t__Class.h>
#include <Modloader/app/structs/FriendSessionStateInfo_t.h>
#include <Modloader/app/structs/FriendSessionStateInfo_t__Boxed.h>

namespace app::classes::types {
    namespace FriendSessionStateInfo_t {
        namespace {
            inline app::FriendSessionStateInfo_t__Class* type_info_ref = nullptr;
        }
        inline app::FriendSessionStateInfo_t__Class** type_info = &type_info_ref;
        inline app::FriendSessionStateInfo_t__Class* get_class() {
            return il2cpp::get_class<app::FriendSessionStateInfo_t__Class>(type_info, "Steamworks", "FriendSessionStateInfo_t");
        }
        inline app::FriendSessionStateInfo_t* create() {
            return il2cpp::create_object<app::FriendSessionStateInfo_t>(get_class());
        }
        inline app::FriendSessionStateInfo_t__Boxed* box(app::FriendSessionStateInfo_t value) {
            return il2cpp::box_value<app::FriendSessionStateInfo_t__Boxed>(get_class(), value);
        }
    } // namespace FriendSessionStateInfo_t
} // namespace app::classes::types
