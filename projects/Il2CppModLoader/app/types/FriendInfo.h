#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FriendInfo {
        inline app::FriendInfo__Class** type_info = (app::FriendInfo__Class**)(modloader::win::memory::resolve_rva(0x04708E60));
        inline app::FriendInfo__Class* get_class() {
            return il2cpp::get_class<app::FriendInfo__Class>(type_info, "PlayFab.ClientModels", "FriendInfo");
        }
        inline app::FriendInfo* create() {
            return il2cpp::create_object<app::FriendInfo>(get_class());
        }
        inline app::FriendInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FriendInfo__Array>(get_class(), size);
        }
        inline app::FriendInfo__Array* create_array(const std::vector<app::FriendInfo*>& items) {
            return il2cpp::array_new<app::FriendInfo__Array>(get_class(), items);
        }
    } // namespace FriendInfo
} // namespace app::classes::types
