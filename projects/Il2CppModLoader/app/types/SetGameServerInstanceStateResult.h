#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceStateResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGameServerInstanceStateResult__Class** type_info;
        inline app::SetGameServerInstanceStateResult__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceStateResult__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceStateResult");
        }
        inline app::SetGameServerInstanceStateResult* create() {
            return il2cpp::create_object<app::SetGameServerInstanceStateResult>(get_class());
        }
    } // namespace SetGameServerInstanceStateResult
} // namespace app::classes::types
