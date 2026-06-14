#pragma once
#include <Modloader/app/structs/FriendInfo__Array.h>
#include <Modloader/app/structs/FriendInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendInfo__Array {
        inline app::FriendInfo__Array__Class** type_info() {
            static app::FriendInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FriendInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FriendInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FriendInfo__Array__Class>(type_info(), "PlayFab.ClientModels", "FriendInfo[]");
        }
        inline app::FriendInfo__Array* create() {
            return il2cpp::create_object<app::FriendInfo__Array>(get_class());
        }
    } // namespace FriendInfo__Array
} // namespace app::classes::types
