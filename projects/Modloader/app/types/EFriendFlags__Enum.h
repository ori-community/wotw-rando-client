#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EFriendFlags__Enum__Class.h>
#include <Modloader/app/structs/EFriendFlags__Enum.h>

namespace app::classes::types {
    namespace EFriendFlags__Enum {
        namespace {
            inline app::EFriendFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EFriendFlags__Enum__Class** type_info = &type_info_ref;
        inline app::EFriendFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EFriendFlags__Enum__Class>(type_info, "Steamworks", "EFriendFlags");
        }
        inline app::EFriendFlags__Enum* create() {
            return il2cpp::create_object<app::EFriendFlags__Enum>(get_class());
        }
    } // namespace EFriendFlags__Enum
} // namespace app::classes::types
