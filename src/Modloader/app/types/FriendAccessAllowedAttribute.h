#pragma once
#include <Modloader/app/structs/FriendAccessAllowedAttribute.h>
#include <Modloader/app/structs/FriendAccessAllowedAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendAccessAllowedAttribute {
        inline app::FriendAccessAllowedAttribute__Class** type_info() {
            static app::FriendAccessAllowedAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FriendAccessAllowedAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FriendAccessAllowedAttribute__Class* get_class() {
            return il2cpp::get_class<app::FriendAccessAllowedAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "FriendAccessAllowedAttribute");
        }
        inline app::FriendAccessAllowedAttribute* create() {
            return il2cpp::create_object<app::FriendAccessAllowedAttribute>(get_class());
        }
    } // namespace FriendAccessAllowedAttribute
} // namespace app::classes::types
