#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromKongregateIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromKongregateIDsRequest__Class** type_info;
        inline app::GetPlayFabIDsFromKongregateIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromKongregateIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsRequest");
        }
        inline app::GetPlayFabIDsFromKongregateIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromKongregateIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromKongregateIDsRequest
} // namespace app::classes::types
