#pragma once
#include <Modloader/app/structs/RemoveFriendResult.h>
#include <Modloader/app/structs/RemoveFriendResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveFriendResult {
        inline app::RemoveFriendResult__Class** type_info() {
            static app::RemoveFriendResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveFriendResult__Class**)(modloader::win::memory::resolve_rva(0x04735710));
            }
            return cache;
        }
        inline app::RemoveFriendResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveFriendResult__Class>(type_info(), "PlayFab.ClientModels", "RemoveFriendResult");
        }
        inline app::RemoveFriendResult* create() {
            return il2cpp::create_object<app::RemoveFriendResult>(get_class());
        }
    } // namespace RemoveFriendResult
} // namespace app::classes::types
