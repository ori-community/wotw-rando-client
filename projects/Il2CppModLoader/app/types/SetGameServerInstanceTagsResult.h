#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceTagsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGameServerInstanceTagsResult__Class** type_info;
        inline app::SetGameServerInstanceTagsResult__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceTagsResult__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceTagsResult");
        }
        inline app::SetGameServerInstanceTagsResult* create() {
            return il2cpp::create_object<app::SetGameServerInstanceTagsResult>(get_class());
        }
    } // namespace SetGameServerInstanceTagsResult
} // namespace app::classes::types
