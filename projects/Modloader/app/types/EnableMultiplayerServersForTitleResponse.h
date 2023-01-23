#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnableMultiplayerServersForTitleResponse__Class.h>
#include <Modloader/app/structs/EnableMultiplayerServersForTitleResponse.h>

namespace app::classes::types {
    namespace EnableMultiplayerServersForTitleResponse {
        inline app::EnableMultiplayerServersForTitleResponse__Class** type_info = (app::EnableMultiplayerServersForTitleResponse__Class**)(modloader::win::memory::resolve_rva(0x04705820));
        inline app::EnableMultiplayerServersForTitleResponse__Class* get_class() {
            return il2cpp::get_class<app::EnableMultiplayerServersForTitleResponse__Class>(type_info, "PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleResponse");
        }
        inline app::EnableMultiplayerServersForTitleResponse* create() {
            return il2cpp::create_object<app::EnableMultiplayerServersForTitleResponse>(get_class());
        }
    } // namespace EnableMultiplayerServersForTitleResponse
} // namespace app::classes::types
