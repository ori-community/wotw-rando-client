#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerProfileResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerProfileResult__Class** type_info;
        inline app::GetPlayerProfileResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerProfileResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayerProfileResult");
        }
        inline app::GetPlayerProfileResult* create() {
            return il2cpp::create_object<app::GetPlayerProfileResult>(get_class());
        }
    } // namespace GetPlayerProfileResult
} // namespace app::classes::types
