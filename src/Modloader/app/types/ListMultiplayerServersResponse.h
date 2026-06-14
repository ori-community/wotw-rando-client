#pragma once
#include <Modloader/app/structs/ListMultiplayerServersResponse.h>
#include <Modloader/app/structs/ListMultiplayerServersResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMultiplayerServersResponse {
        inline app::ListMultiplayerServersResponse__Class** type_info() {
            static app::ListMultiplayerServersResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMultiplayerServersResponse__Class**)(modloader::win::memory::resolve_rva(0x0477C428));
            }
            return cache;
        }
        inline app::ListMultiplayerServersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMultiplayerServersResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "ListMultiplayerServersResponse");
        }
        inline app::ListMultiplayerServersResponse* create() {
            return il2cpp::create_object<app::ListMultiplayerServersResponse>(get_class());
        }
    } // namespace ListMultiplayerServersResponse
} // namespace app::classes::types
