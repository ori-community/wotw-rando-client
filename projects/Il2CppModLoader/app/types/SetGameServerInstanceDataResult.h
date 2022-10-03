#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetGameServerInstanceDataResult__Class** type_info;
        inline app::SetGameServerInstanceDataResult__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceDataResult__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceDataResult");
        }
        inline app::SetGameServerInstanceDataResult* create() {
            return il2cpp::create_object<app::SetGameServerInstanceDataResult>(get_class());
        }
    } // namespace SetGameServerInstanceDataResult
} // namespace app::classes::types
