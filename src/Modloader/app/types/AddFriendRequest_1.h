#pragma once
#include <Modloader/app/structs/AddFriendRequest_1.h>
#include <Modloader/app/structs/AddFriendRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddFriendRequest_1 {
        inline app::AddFriendRequest_1__Class** type_info() {
            static app::AddFriendRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddFriendRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04776000));
            }
            return cache;
        }
        inline app::AddFriendRequest_1__Class* get_class() {
            return il2cpp::get_class<app::AddFriendRequest_1__Class>(type_info(), "PlayFab.ServerModels", "AddFriendRequest");
        }
        inline app::AddFriendRequest_1* create() {
            return il2cpp::create_object<app::AddFriendRequest_1>(get_class());
        }
    } // namespace AddFriendRequest_1
} // namespace app::classes::types
