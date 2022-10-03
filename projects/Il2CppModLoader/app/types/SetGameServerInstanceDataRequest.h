#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGameServerInstanceDataRequest__Class** type_info;
        inline app::SetGameServerInstanceDataRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceDataRequest__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceDataRequest");
        }
        inline app::SetGameServerInstanceDataRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceDataRequest>(get_class());
        }
    } // namespace SetGameServerInstanceDataRequest
} // namespace app::classes::types
