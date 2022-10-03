#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoRequestParams {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerCombinedInfoRequestParams__Class** type_info;
        inline app::GetPlayerCombinedInfoRequestParams__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoRequestParams__Class>(type_info, "PlayFab.ClientModels", "GetPlayerCombinedInfoRequestParams");
        }
        inline app::GetPlayerCombinedInfoRequestParams* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoRequestParams>(get_class());
        }
    } // namespace GetPlayerCombinedInfoRequestParams
} // namespace app::classes::types
