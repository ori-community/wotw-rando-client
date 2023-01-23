#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListMultiplayerServersResponse__Class.h>
#include <Modloader/app/structs/ListMultiplayerServersResponse.h>

namespace app::classes::types {
    namespace ListMultiplayerServersResponse {
        inline app::ListMultiplayerServersResponse__Class** type_info = (app::ListMultiplayerServersResponse__Class**)(modloader::win::memory::resolve_rva(0x0477C428));
        inline app::ListMultiplayerServersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMultiplayerServersResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListMultiplayerServersResponse");
        }
        inline app::ListMultiplayerServersResponse* create() {
            return il2cpp::create_object<app::ListMultiplayerServersResponse>(get_class());
        }
    } // namespace ListMultiplayerServersResponse
} // namespace app::classes::types
