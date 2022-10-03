#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EFriendFlags__Enum {
        namespace {
            app::EFriendFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::EFriendFlags__Enum__Class** type_info = &type_info_ref;
        inline app::EFriendFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EFriendFlags__Enum__Class>(type_info, "Steamworks", "EFriendFlags");
        }
        inline app::EFriendFlags__Enum* create() {
            return il2cpp::create_object<app::EFriendFlags__Enum>(get_class());
        }
    } // namespace EFriendFlags__Enum
} // namespace app::classes::types
