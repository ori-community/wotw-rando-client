#pragma once
#include <Modloader/app/structs/FriendInfo.h>
#include <Modloader/app/structs/FriendInfo__Array.h>
#include <Modloader/app/structs/FriendInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendInfo {
        inline app::FriendInfo__Class** type_info() {
            static app::FriendInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FriendInfo__Class**)(modloader::win::memory::resolve_rva(0x04708E60));
            }
            return cache;
        }
        inline app::FriendInfo__Class* get_class() {
            return il2cpp::get_class<app::FriendInfo__Class>(type_info(), "PlayFab.ClientModels", "FriendInfo");
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
