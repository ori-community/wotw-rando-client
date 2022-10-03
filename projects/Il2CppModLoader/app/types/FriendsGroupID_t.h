#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FriendsGroupID_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FriendsGroupID_t__Class** type_info;
        inline app::FriendsGroupID_t__Class* get_class() {
            return il2cpp::get_class<app::FriendsGroupID_t__Class>(type_info, "Steamworks", "FriendsGroupID_t");
        }
        inline app::FriendsGroupID_t* create() {
            return il2cpp::create_object<app::FriendsGroupID_t>(get_class());
        }
        inline app::FriendsGroupID_t__Boxed* box(app::FriendsGroupID_t value) {
            return il2cpp::box_value<app::FriendsGroupID_t__Boxed>(get_class(), value);
        }
    } // namespace FriendsGroupID_t
} // namespace app::classes::types
