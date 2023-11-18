#pragma once
#include <Modloader/app/structs/EFriendFlags__Enum.h>
#include <Modloader/app/structs/EFriendFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EFriendFlags__Enum {
        inline app::EFriendFlags__Enum__Class** type_info() {
            static app::EFriendFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EFriendFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EFriendFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EFriendFlags__Enum__Class>(type_info(), "Steamworks", "EFriendFlags");
        }
        inline app::EFriendFlags__Enum* create() {
            return il2cpp::create_object<app::EFriendFlags__Enum>(get_class());
        }
    } // namespace EFriendFlags__Enum
} // namespace app::classes::types
