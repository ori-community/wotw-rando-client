#pragma once
#include <Modloader/app/structs/EnableMultiplayerServersForTitleRequest.h>
#include <Modloader/app/structs/EnableMultiplayerServersForTitleRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableMultiplayerServersForTitleRequest {
        inline app::EnableMultiplayerServersForTitleRequest__Class** type_info() {
            static app::EnableMultiplayerServersForTitleRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnableMultiplayerServersForTitleRequest__Class**)(modloader::win::memory::resolve_rva(0x04786AD8));
            }
            return cache;
        }
        inline app::EnableMultiplayerServersForTitleRequest__Class* get_class() {
            return il2cpp::get_class<app::EnableMultiplayerServersForTitleRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleRequest");
        }
        inline app::EnableMultiplayerServersForTitleRequest* create() {
            return il2cpp::create_object<app::EnableMultiplayerServersForTitleRequest>(get_class());
        }
    } // namespace EnableMultiplayerServersForTitleRequest
} // namespace app::classes::types
