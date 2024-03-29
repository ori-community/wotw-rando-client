#pragma once
#include <Modloader/app/structs/FriendAccessAllowedAttribute_1.h>
#include <Modloader/app/structs/FriendAccessAllowedAttribute_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendAccessAllowedAttribute_1 {
        inline app::FriendAccessAllowedAttribute_1__Class** type_info() {
            static app::FriendAccessAllowedAttribute_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FriendAccessAllowedAttribute_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FriendAccessAllowedAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::FriendAccessAllowedAttribute_1__Class>(type_info(), "System.Runtime.CompilerServices", "FriendAccessAllowedAttribute");
        }
        inline app::FriendAccessAllowedAttribute_1* create() {
            return il2cpp::create_object<app::FriendAccessAllowedAttribute_1>(get_class());
        }
    } // namespace FriendAccessAllowedAttribute_1
} // namespace app::classes::types
