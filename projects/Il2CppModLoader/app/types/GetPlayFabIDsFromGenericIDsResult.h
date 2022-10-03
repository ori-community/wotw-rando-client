#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGenericIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromGenericIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromGenericIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGenericIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsResult");
        }
        inline app::GetPlayFabIDsFromGenericIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGenericIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGenericIDsResult
} // namespace app::classes::types
