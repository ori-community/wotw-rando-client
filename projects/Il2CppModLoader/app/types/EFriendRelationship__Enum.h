#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EFriendRelationship__Enum {
        namespace {
            app::EFriendRelationship__Enum__Class* type_info_ref = nullptr;
        }
        app::EFriendRelationship__Enum__Class** type_info = &type_info_ref;
        inline app::EFriendRelationship__Enum__Class* get_class() {
            return il2cpp::get_class<app::EFriendRelationship__Enum__Class>(type_info, "Steamworks", "EFriendRelationship");
        }
        inline app::EFriendRelationship__Enum* create() {
            return il2cpp::create_object<app::EFriendRelationship__Enum>(get_class());
        }
    } // namespace EFriendRelationship__Enum
} // namespace app::classes::types
