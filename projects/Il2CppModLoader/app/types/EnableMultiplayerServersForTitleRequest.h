#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnableMultiplayerServersForTitleRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnableMultiplayerServersForTitleRequest__Class** type_info;
        inline app::EnableMultiplayerServersForTitleRequest__Class* get_class() {
            return il2cpp::get_class<app::EnableMultiplayerServersForTitleRequest__Class>(type_info, "PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleRequest");
        }
        inline app::EnableMultiplayerServersForTitleRequest* create() {
            return il2cpp::create_object<app::EnableMultiplayerServersForTitleRequest>(get_class());
        }
    } // namespace EnableMultiplayerServersForTitleRequest
} // namespace app::classes::types
