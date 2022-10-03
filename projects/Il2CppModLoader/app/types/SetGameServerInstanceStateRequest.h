#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceStateRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGameServerInstanceStateRequest__Class** type_info;
        inline app::SetGameServerInstanceStateRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceStateRequest__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceStateRequest");
        }
        inline app::SetGameServerInstanceStateRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceStateRequest>(get_class());
        }
    } // namespace SetGameServerInstanceStateRequest
} // namespace app::classes::types
