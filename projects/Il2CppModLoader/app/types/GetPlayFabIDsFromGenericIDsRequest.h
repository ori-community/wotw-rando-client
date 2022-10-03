#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGenericIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromGenericIDsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromGenericIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGenericIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsRequest");
        }
        inline app::GetPlayFabIDsFromGenericIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGenericIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGenericIDsRequest
} // namespace app::classes::types
