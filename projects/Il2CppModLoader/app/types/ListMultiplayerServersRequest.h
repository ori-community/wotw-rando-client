#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMultiplayerServersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMultiplayerServersRequest__Class** type_info;
        inline app::ListMultiplayerServersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMultiplayerServersRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListMultiplayerServersRequest");
        }
        inline app::ListMultiplayerServersRequest* create() {
            return il2cpp::create_object<app::ListMultiplayerServersRequest>(get_class());
        }
    } // namespace ListMultiplayerServersRequest
} // namespace app::classes::types
