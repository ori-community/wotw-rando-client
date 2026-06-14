#pragma once
#include <Modloader/app/structs/EnableMultiplayerServersForTitleResponse.h>
#include <Modloader/app/structs/EnableMultiplayerServersForTitleResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableMultiplayerServersForTitleResponse {
        inline app::EnableMultiplayerServersForTitleResponse__Class** type_info() {
            static app::EnableMultiplayerServersForTitleResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnableMultiplayerServersForTitleResponse__Class**)(modloader::win::memory::resolve_rva(0x04705820));
            }
            return cache;
        }
        inline app::EnableMultiplayerServersForTitleResponse__Class* get_class() {
            return il2cpp::get_class<app::EnableMultiplayerServersForTitleResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleResponse");
        }
        inline app::EnableMultiplayerServersForTitleResponse* create() {
            return il2cpp::create_object<app::EnableMultiplayerServersForTitleResponse>(get_class());
        }
    } // namespace EnableMultiplayerServersForTitleResponse
} // namespace app::classes::types
