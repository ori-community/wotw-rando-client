#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FriendInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FriendInfo__Class** type_info;
        inline app::FriendInfo__Class* get_class() {
            return il2cpp::get_class<app::FriendInfo__Class>(type_info, "PlayFab.ClientModels", "FriendInfo");
        }
        inline app::FriendInfo* create() {
            return il2cpp::create_object<app::FriendInfo>(get_class());
        }
        inline app::FriendInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FriendInfo__Array>(get_class(), size);
        }
    } // namespace FriendInfo
} // namespace app::classes::types
