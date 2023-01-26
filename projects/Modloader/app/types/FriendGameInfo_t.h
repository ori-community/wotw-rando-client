#pragma once
#include <Modloader/app/structs/FriendGameInfo_t.h>
#include <Modloader/app/structs/FriendGameInfo_t__Boxed.h>
#include <Modloader/app/structs/FriendGameInfo_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendGameInfo_t {
        inline app::FriendGameInfo_t__Class** type_info() {
            static app::FriendGameInfo_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FriendGameInfo_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FriendGameInfo_t__Class* get_class() {
            return il2cpp::get_class<app::FriendGameInfo_t__Class>(type_info(), "Steamworks", "FriendGameInfo_t");
        }
        inline app::FriendGameInfo_t* create() {
            return il2cpp::create_object<app::FriendGameInfo_t>(get_class());
        }
        inline app::FriendGameInfo_t__Boxed* box(app::FriendGameInfo_t value) {
            return il2cpp::box_value<app::FriendGameInfo_t__Boxed>(get_class(), value);
        }
    } // namespace FriendGameInfo_t
} // namespace app::classes::types
