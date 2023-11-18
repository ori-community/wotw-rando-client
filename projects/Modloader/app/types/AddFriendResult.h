#pragma once
#include <Modloader/app/structs/AddFriendResult.h>
#include <Modloader/app/structs/AddFriendResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddFriendResult {
        inline app::AddFriendResult__Class** type_info() {
            static app::AddFriendResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddFriendResult__Class**)(modloader::win::memory::resolve_rva(0x0476C1D0));
            }
            return cache;
        }
        inline app::AddFriendResult__Class* get_class() {
            return il2cpp::get_class<app::AddFriendResult__Class>(type_info(), "PlayFab.ClientModels", "AddFriendResult");
        }
        inline app::AddFriendResult* create() {
            return il2cpp::create_object<app::AddFriendResult>(get_class());
        }
    } // namespace AddFriendResult
} // namespace app::classes::types
