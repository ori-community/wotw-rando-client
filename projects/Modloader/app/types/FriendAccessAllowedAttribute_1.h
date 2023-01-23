#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FriendAccessAllowedAttribute_1__Class.h>
#include <Modloader/app/structs/FriendAccessAllowedAttribute_1.h>

namespace app::classes::types {
    namespace FriendAccessAllowedAttribute_1 {
        namespace {
            inline app::FriendAccessAllowedAttribute_1__Class* type_info_ref = nullptr;
        }
        inline app::FriendAccessAllowedAttribute_1__Class** type_info = &type_info_ref;
        inline app::FriendAccessAllowedAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::FriendAccessAllowedAttribute_1__Class>(type_info, "System.Runtime.CompilerServices", "FriendAccessAllowedAttribute");
        }
        inline app::FriendAccessAllowedAttribute_1* create() {
            return il2cpp::create_object<app::FriendAccessAllowedAttribute_1>(get_class());
        }
    } // namespace FriendAccessAllowedAttribute_1
} // namespace app::classes::types
