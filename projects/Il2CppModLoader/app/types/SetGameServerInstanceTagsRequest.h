#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceTagsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGameServerInstanceTagsRequest__Class** type_info;
        inline app::SetGameServerInstanceTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceTagsRequest__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceTagsRequest");
        }
        inline app::SetGameServerInstanceTagsRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceTagsRequest>(get_class());
        }
    } // namespace SetGameServerInstanceTagsRequest
} // namespace app::classes::types
